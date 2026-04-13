/*
 * XREFs of ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x180042CF4
 * Callers:
 *     ?CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z @ 0x18002FC64 (-CachedSTAObject_QueryInterface@@YAJKPEAHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180036C10 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CCachedSTAObject@@QEAA@XZ @ 0x18002AD70 (--0CCachedSTAObject@@QEAA@XZ.c)
 *     ?Release@CCachedSTAObject@@UEAAKXZ @ 0x18003DDE0 (-Release@CCachedSTAObject@@UEAAKXZ.c)
 */

__int64 __fastcall _GetCachedSTAObject(DWORD dwTlsIndex, int *a2, struct CCachedSTAObject **a3)
{
  HRESULT v6; // ebx
  volatile signed __int32 *Value; // rax
  CCachedSTAObject *v8; // rax
  CCachedSTAObject *v9; // rax
  CCachedSTAObject *v10; // rbp
  APTTYPE pAptType; // [rsp+58h] [rbp+10h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType != APTTYPE_MAINSTA && pAptType )
      return (unsigned int)-2147467259;
  }
  Value = (volatile signed __int32 *)TlsGetValue(dwTlsIndex);
  if ( Value )
  {
    if ( *((_DWORD *)Value + 10) )
    {
      v6 = 0;
      *a3 = (struct CCachedSTAObject *)Value;
      _InterlockedIncrement(Value + 2);
LABEL_19:
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
    if ( v8 && (v9 = CCachedSTAObject::CCachedSTAObject(v8), (v10 = v9) != 0LL) )
    {
      *((_DWORD *)v9 + 6) = dwTlsIndex;
      v6 = CoRegisterInitializeSpy((IInitializeSpy *)v9, (ULARGE_INTEGER *)v9 + 2);
      if ( v6 >= 0 )
      {
        *((_DWORD *)v10 + 10) = 1;
        if ( !CCachedSTAObject::s_hmod )
          GetModuleHandleExW(4u, (LPCWSTR)&CCachedSTAObject::s_hmod, &CCachedSTAObject::s_hmod);
        TlsSetValue(dwTlsIndex, v10);
        *a3 = v10;
        _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
        v6 = 1;
      }
      CCachedSTAObject::Release(v10);
    }
    else
    {
      v6 = -2147024882;
    }
    if ( v6 >= 0 )
      goto LABEL_19;
  }
  return (unsigned int)v6;
}
