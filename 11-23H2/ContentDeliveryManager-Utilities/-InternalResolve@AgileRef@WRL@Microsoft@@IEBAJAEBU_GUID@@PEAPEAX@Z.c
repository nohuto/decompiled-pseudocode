/*
 * XREFs of ?InternalResolve@AgileRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180037D78
 * Callers:
 *     ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800305BC (-CopyLocal@-$GitPtrSupportsAgile@U-$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@W.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@ContentManagement@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800305EC (-CopyLocal@-$GitPtrSupportsAgile@U-$IAsyncOperationCompletedHandler@W4SVUpgradeEligibilityState@.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003061C (-CopyLocal@-$GitPtrSupportsAgile@UIAsyncActionCompletedHandler@Foundation@Windows@@@Internal@Win.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003064C (-CopyLocal@-$GitPtrSupportsAgile@UINilDelegate@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GU.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18003067C (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090A4C (-CopyLocal@-$GitPtrSupportsAgile@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVTarget.c)
 *     ?Get@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@3@@Z @ 0x180091228 (-Get@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVTargetedContentTriggerInternal@Internal@Targ.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A5A3C (-CopyLocal@-$GitPtrSupportsAgile@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@Inte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::AgileRef::InternalResolve(
        Microsoft::WRL::AgileRef *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rcx

  *a3 = 0LL;
  v3 = *(_QWORD *)this;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *))(*(_QWORD *)v3 + 24LL))(v3, a2);
  else
    return 0LL;
}
