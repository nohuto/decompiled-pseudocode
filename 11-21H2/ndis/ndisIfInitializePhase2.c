/*
 * XREFs of ndisIfInitializePhase2 @ 0x1C0112350
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1C002C128 (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1C002C6F8 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1C002D278 (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ?ndisStopNsiProvider@@YAXXZ @ 0x1C00B6DF8 (-ndisStopNsiProvider@@YAXXZ.c)
 *     netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___ @ 0x1C011103C (netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d___.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x1C0111EEC (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x1C011203C (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
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
  if ( (int)netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(v3, 0LL, 0) >= 0 )
  {
    if ( *((_BYTE *)qword_1C00EC738 + 96) )
      netsetupEnumerateObjectIds__lambda_3ed15a572a362cb111cc1d3010d8268d_(v4, 1LL, 1u);
  }
  return 1LL;
}
