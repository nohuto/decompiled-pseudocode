/*
 * XREFs of ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800305EC
 * Callers:
 *     ?FireCompletion@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800325D0 (-FireCompletion@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@Co.c)
 *     ?GetOnComplete@?$AsyncBaseFTM@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAU?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@3@@Z @ 0x1800360C0 (-GetOnComplete@-$AsyncBaseFTM@U-$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@Con.c)
 * Callees:
 *     ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180037D78 (-InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Windows::Internal::GitPtrSupportsAgile<Windows::Foundation::IAsyncOperationCompletedHandler<enum ContentManagement::SVUpgradeEligibilityState>>::CopyLocal(
        Microsoft::WRL::AgileRef *a1,
        __int64 a2,
        void **a3)
{
  if ( *(_QWORD *)a1 )
    return Microsoft::WRL::AgileRef::InternalResolve(a1, &GUID_f97ea501_d70f_567c_b9a5_38e37771a320, a3);
  *a3 = 0LL;
  return 2147942487LL;
}
