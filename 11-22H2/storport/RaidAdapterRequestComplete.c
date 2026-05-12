/*
 * XREFs of RaidAdapterRequestComplete @ 0x1C000E5C0
 * Callers:
 *     RaidpAdapterContinueScatterGather @ 0x1C0008CD0 (RaidpAdapterContinueScatterGather.c)
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0009EC0 (RaidAdapterPostScatterGatherExecute.c)
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 *     StorTickEventQueue @ 0x1C000EAE0 (StorTickEventQueue.c)
 *     RaidAdapterProgramCryptoKeyRoutine @ 0x1C0036C10 (RaidAdapterProgramCryptoKeyRoutine.c)
 *     RaidpAdapterContinueDataBufferScatterGather @ 0x1C003D760 (RaidpAdapterContinueDataBufferScatterGather.c)
 *     RaidUnitAbortSrbCompletion @ 0x1C0060F10 (RaidUnitAbortSrbCompletion.c)
 * Callees:
 *     RaidLogMiniportCompletion @ 0x1C000E780 (RaidLogMiniportCompletion.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1C0010DCC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019D9C (_tlgCreate1Sz_wchar_t.c)
 *     _tlgKeywordOn @ 0x1C0019F3C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C00220A0 (__security_check_cookie.c)
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
  int v14; // r8d
  int v15; // r9d
  int v17; // [rsp+20h] [rbp-B8h]
  int v18; // [rsp+28h] [rbp-B0h]
  char v19; // [rsp+40h] [rbp-98h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+44h] [rbp-94h] BYREF
  int v21; // [rsp+4Ch] [rbp-8Ch] BYREF
  __int64 v22[8]; // [rsp+50h] [rbp-88h] BYREF
  _BYTE v23[16]; // [rsp+90h] [rbp-48h] BYREF
  char *v24; // [rsp+A0h] [rbp-38h]
  __int64 v25; // [rsp+A8h] [rbp-30h]
  _BYTE v26[16]; // [rsp+B0h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 584) & 2) != 0 && !a3 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 5024));
  if ( a3 )
    goto LABEL_6;
  if ( (((unsigned __int64)qword_1C0092468 >> 3) & 1) != 0 )
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
        if ( (unsigned int)dword_1C00920C8 > 5 )
        {
          LOBYTE(v7) = tlgKeywordOn(v5, 0x400000000000LL);
          if ( (_BYTE)v7 )
          {
            v12 = *(_QWORD *)(a1 + 4656);
            v22[4] = a1 + 5000;
            v21 = *(_DWORD *)(a1 + 56);
            v22[6] = (__int64)&v21;
            v22[5] = 16LL;
            v22[7] = 4LL;
            tlgCreate1Sz_wchar_t(v23, v12);
            v13 = *(_QWORD *)(a1 + 4664);
            v19 = *(_BYTE *)(a1 + 4212);
            v24 = &v19;
            v25 = 1LL;
            tlgCreate1Sz_wchar_t(v26, v13);
            LOBYTE(v7) = tlgWriteEx_EtwWriteEx((int)v22, (int)&dword_1C0083951, v14, v15, v17, v18, 7u, (__int64)v22);
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
    if ( (*(_BYTE *)(a1 + 4307) & 2) != 0 )
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
      goto LABEL_17;
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
LABEL_17:
        LOBYTE(v7) = KeInsertQueueDpc(v10, v11, 0LL);
      }
    }
  }
  return (char)v7;
}
