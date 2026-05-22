/*
 * XREFs of ?OnConnected@InputProcessProxy@@MEAAJXZ @ 0x1801B3390
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x180031F50 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035818 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Connected@InputProcessProxy@InputTraceLogging@@SAXXZ @ 0x1801B3284 (-Connected@InputProcessProxy@InputTraceLogging@@SAXXZ.c)
 *     ?SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z @ 0x1801B4894 (-SetInputProcessState@InputProcessManager@@QEAAXW4InputProcessState@@@Z.c)
 */

__int64 __fastcall InputProcessProxy::OnConnected(InputProcessProxy *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  __int64 v6; // rax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  InputTraceLogging::InputProcessProxy::Connected(v4);
  InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL)
                                          + 24LL))(*((_QWORD *)InputSystemInternalServerConnection + 31) + 8LL);
  if ( *(_DWORD *)(v6 + 72) == 1 )
    InputProcessManager::SetInputProcessState(v6, 2LL);
  return 0LL;
}
