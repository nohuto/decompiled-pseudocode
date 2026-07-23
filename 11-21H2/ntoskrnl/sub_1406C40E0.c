/*
 * XREFs of sub_1406C40E0 @ 0x1406C40E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ZwQueryDefaultLocale @ 0x14041BA00 (ZwQueryDefaultLocale.c)
 *     sub_1406C421C @ 0x1406C421C (sub_1406C421C.c)
 *     MmMapViewOfSection @ 0x140785150 (MmMapViewOfSection.c)
 */

NTSTATUS __fastcall sub_1406C40E0(_QWORD *a1, DWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  NTSTATUS result; // eax
  int v7; // ebx
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  _DWORD v9[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v10; // [rsp+68h] [rbp-20h] BYREF
  __int64 v11; // [rsp+70h] [rbp-18h] BYREF
  DWORD DefaultLocaleId; // [rsp+A8h] [rbp+20h] BYREF

  DefaultLocaleId = 0;
  Object = 0LL;
  if ( !*((_BYTE *)KeGetCurrentThread() + 562) )
    return -1073741637;
  v4 = 0x7FFFFFFF0000LL;
  v5 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v5 = (__int64)a1;
  *(_QWORD *)v5 = *(_QWORD *)v5;
  if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
    v4 = (__int64)a2;
  *(_DWORD *)v4 = *(_DWORD *)v4;
  result = ZwQueryDefaultLocale(0, &DefaultLocaleId);
  if ( result >= 0 )
  {
    result = sub_1406C421C(&Object);
    if ( result >= 0 )
    {
      v10 = 0LL;
      v9[0] = 0;
      v9[1] = 0;
      v11 = 0LL;
      v7 = MmMapViewOfSection(Object, *((_QWORD *)KeGetCurrentThread() + 23), &v10, 0LL, 0LL, v9, &v11, 1, 0x400000, 2);
      ObfDereferenceObject(Object);
      if ( v7 >= 0 )
      {
        *a1 = v10;
        *a2 = DefaultLocaleId;
      }
      return v7;
    }
  }
  return result;
}
