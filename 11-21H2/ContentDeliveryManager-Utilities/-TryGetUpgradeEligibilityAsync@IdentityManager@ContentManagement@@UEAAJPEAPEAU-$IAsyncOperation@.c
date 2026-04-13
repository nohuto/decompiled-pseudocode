/*
 * XREFs of ?TryGetUpgradeEligibilityAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Z @ 0x180046620
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180022218 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ??0?$AsyncOperation@U?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@23@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@QEAA@$$QEAVComTaskPoolHandler@12@QEBGW4TrustLevel@@@Z @ 0x1800276B8 (--0-$AsyncOperation@U-$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ContentManagement::IdentityManager::TryGetUpgradeEligibilityAsync(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  int v6; // edi
  void *v7; // rax
  __int64 v8; // rbx
  _DWORD v10[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v3 = a1 - 48;
  v10[0] = 3;
  v10[1] = 130;
  v10[2] = 0;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    v4[1] = v3;
    *v4 = &Windows::Internal::COperationLambdaVar<0,_lambda_88e8518c21b209df1a80e5a49785653d_,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,>::`vftable';
    *((_DWORD *)v4 + 4) = 0;
    `eh vector constructor iterator'(
      v4 + 3,
      8uLL,
      1,
      (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
      (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
    *((_DWORD *)v5 + 4) = 0;
  }
  else
  {
    v5 = 0LL;
  }
  *a2 = 0LL;
  if ( !v5 )
    goto LABEL_5;
  v7 = operator new(0x148uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
    v8 = Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeEligibilityState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::AsyncOperation<Windows::Foundation::IAsyncOperation<enum ContentManagement::SVUpgradeEligibilityState>,Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>,Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
           (__int64)v7,
           (__int64)v10,
           (__int64)L"Windows.Foundation.IAsyncOperation`1<ContentManagement.SVUpgradeEligibilityState>",
           0);
  else
    v8 = 0LL;
  if ( !v8 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v5)(v5, 1LL);
LABEL_5:
    v6 = -2147024882;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x277,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  *(_QWORD *)(v8 + 256) = v5;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 104LL))(v8 + 8);
  if ( v6 >= 0 )
  {
    *a2 = v8 + 176;
    v8 = 0LL;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v8 + 8) + 16LL))(v8 + 8);
  if ( v6 < 0 )
    goto LABEL_16;
  return 0LL;
}
