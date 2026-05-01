/*
 * XREFs of ?InternalRelease@?$ComPtr@VSwitchItemFactory@@@WRL@Microsoft@@IEAAKXZ @ 0x1804A6A90
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFactory@@@Z @ 0x1804A697C (--$MakeAndInitialize@VSwitchItemFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFacto.c)
 *     ?SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1804A6B48 (-SwitchItemFactory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemFactory@@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopManagerInternal@@@Z @ 0x1804A89C4 (--$MakeAndInitialize@VVirtualDesktopItemFactory@@V1@AEAPEAUHMONITOR__@@AEAPEAUIVirtualDesktopMan.c)
 *     ?VirtualDesktopItemFactory_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A8B5C (-VirtualDesktopItemFactory_CreateInstance@@YAJPEAUHMONITOR__@@PEAUIVirtualDesktopManagerInternal.c)
 *     ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x18050DE18 (--$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WR.c)
 *     ??1?$ComPtr@VTabletModePositionerHandoffContext@@@WRL@Microsoft@@QEAA@XZ @ 0x18050DF4C (--1-$ComPtr@VTabletModePositionerHandoffContext@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z @ 0x18050E0CC (-TabletModePositionerHandoffContext_CreateInstance@@YAJPEAUIAppLayout@@_NAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18030BB50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18030BB50.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItemFactory>::InternalRelease(volatile int **a1)
{
  volatile int *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
             (__int64)v1,
             v1);
  }
  return result;
}
