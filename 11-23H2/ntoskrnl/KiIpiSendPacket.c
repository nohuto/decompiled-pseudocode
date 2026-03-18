/*
 * XREFs of KiIpiSendPacket @ 0x1402C0330
 * Callers:
 *     KeFlushProcessWriteBuffers @ 0x1402C003C (KeFlushProcessWriteBuffers.c)
 *     KeQueryTotalCycleTimeThread @ 0x140329DB0 (KeQueryTotalCycleTimeThread.c)
 *     KeSynchronizeSecurityDomain @ 0x140356984 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x1403608FC (KeSynchronizeAddressPolicy.c)
 *     KeUpdateThreadTag @ 0x140366BD0 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x14039AC30 (KeIpiGenericCall.c)
 *     KiSynchronizeStibpPairing @ 0x1404609F6 (KiSynchronizeStibpPairing.c)
 *     KeFlushRsb @ 0x1405739E4 (KeFlushRsb.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9F2E0 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x140254020 (KiIpiSendRequest.c)
 */

__int64 __fastcall KiIpiSendPacket(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h]

  *((_QWORD *)&v7 + 1) = a5;
  v9 = a3;
  *(_QWORD *)&v7 = a4;
  v8 = a6;
  return KiIpiSendRequest((__int64)KeGetCurrentPrcb(), a1, a2, &v7, 5LL);
}
