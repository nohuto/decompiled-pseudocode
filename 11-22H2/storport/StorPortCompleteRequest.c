/*
 * XREFs of StorPortCompleteRequest @ 0x1C0045970
 * Callers:
 *     StorPortCompleteRequestVrfy @ 0x1C00B1170 (StorPortCompleteRequestVrfy.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x1C0008004 (RaidAdapterFindUnit.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     RaidResumeUnitQueue @ 0x1C0012630 (RaidResumeUnitQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C0019048 (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C00190A0 (RaidResumeAdapterQueue.c)
 *     DbgLogRequest @ 0x1C0019198 (DbgLogRequest.c)
 *     WPP_SF_DDD @ 0x1C003E8E0 (WPP_SF_DDD.c)
 *     RaidPauseUnitQueue @ 0x1C0044AB0 (RaidPauseUnitQueue.c)
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
  if ( (qword_1C0092468 & 0x40) != 0 )
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
                              (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
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
                      (PRKDPC)(v10 + 1784),
                      (PVOID)(v6 | ((v7 | (unsigned int)(v8 << 8)) << 8)),
                      (PVOID)a5);
  if ( !(_BYTE)Adapter )
  {
    if ( (_BYTE)v8 == 0xFF || (_BYTE)v7 == 0xFF || (_BYTE)v6 == 0xFF )
      LOBYTE(Adapter) = RaidResumeAdapterQueue(v10);
    else
      LOBYTE(Adapter) = RaidResumeUnitQueue(v5);
  }
  return Adapter;
}
