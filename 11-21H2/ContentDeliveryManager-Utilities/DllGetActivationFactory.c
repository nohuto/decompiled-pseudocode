/*
 * XREFs of DllGetActivationFactory @ 0x1800514F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18004DC70 (-GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PE.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DllGetActivationFactory(HSTRING string, _QWORD *Ptr)
{
  PCWSTR StringRawBuffer; // r14
  const struct _GUID **v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r8
  __int64 v8; // r9
  bool i; // cf
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  unsigned int v14; // ebx
  BOOL hasEmbedNull; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+34h] [rbp-54h] BYREF
  _OWORD v18[2]; // [rsp+38h] [rbp-50h] BYREF
  int v19; // [rsp+58h] [rbp-30h]
  wchar_t v20; // [rsp+5Ch] [rbp-2Ch]

  InitOnceExecuteOnce(
    &Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::initOnceInProc_,
    (PINIT_ONCE_FN)_lambda_5f1dd388c03885d19ee806198d2ac5ef_::_lambda_invoker_cdecl_,
    0LL,
    0LL);
  byte_1801AF488 = 1;
  *Ptr = 0LL;
  if ( WindowsIsStringEmpty(string) || WindowsStringHasEmbeddedNull(string, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v18[0] = *(_OWORD *)L"activatibleClassId";
    v18[1] = *(_OWORD *)L"bleClassId";
    v19 = *(_DWORD *)L"Id";
    v20 = aActivatiblecla[18];
    v14 = -2147024809;
    RoOriginateErrorW(2147942487LL, 18LL, v18);
  }
  else
  {
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v5 = (const struct _GUID **)((*(__int64 (__fastcall **)(void *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                                                   + 40LL))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_)
                               + 8);
    v6 = (*(__int64 (__fastcall **)(void *))(Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_
                                           + 48LL))(&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_);
    for ( i = (unsigned __int64)v5 < v6; i; i = (unsigned __int64)v5 < v6 )
    {
      if ( *v5 )
      {
        v10 = (*(__int64 (**)(void))(*v5)->Data4)();
        v11 = (unsigned __int16 *)StringRawBuffer;
        v12 = v10 - (_QWORD)StringRawBuffer;
        do
        {
          v7 = *(unsigned __int16 *)((char *)v11 + v12);
          v13 = *v11 - (_DWORD)v7;
          if ( v13 )
            break;
          ++v11;
        }
        while ( (_DWORD)v7 );
        if ( !v13 )
        {
          v17 = 1;
          return (unsigned int)Microsoft::WRL::Details::GetCacheEntry(
                                 (Microsoft::WRL::Details *)&Microsoft::WRL::Details::StaticStorage<Microsoft::WRL::Details::DefaultModule<1>,0,int>::instance_,
                                 (struct Microsoft::WRL::Details::ModuleBase *)&v17,
                                 &GUID_00000035_0000_0000_c000_000000000046.Data1,
                                 *v5,
                                 Ptr);
        }
      }
      ++v5;
    }
    v14 = -2147221231;
    RoOriginateError(2147746065LL, string, v7, v8);
  }
  return v14;
}
