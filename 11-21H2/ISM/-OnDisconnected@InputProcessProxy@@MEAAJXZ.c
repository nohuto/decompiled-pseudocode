/*
 * XREFs of ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x180195540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18002C380 (-GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@X.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ @ 0x1801953D8 (-Disconnected@InputProcessProxy@InputTraceLogging@@SAXXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z @ 0x180196CB4 (-UnregisterInputProcess@InputProcessManager@@QEAAJPEAVBamoInputProcessProxy@@@Z.c)
 */

__int64 __fastcall InputProcessProxy::OnDisconnected(InputProcessProxy *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  struct InputSystemInternalServerConnection *InputSystemInternalServerConnection; // rax
  InputProcessManager *v7; // rax

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  InputTraceLogging::InputProcessProxy::Disconnected(v5);
  InputSystemInternalServerConnection = ISMStatics::GetInputSystemInternalServerConnection();
  v7 = (InputProcessManager *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)InputSystemInternalServerConnection
                                                                               + 29)
                                                                             + 8LL)
                                                                 + 24LL))(*((_QWORD *)InputSystemInternalServerConnection
                                                                          + 29) + 8LL);
  if ( (unsigned int)(*((_DWORD *)v7 + 18) - 2) <= 2 )
    InputProcessManager::UnregisterInputProcess(v7, this);
  return 0LL;
}
