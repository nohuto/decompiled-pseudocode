/*
 * XREFs of ?TryGetUpgradeEligibilityAsync@IdentityManager@ContentManagement@@UEAAJPEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Z @ 0x180041720
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAsyncOperation@V?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@W4SVUpgradeEligibilityState@ContentManagement@@VComTaskPoolHandler@23@V_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAU?$IAsyncOperation@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@1@W4TrustLevel@@$$QEAV_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@@Z @ 0x180027BF8 (--$MakeAsyncOperation@V-$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Intern.c)
 *     ??0_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@QEAA@QEAVIdentityManager@ContentManagement@@@Z @ 0x180029CF8 (--0_lambda_ff6e8a7a35a946ff825a6255df1412b0_@@QEAA@QEAVIdentityManager@ContentManagement@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall ContentManagement::IdentityManager::TryGetUpgradeEligibilityAsync(__int64 a1, _QWORD *a2)
{
  _lambda_ff6e8a7a35a946ff825a6255df1412b0_ *v2; // rax
  __int64 *v3; // r8
  int v4; // eax
  unsigned int v5; // ebx
  int v7[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v9; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = _lambda_ff6e8a7a35a946ff825a6255df1412b0_::_lambda_ff6e8a7a35a946ff825a6255df1412b0_(
         (_lambda_ff6e8a7a35a946ff825a6255df1412b0_ *)&v9,
         (struct ContentManagement::IdentityManager *const)(a1 - 48));
  v7[2] = 0;
  v7[0] = 3;
  v7[1] = 130;
  v4 = Windows::Internal::MakeAsyncOperation<Windows::Internal::CBasicResult<enum ContentManagement::SVUpgradeEligibilityState,0>,enum ContentManagement::SVUpgradeEligibilityState,Windows::Internal::ComTaskPoolHandler,_lambda_ff6e8a7a35a946ff825a6255df1412b0_>(
         (__int64)v7,
         v3,
         (__int64)v3,
         v2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x280,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
