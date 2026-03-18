/*
 * XREFs of RIMAbIsDeviceArbitrationEnabled @ 0x1C00E0D20
 * Callers:
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C017D324 (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMIsDeviceArbitrationEnabled @ 0x1C017DE40 (RIMIsDeviceArbitrationEnabled.c)
 *     rimProcessPointerDeviceContact @ 0x1C01ABBB4 (rimProcessPointerDeviceContact.c)
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01CF880 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RIMAbIsDeviceArbitrationEnabled(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return *(_DWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 436) != 0;
}
