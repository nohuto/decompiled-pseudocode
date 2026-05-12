/*
 * XREFs of RaidAdapterResumeUnit @ 0x1C0037DAC
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C0014550 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidResumeUnitQueue @ 0x1C0012630 (RaidResumeUnitQueue.c)
 *     RaidRestartIoQueue @ 0x1C00194E0 (RaidRestartIoQueue.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 */

void __fastcall RaidAdapterResumeUnit(__int64 a1, unsigned int a2)
{
  unsigned __int8 v2; // bl
  __int64 Unit; // rax
  __int64 v4; // rdi

  v2 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v4 = Unit;
  if ( Unit )
  {
    if ( KeCancelTimer((PKTIMER)(Unit + 1112)) && (unsigned int)RaidResumeUnitQueue(v4) )
      RaidRestartIoQueue(v4, 0);
  }
  else if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
  {
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      53LL,
      &WPP_5f9124ff5a9e349f71738e58a6eba805_Traceguids,
      v2,
      BYTE1(a2),
      BYTE2(a2));
  }
}
