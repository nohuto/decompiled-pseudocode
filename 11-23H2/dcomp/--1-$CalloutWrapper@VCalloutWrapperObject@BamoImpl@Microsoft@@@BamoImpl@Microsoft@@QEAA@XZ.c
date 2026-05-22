/*
 * XREFs of ??1?$CalloutWrapper@VCalloutWrapperObject@BamoImpl@Microsoft@@@BamoImpl@Microsoft@@QEAA@XZ @ 0x18016A8D0
 * Callers:
 *     ?AllocatePeerThunk@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamoPeer@Bamo@Microsoft@@@Z @ 0x18016B3C0 (-AllocatePeerThunk@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJPEAPEAVBaseBamo.c)
 *     ?InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerImpl@23@@Z @ 0x18016CA08 (-InvalidateAllRequests@BamoAsyncOperationCoordinator@BamoImpl@Microsoft@@QEAAXPEAVBaseBamoPeerIm.c)
 *     ?OnPeerConnectedThunk@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@PEA_NPEAPEAVBamoPrincipal@Bamo@5@@Z @ 0x18016D760 (-OnPeerConnectedThunk@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamo.c)
 *     ?OnPeerDisconnectedThunk@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJPEAVBaseBamoPeerImpl@3Microsoft@@_N@Z @ 0x18016D920 (-OnPeerDisconnectedThunk@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJPEAVBaseB.c)
 *     ?OnPeerRequestsConnectThunk@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJIPEAIPEAPEAUMsgString@@@Z @ 0x18016DA10 (-OnPeerRequestsConnectThunk@BamoConnectionImpl@dcompwinrtnestedg_AutoBamos@BamoImpl@@MEAAJIPEAIP.c)
 *     ?SetBootstrapProxyCallout@BamoConnection@dcompwinrtnestedg_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x18016E550 (-SetBootstrapProxyCallout@BamoConnection@dcompwinrtnestedg_AutoBamos@@EEAAJPEAVBamoProxy@Bamo@Mi.c)
 *     ?OnDisconnectedThunk@BamoCompObjectDiagnosticsStubImpl@BamoImpl@@UEAAJXZ @ 0x18019DAE0 (-OnDisconnectedThunk@BamoCompObjectDiagnosticsStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnPropertiesRefreshedThunk@BamoCompObjectDiagnosticsStubImpl@BamoImpl@@UEAAJXZ @ 0x18019DBD0 (-OnPropertiesRefreshedThunk@BamoCompObjectDiagnosticsStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?AnimationEnded@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019EAA8 (-AnimationEnded@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4AnimationEndedR.c)
 *     ?AnimationStarted@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019ECC8 (-AnimationStarted@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_.c)
 *     ?DebuggingStarted@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019EECC (-DebuggingStarted@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIW4DCOMPOSITION_E.c)
 *     ?OnDisconnectedThunk@BamoCompObjectDiagnosticsRootStubImpl@BamoImpl@@UEAAJXZ @ 0x18019F130 (-OnDisconnectedThunk@BamoCompObjectDiagnosticsRootStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?OnPropertiesRefreshedThunk@BamoCompObjectDiagnosticsRootStubImpl@BamoImpl@@UEAAJXZ @ 0x18019F250 (-OnPropertiesRefreshedThunk@BamoCompObjectDiagnosticsRootStubImpl@BamoImpl@@UEAAJXZ.c)
 *     ?PropertyChanged@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBEI@Z @ 0x18019F2C0 (-PropertyChanged@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJI_KIIW4DCOMPOSITION_E.c)
 *     ?ProxyReady@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJXZ @ 0x18019F4CC (-ProxyReady@BamoCompObjectDiagnosticsRootPrincipalImpl@BamoImpl@@QEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800E42C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18016C36C (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

void __fastcall Microsoft::BamoImpl::CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>::~CalloutWrapper<Microsoft::BamoImpl::CalloutWrapperObject>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 8) && (*(_BYTE *)(a1 + 16) & 2) != 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      234LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
      a4);
  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)a1;
  if ( v5 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v5);
  if ( *(_QWORD *)(a1 + 8) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      246LL,
      (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.h",
      a4);
}
