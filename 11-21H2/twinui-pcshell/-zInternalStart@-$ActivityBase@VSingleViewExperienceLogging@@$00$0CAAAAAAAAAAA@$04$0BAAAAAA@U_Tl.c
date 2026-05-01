/*
 * XREFs of ?zInternalStart@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180075F30
 * Callers:
 *     ?StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18000B674 (-StartActivity@Show@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@Z @ 0x18000C03C (-StartActivity@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0I_N11@.c)
 *     ?StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x18000CD88 (-StartActivity@Hide@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 *     ?StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z @ 0x18000D8D4 (-StartActivity@OnClientWindowReadinessProcessed@SingleViewExperienceTelemetry@@QEAAXPEBG0I@Z.c)
 *     ?StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18002AD24 (-StartActivity@Uncloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x18002BAC4 (-StartActivity@Cloak@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0_N@Z @ 0x180048B38 (-StartActivity@CancelWaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAXPEBG0.c)
 *     ?OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ @ 0x1800A20AC (-OnViewDestroyedBase@CSingleViewShellExperience@@AEAAJXZ.c)
 *     ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x1800A2F28 (-Launch@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800A3348 (-OnViewCreatedBase@CSingleViewShellExperience@@AEAAJ$$QEAV-$ComPtr@UIViewWrapper@ViewManagerInte.c)
 *     ?StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z @ 0x1805F1AA0 (-StartActivity@RemoveKeepAlive@SingleViewExperienceTelemetry@@QEAAXPEBG0IPEAX@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLogging@@P6AXXZ@Z @ 0x1800765C4 (-get@-$static_lazy@VSingleViewExperienceLogging@@@details@wil@@QEAAPEAVSingleViewExperienceLoggi.c)
 *     ?LockExclusive@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180076664 (-LockExclusive@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProv.c)
 *     _tlgKeywordOn @ 0x180091B58 (_tlgKeywordOn.c)
 */

void __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(
        __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  _DWORD *v4; // rcx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v4 = *(_DWORD **)(wil::details::static_lazy<SingleViewExperienceLogging>::get(
                      v3,
                      _lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v4 > 5u && (unsigned __int8)tlgKeywordOn(v4, 0x200000000000LL) )
    EventActivityIdControl(3u, (LPGUID)(v2 + 8));
  else
    *(_OWORD *)(v2 + 8) = 0LL;
  *(_DWORD *)v2 = 1;
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
