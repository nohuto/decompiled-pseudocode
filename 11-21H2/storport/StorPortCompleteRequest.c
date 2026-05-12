/*
 * XREFs of StorPortCompleteRequest @ 0x1C0042D30
 * Callers:
 *     StorPortCompleteRequestVrfy @ 0x1C0095170 (StorPortCompleteRequestVrfy.c)
 * Callees:
 *     RaidPauseUnitQueue @ 0x1C000282C (RaidPauseUnitQueue.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAdapterFindUnit @ 0x1C000FFFC (RaidAdapterFindUnit.c)
 *     RaidResumeUnitQueue @ 0x1C0014698 (RaidResumeUnitQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0014BF8 (RaidPauseAdapterQueue.c)
 *     DbgLogRequest @ 0x1C0014C50 (DbgLogRequest.c)
 *     RaidResumeAdapterQueue @ 0x1C001E01C (RaidResumeAdapterQueue.c)
 *     WPP_SF_DDD @ 0x1C003C54C (WPP_SF_DDD.c)
 */

char __fastcall StorPortCompleteRequest(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  __int64 v5; // r15
  __int64 v6; // rsi
  int v7; // ebp
  int v8; // r14d
  __int64 Adapter; // rax
  __int64 v10; // rdi
  __int64 Unit; // rax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  unsigned int v15; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v5 = 0LL;
  v6 = a4;
  HIBYTE(v15) = 0;
  v7 = a3;
  v8 = a2;
  Adapter = (__int64)RaidpPortGetAdapter(a1);
  v10 = Adapter;
  if ( !Adapter )
    return Adapter;
  if ( (qword_1C00793A8 & 0x40) != 0 )
    DbgLogRequest(
      Adapter,
      12,
      Adapter,
      v6 | (int)(*(_DWORD *)(Adapter + 56) << 24) | (unsigned __int64)((v7 | (unsigned int)(v8 << 8)) << 8),
      retaddr,
      0LL,
      0LL);
  if ( (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF || (_BYTE)v6 == 0xFF )
  {
    RaidPauseAdapterQueue(v10);
  }
  else
  {
    LOBYTE(v15) = v8;
    BYTE1(v15) = v7;
    BYTE2(v15) = v6;
    Unit = RaidAdapterFindUnit(v10, v15);
    v5 = Unit;
    if ( !Unit )
    {
      Adapter = (__int64)&WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
      {
        LODWORD(Adapter) = HIDWORD(WPP_GLOBAL_Control->Timer);
        if ( (Adapter & 8) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u )
        {
          LODWORD(v14) = v6;
          LODWORD(v13) = v7;
          LOBYTE(Adapter) = WPP_SF_DDD(
                              (__int64)WPP_GLOBAL_Control->AttachedDevice,
                              0x19u,
                              (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
                              v8,
                              v13,
                              v14);
        }
      }
      return Adapter;
    }
    RaidPauseUnitQueue(Unit);
  }
  LOBYTE(Adapter) = KeInsertQueueDpc(
                      (PRKDPC)(v10 + 1720),
                      (PVOID)(v6 | ((v7 | (unsigned int)(v8 << 8)) << 8)),
                      (PVOID)a5);
  if ( !(_BYTE)Adapter )
  {
    if ( (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF || (_BYTE)v6 == 0xFF )
      LOBYTE(Adapter) = RaidResumeAdapterQueue(v10, 0LL);
    else
      LOBYTE(Adapter) = RaidResumeUnitQueue(v5);
  }
  return Adapter;
}
