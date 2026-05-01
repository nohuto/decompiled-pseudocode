/*
 * XREFs of ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x180745C7C
 * Callers:
 *     ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x180741BB0 (-CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z @ 0x180741C58 (-CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CCachedSTAObject@@QEAA@XZ @ 0x180741624 (--0CCachedSTAObject@@QEAA@XZ.c)
 *     ?InitializeCachedObject@CCachedSTAObject@@QEAAJK@Z @ 0x18074473C (-InitializeCachedObject@CCachedSTAObject@@QEAAJK@Z.c)
 *     ?Release@CCachedSTAObject@@UEAAKXZ @ 0x180744E70 (-Release@CCachedSTAObject@@UEAAKXZ.c)
 */

__int64 __fastcall _GetCachedSTAObject(DWORD a1, int *a2, struct CCachedSTAObject **a3)
{
  int v6; // ebx
  volatile signed __int32 *Value; // rax
  CCachedSTAObject *v8; // rax
  ULARGE_INTEGER *v9; // rax
  volatile signed __int32 *v10; // rbp
  APTTYPE pAptType; // [rsp+58h] [rbp+10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType != APTTYPE_MAINSTA && pAptType )
      return (unsigned int)-2147467259;
  }
  Value = (volatile signed __int32 *)TlsGetValue(a1);
  if ( Value )
  {
    if ( *((_DWORD *)Value + 10) )
    {
      v6 = 0;
      *a3 = (struct CCachedSTAObject *)Value;
      _InterlockedIncrement(Value + 2);
LABEL_17:
      if ( a2 )
        *a2 = 1;
      return (unsigned int)v6;
    }
    v6 = -2147467259;
    if ( a2 )
      *a2 = 0;
  }
  else
  {
    v8 = (CCachedSTAObject *)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v8
      && (v9 = (ULARGE_INTEGER *)CCachedSTAObject::CCachedSTAObject(v8), (v10 = (volatile signed __int32 *)v9) != 0LL) )
    {
      v6 = CCachedSTAObject::InitializeCachedObject(v9, a1);
      if ( v6 >= 0 )
      {
        TlsSetValue(a1, (LPVOID)v10);
        *a3 = (struct CCachedSTAObject *)v10;
        _InterlockedIncrement(v10 + 2);
        v6 = 1;
      }
      CCachedSTAObject::Release((CCachedSTAObject *)v10);
    }
    else
    {
      v6 = -2147024882;
    }
    if ( v6 >= 0 )
      goto LABEL_17;
  }
  return (unsigned int)v6;
}
