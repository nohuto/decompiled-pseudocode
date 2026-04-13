/*
 * XREFs of ?CommitAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18007FDF0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022218 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?CommitOperationName@?A0xa4ce9b83@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x18007CE40 (--0-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler_ea_18007CE40.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl::CommitAsync(
        Windows::Services::TargetedContent::Internal::TargetedContentActionInternalImpl *this,
        struct Windows::Foundation::IAsyncAction **a2)
{
  char *v3; // rdi
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  void *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  int v9; // ebx
  _DWORD v11[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v3 = (char *)this - 48;
  v11[0] = 3;
  v11[1] = 130;
  v11[2] = 0;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( !v4 )
  {
    *a2 = 0LL;
    goto LABEL_12;
  }
  v4[1] = v3;
  *v4 = off_1800FF300;
  *((_DWORD *)v4 + 4) = 0;
  `eh vector constructor iterator'(
    v4 + 3,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *((_DWORD *)v5 + 4) = 0;
  *a2 = 0LL;
  v6 = operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v6
    || (v7 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::CommitOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
               (__int64)v6,
               (__int64)v11,
               (__int64)L"Windows.Foundation.IAsyncAction",
               1),
        (v8 = v7) == 0) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
LABEL_12:
    v9 = -2147024882;
    goto LABEL_13;
  }
  *(_QWORD *)(v7 + 256) = v5;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 104LL))(v7 + 8);
  if ( v9 >= 0 )
  {
    *a2 = (struct Windows::Foundation::IAsyncAction *)(v8 + 176);
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  if ( v9 >= 0 )
    return 0LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCC,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\targetedcontentactions.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
