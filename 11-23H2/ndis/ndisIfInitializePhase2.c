/*
 * XREFs of ndisIfInitializePhase2 @ 0x1C011B500
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002CF10 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C002F1F8 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C0033834 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1C00BBE58 (-ndisStopNsiProvider@@YAXXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x1C011A870 (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x1C011B560 (-ndisStartNsiProvider@@YAJXZ.c)
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011C558 (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 */

__int64 __fastcall ndisIfInitializePhase2(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( (int)ndisStartNsiProvider() < 0 )
    return 0LL;
  if ( (int)ndisIfNsiClientSubsystemInitialize() < 0 )
  {
    ndisStopNsiProvider();
    return 0LL;
  }
  ndisIfCompartmentSubsystemInitializePhase2();
  ndisIfNetworkSubsystemInitializePhase2();
  ndisIfCompartmentSubsystemInitializePhase3();
  if ( (int)netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(v3, 0LL, 0LL) >= 0 )
  {
    if ( *((_BYTE *)qword_1C00F5730 + 96) )
      netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(v4, 1LL, 1LL);
  }
  return 1LL;
}
