/*
 * XREFs of KiIpiStallOnPacketTargetsPrcb @ 0x1402C0580
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
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiIpiStallOnPacketTargetsPrcb(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 result; // rax

  v3 = 0;
  while ( 1 )
  {
    result = *(unsigned int *)(a2 + 11648);
    if ( !(_DWORD)result )
      break;
    if ( (++v3 & HvlLongSpinCountMask) == 0
      && (HvlEnlightenments & 0x40) != 0
      && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
    {
      HvlNotifyLongSpinWait(v3);
    }
    else
    {
      _mm_pause();
    }
  }
  return result;
}
