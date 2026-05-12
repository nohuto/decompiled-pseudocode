/*
 * XREFs of RaidAdapterRequestComplete @ 0x1C0010E50
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0004120 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C00050F0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C0010160 (StorPortNotification.c)
 *     StorTickEventQueue @ 0x1C0013B30 (StorTickEventQueue.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C00359B0 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003BA30 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0054540 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     _tlgWriteEx_EtwWriteEx @ 0x1C0001008 (_tlgWriteEx_EtwWriteEx.c)
 *     RaidLogMiniportCompletion @ 0x1C0011020 (RaidLogMiniportCompletion.c)
 *     _tlgKeywordOn @ 0x1C001354C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019338 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 */

char __fastcall RaidAdapterRequestComplete(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rcx
  char v6; // al
  PSLIST_ENTRY v7; // rax
  bool v8; // cf
  struct _PROCESSOR_NUMBER v9; // eax
  struct _KDPC *v10; // rcx
  void *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // [rsp+20h] [rbp-B8h]
  int v18; // [rsp+28h] [rbp-B0h]
  char v19; // [rsp+40h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-94h] BYREF
  int v21; // [rsp+4Ch] [rbp-8Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v23; // [rsp+70h] [rbp-68h]
  __int64 v24; // [rsp+78h] [rbp-60h]
  int *v25; // [rsp+80h] [rbp-58h]
  __int64 v26; // [rsp+88h] [rbp-50h]
  _BYTE v27[16]; // [rsp+90h] [rbp-48h] BYREF
  char *v28; // [rsp+A0h] [rbp-38h]
  __int64 v29; // [rsp+A8h] [rbp-30h]
  _BYTE v30[16]; // [rsp+B0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 584) & 2) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4960));
  if ( a3 )
    goto LABEL_6;
  if ( (((unsigned __int64)qword_1C00793A8 >> 3) & 1) != 0 )
    RaidLogMiniportCompletion(a2);
  if ( (*(_BYTE *)(a1 + 564) & 0x10) == 0
    || (LODWORD(v7) = _InterlockedExchange((volatile __int32 *)(a2 + 776), 4), (_DWORD)v7 != 1) )
  {
LABEL_6:
    v5 = *(_QWORD *)(a2 + 160);
    if ( v5 )
    {
      v6 = *(_BYTE *)(v5 + 141);
      v8 = v6 == -85;
      LOBYTE(v7) = v6 + 85;
      if ( v8 || (_BYTE)v7 == 1 )
      {
        if ( (unsigned int)dword_1C0079058 > 5 )
        {
          LOBYTE(v7) = tlgKeywordOn(v5, 0x400000000000LL);
          if ( (_BYTE)v7 )
          {
            v12 = *(_QWORD *)(a1 + 4592);
            v23 = a1 + 4936;
            v21 = *(_DWORD *)(a1 + 56);
            v25 = &v21;
            v24 = 16LL;
            v26 = 4LL;
            tlgCreate1Sz_wchar_t(v27, v12);
            v13 = *(_QWORD *)(a1 + 4600);
            v19 = *(_BYTE *)(a1 + 4148);
            v28 = &v19;
            v29 = 1LL;
            tlgCreate1Sz_wchar_t(v30, v13);
            LOBYTE(v7) = tlgWriteEx_EtwWriteEx(
                           (__int64)v22,
                           (unsigned __int8 *)dword_1C006C892,
                           v14,
                           v15,
                           v17,
                           v18,
                           7u,
                           v22);
          }
        }
        return (char)v7;
      }
      *(_BYTE *)(v5 + 141) = -85;
    }
    *(_BYTE *)(a2 + 16) = *(_BYTE *)(a2 + 16) & 0xE3 | 0x10;
    v9 = *(struct _PROCESSOR_NUMBER *)(a2 + 18);
    ProcNumber = v9;
    if ( v9.Group == 0xFFFF )
      goto LABEL_19;
    if ( (*(_BYTE *)(a1 + 4243) & 2) != 0 )
    {
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      v9.Group = ProcNumber.Group;
    }
    if ( v9.Group >= (unsigned int)g_RaidPerfRedirectGroupCount
      || (unsigned int)ProcNumber.Number >= *((_DWORD *)g_RaidDPCRedirectionProcessors + v9.Group) )
    {
LABEL_19:
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 256), (PSLIST_ENTRY)(a2 + 32));
      v10 = (struct _KDPC *)(*(_QWORD *)(a1 + 8) + 200LL);
      v11 = 0LL;
      goto LABEL_18;
    }
    v7 = ExpInterlockedPushEntrySList(
           (PSLIST_HEADER)g_RaidPerProcessorState + 8 * (unsigned __int64)(ProcNumber.Number + (v9.Group << 6)) + 4,
           (PSLIST_ENTRY)(a2 + 32));
    if ( !v7 )
    {
      LOBYTE(v7) = ProcNumber.Number;
      v10 = (struct _KDPC *)((char *)g_RaidPerProcessorState
                           + 128 * (unsigned __int64)(ProcNumber.Number + (ProcNumber.Group << 6)));
      if ( LODWORD(v10[1].ProcessorHistory) != 2 )
      {
        v11 = *(void **)(a1 + 8);
LABEL_18:
        LOBYTE(v7) = KeInsertQueueDpc(v10, v11, 0LL);
      }
    }
  }
  return (char)v7;
}
