/*
 * XREFs of ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x1805EF3E0
 * Callers:
 *     ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x1805EABB4 (-CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z @ 0x1805EAC5C (-CachedSTAObject_SetObject@@YAJKPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CCachedSTAObject@@QEAA@XZ @ 0x1805EA3EC (--0CCachedSTAObject@@QEAA@XZ.c)
 *     ?InitializeCachedObject@CCachedSTAObject@@QEAAJK@Z @ 0x1805EDD6C (-InitializeCachedObject@CCachedSTAObject@@QEAAJK@Z.c)
 *     ?Release@CCachedSTAObject@@UEAAKXZ @ 0x1805EE530 (-Release@CCachedSTAObject@@UEAAKXZ.c)
 */

__int64 __fastcall _GetCachedSTAObject(DWORD a1, int *a2, struct CCachedSTAObject **a3)
{
  int v6; // ebx
  volatile signed __int32 *Value; // rax
  CCachedSTAObject *v8; // rax
  ULARGE_INTEGER *v9; // rax
  volatile signed __int32 *v10; // rsi
  int v12; // [rsp+48h] [rbp+10h] BYREF
  int v13; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( CoGetApartmentType((APTTYPE *)&v12, (APTTYPEQUALIFIER *)&v13) < 0 || v12 != 3 && v12 )
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
