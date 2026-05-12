/*
 * XREFs of RaidAdapterResumeUnit @ 0x1C0002A08
 * Callers:
 *     RaidAdapterDeferredRoutine @ 0x1C00028C0 (RaidAdapterDeferredRoutine.c)
 * Callees:
 *     RaidRestartIoQueue @ 0x1C0009220 (RaidRestartIoQueue.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidResumeUnitQueue @ 0x1C0014698 (RaidResumeUnitQueue.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 */

char __fastcall RaidAdapterResumeUnit(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 Unit; // rax
  __int64 v4; // rdi
  PDEVICE_OBJECT *v5; // rax
  int v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  v2 = a2;
  Unit = RaidAdapterFindUnit(a1, a2);
  v4 = Unit;
  if ( Unit )
  {
    LOBYTE(v5) = KeCancelTimer((PKTIMER)(Unit + 1056));
    if ( (_BYTE)v5 )
    {
      LODWORD(v5) = RaidResumeUnitQueue(v4);
      if ( (_DWORD)v5 )
        LOBYTE(v5) = RaidRestartIoQueue(v4, 0LL);
    }
  }
  else
  {
    v5 = &WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      LODWORD(v5) = HIDWORD(WPP_GLOBAL_Control->Timer);
      if ( ((unsigned __int8)v5 & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        LOBYTE(v5) = WPP_SF_DDD(
                       WPP_GLOBAL_Control->AttachedDevice,
                       53LL,
                       &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids,
                       v2,
                       BYTE1(v7),
                       BYTE2(v7));
    }
  }
  return (char)v5;
}
