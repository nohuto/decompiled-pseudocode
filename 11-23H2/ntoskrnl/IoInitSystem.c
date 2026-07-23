/*
 * XREFs of IoInitSystem @ 0x140B5D6A0
 * Callers:
 *     Phase1Initialization @ 0x140821230 (Phase1Initialization.c)
 * Callees:
 *     PnpSerializeBoot @ 0x1403B2D70 (PnpSerializeBoot.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040FF30 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 *     IopRegistryInitializeCallbacks @ 0x14083493C (IopRegistryInitializeCallbacks.c)
 *     IopInitializeMdlCache @ 0x140834C34 (IopInitializeMdlCache.c)
 *     VfNotifyVerifierOfEvent @ 0x140AC2140 (VfNotifyVerifierOfEvent.c)
 *     HdlspKernelAddLogEntry @ 0x140AEAA40 (HdlspKernelAddLogEntry.c)
 *     IopInitializeSystemDrivers @ 0x140B3CA80 (IopInitializeSystemDrivers.c)
 *     IoInitSystemPreDrivers @ 0x140B4B914 (IoInitSystemPreDrivers.c)
 */

char __fastcall IoInitSystem(_QWORD *a1)
{
  FeatureDeveloperVolume = 1;
  IoFsctlProcessMitigationEnabled = (unsigned int)Feature_FsctlProcessMitigation__private_IsEnabledNoReporting() != 0;
  if ( !IoInitSystemPreDrivers(a1) )
    return 0;
  WerLiveKernelInitSystem();
  if ( !(unsigned int)IopInitializeSystemDrivers() )
  {
    if ( HeadlessGlobals )
    {
      if ( HeadlessGlobals[1] )
        HdlspKernelAddLogEntry(0xBu, 0LL);
    }
    LODWORD(IopInitFailCode) = 8;
    return 0;
  }
  if ( !PnpBootOptions )
    PnpSerializeBoot();
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(0);
  IopRegistryInitializeCallbacks();
  IopInitializeMdlCache();
  return 1;
}
