/*
 * XREFs of ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x1802373B0
 * Callers:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x180201D00 (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180236374 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180236920 (-NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x180236EE0 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x180237238 (-ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x1802373F0 (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180237438 (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180237484 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x1802374E8 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x180237534 (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x18023759C (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x180235AD0 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::RequestRedrawAll(CProjectedShadowScene *this)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = (__int64 ***)*((_QWORD *)this + 10);
    for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
      CProjectedShadowReceiver::RequestRedraw((CProjectedShadowReceiver *)i[2]);
  }
}
