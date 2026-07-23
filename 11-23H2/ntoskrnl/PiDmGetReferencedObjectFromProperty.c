/*
 * XREFs of PiDmGetReferencedObjectFromProperty @ 0x1407CC2C4
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x14078992C (PiDmObjectProcessPropertyChange.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PnpGetObjectProperty @ 0x1406D00E0 (PnpGetObjectProperty.c)
 *     PiDmObjectRelease @ 0x1406D6B98 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1406D8150 (PiDmGetObject.c)
 *     _PnpStringFromGuid @ 0x140788044 (_PnpStringFromGuid.c)
 *     PiDmObjectGetCachedObjectReference @ 0x1407CC404 (PiDmObjectGetCachedObjectReference.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDmGetReferencedObjectFromProperty(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        char **a7)
{
  int CachedObjectReference; // eax
  unsigned int Object; // ebx
  int ObjectProperty; // eax
  PVOID v13; // rdi
  wchar_t *v14; // rdx
  __int64 v15; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h] BYREF
  wchar_t v18[40]; // [rsp+80h] [rbp-88h] BYREF

  LODWORD(v15) = 0;
  P = 0LL;
  *a7 = 0LL;
  CachedObjectReference = PiDmObjectGetCachedObjectReference(a1, a2, a3, a5, (__int64)a7);
  Object = CachedObjectReference;
  if ( CachedObjectReference >= 0 )
  {
    if ( *((_DWORD *)*a7 + 7) != a6 )
    {
      PiDmObjectRelease(*a7);
      *a7 = 0LL;
      return (unsigned int)-1073741772;
    }
    return Object;
  }
  if ( CachedObjectReference != -1073741802 )
    return Object;
  ObjectProperty = PnpGetObjectProperty(
                     0x5A706E50u,
                     0x10u,
                     a2,
                     a1,
                     0LL,
                     0LL,
                     a5,
                     (__int64)&v15,
                     &P,
                     (unsigned int *)&v17,
                     0);
  v13 = P;
  Object = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    if ( (_DWORD)v15 == 13 )
    {
      Object = PnpStringFromGuid((int *)P, v18);
      if ( (Object & 0x80000000) != 0 )
        goto LABEL_11;
      v14 = v18;
      goto LABEL_10;
    }
    if ( (_DWORD)v15 == 18 )
    {
      v14 = (wchar_t *)P;
LABEL_10:
      Object = PiDmGetObject(a6, (__int64)v14, a7);
      goto LABEL_11;
    }
    Object = -1073741772;
  }
LABEL_11:
  if ( v13 )
    ExFreePoolWithTag(v13, 0x5A706E50u);
  return Object;
}
