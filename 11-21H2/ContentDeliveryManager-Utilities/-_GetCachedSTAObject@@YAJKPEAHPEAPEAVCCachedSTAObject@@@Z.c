/*
 * XREFs of ?_GetCachedSTAObject@@YAJKPEAHPEAPEAVCCachedSTAObject@@@Z @ 0x180047E1C
 * Callers:
 *     ??R_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@QEBAJAEAVCNoResult@Internal@Windows@@@Z @ 0x18002B1F8 (--R_lambda_a1ff6082cb2eb641f5b40d58c2b5fcec_@@QEBAJAEAVCNoResult@Internal@Windows@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall _GetCachedSTAObject(DWORD dwTlsIndex, int *a2, struct CCachedSTAObject **a3)
{
  HRESULT v6; // ebx
  volatile signed __int32 *Value; // rax
  _QWORD *v8; // rax
  void *v9; // rdi
  int v11; // [rsp+48h] [rbp+10h] BYREF
  int v12; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( CoGetApartmentType((APTTYPE *)&v11, (APTTYPEQUALIFIER *)&v12) < 0 || v11 != 3 && v11 )
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
    v8 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      v8[4] = 0LL;
      *((_DWORD *)v8 + 10) = 0;
      v8[2] = 0LL;
      *v8 = &CCachedSTAObject::`vftable';
      *((_DWORD *)v8 + 2) = 1;
      *((_DWORD *)v8 + 6) = dwTlsIndex;
      v6 = CoRegisterInitializeSpy((IInitializeSpy *)v8, (ULARGE_INTEGER *)v8 + 2);
      if ( v6 >= 0 )
      {
        *((_DWORD *)v9 + 10) = 1;
        if ( !CCachedSTAObject::s_hmod )
          GetModuleHandleExW(4u, (LPCWSTR)&CCachedSTAObject::s_hmod, &CCachedSTAObject::s_hmod);
        TlsSetValue(dwTlsIndex, v9);
        *a3 = (struct CCachedSTAObject *)v9;
        _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
        v6 = 1;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 2, 0xFFFFFFFF) == 1 )
        operator delete(v9);
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
