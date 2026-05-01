/*
 * XREFs of Windows::Internal::MakeAsyncOperation_Windows::Internal::CBasicResult_unsigned_char_0__bool_Windows::Internal::ComTaskPoolHandler__lambda_75b78523e3da460933f50e5d76bfa16b___ @ 0x180031CB4
 * Callers:
 *     ?LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@5@@Z @ 0x18002E740 (-LaunchAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IAsyncOp.c)
 * Callees:
 *     ??0?$AsyncOperation@U?$IAsyncOperation@_N@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@_N@23@V?$CBasicResult@E$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18003C5D0 (--0-$AsyncOperation@U-$IAsyncOperation@_N@Foundation@Windows@@U-$IAsyncOperationCompletedHandler.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18004BC44 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Internal::MakeAsyncOperation_Windows::Internal::CBasicResult_unsigned_char_0__bool_Windows::Internal::ComTaskPoolHandler__lambda_75b78523e3da460933f50e5d76bfa16b___(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  int v10; // ebx
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rdi

  v7 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    *v7 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
    v7[1] = *a4;
    v9 = a4 + 1;
    v7[2] = 0LL;
    if ( v7 + 2 != a4 + 1 )
    {
      v7[2] = *v9;
      *v9 = 0LL;
    }
    *v7 = &off_180054200;
    *((_DWORD *)v7 + 6) = 0;
    `eh vector constructor iterator'(
      v7 + 4,
      8uLL,
      1uLL,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>);
    *((_DWORD *)v8 + 6) = 0;
  }
  else
  {
    v8 = 0LL;
  }
  *a2 = 0LL;
  if ( !v8 )
    return (unsigned int)-2147024882;
  v11 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11 )
  {
    v11 = (_QWORD *)Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<bool>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Internal::CBasicResult<unsigned char,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
                      v11,
                      a1,
                      L"Windows.Foundation.IAsyncOperation`1<Boolean>",
                      0LL);
    v12 = v11;
    v13 = v11;
  }
  else
  {
    v12 = 0LL;
    v13 = 0LL;
  }
  if ( !v11 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(v12[1] + 16LL))(v12 + 1);
    return (unsigned int)-2147024882;
  }
  v13[32] = v8;
  v10 = (*(__int64 (__fastcall **)(_QWORD *))(v13[1] + 104LL))(v13 + 1);
  if ( v10 >= 0 )
  {
    *a2 = (unsigned __int64)(v13 + 22) & -(__int64)(v13 != 0LL);
    v13 = 0LL;
  }
  if ( v13 )
    (*(void (__fastcall **)(_QWORD *))(v13[1] + 16LL))(v13 + 1);
  return (unsigned int)v10;
}
