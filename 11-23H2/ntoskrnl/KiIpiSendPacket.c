/*
 * XREFs of KiIpiSendPacket @ 0x1402C05C0
 * Callers:
 *     KeFlushProcessWriteBuffers @ 0x1402C02CC (KeFlushProcessWriteBuffers.c)
 *     KeQueryTotalCycleTimeThread @ 0x14032A040 (KeQueryTotalCycleTimeThread.c)
 *     KeSynchronizeSecurityDomain @ 0x140356B24 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x140360A9C (KeSynchronizeAddressPolicy.c)
 *     KeUpdateThreadTag @ 0x140366D70 (KeUpdateThreadTag.c)
 *     KeIpiGenericCall @ 0x14039AE10 (KeIpiGenericCall.c)
 *     KiSynchronizeStibpPairing @ 0x140460DF6 (KiSynchronizeStibpPairing.c)
 *     KeFlushRsb @ 0x140573F24 (KeFlushRsb.c)
 *     KiInitializeDynamicProcessorDpc @ 0x140A9F150 (KiInitializeDynamicProcessorDpc.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1402540E0 (KiIpiSendRequest.c)
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
