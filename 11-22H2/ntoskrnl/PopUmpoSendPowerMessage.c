/*
 * XREFs of PopUmpoSendPowerMessage @ 0x14032D004
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14032CCA8 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x1405997DC (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407A6464 (PopEvaluateGlobalUserStatus.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1407A6AFC (PopUmpoSendPowerRequestCreate.c)
 *     PopPowerRequestDelete @ 0x1407A6CA0 (PopPowerRequestDelete.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407A7B64 (PopPowerRequestHandleRequestUpdate.c)
 *     PopMonitorProcessLoop @ 0x140860448 (PopMonitorProcessLoop.c)
 *     PopUserPresencePredictionModeCallback @ 0x140863630 (PopUserPresencePredictionModeCallback.c)
 *     PopPowerRequestNotificationsBegin @ 0x1409816F4 (PopPowerRequestNotificationsBegin.c)
 *     PopUmpoSendLegacyEvent @ 0x140997950 (PopUmpoSendLegacyEvent.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14032B830 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041B820 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     PopUmpoProcessMessage @ 0x1407A6F88 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x1407A8208 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1407A822C (PopAcquireUmpoPushLock.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140AA622C (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140AA62CC (PopPushPowerStateTransitionRecord.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(_DWORD *Src, size_t Size, char a3)
{
  int v6; // ebp
  _WORD *Pool2; // rdi
  int v8; // eax
  int v9; // ebx
  PVOID v11; // rcx
  char *MessageAttribute; // rax
  __int64 v13; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD v14[40]; // [rsp+50h] [rbp-C8h] BYREF

  v13 = 0LL;
  v6 = -1073741823;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 4096LL, 1869638997LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v9 = -2147483643;
    }
    else
    {
      memset(Pool2 + 2, 0, 0xFFCuLL);
      *Pool2 = Size;
      Pool2[1] = Size + 40;
      memmove(Pool2 + 20, Src, Size);
      if ( a3 )
      {
        _InterlockedIncrement(&PopUmpoSyncEventInProgress);
        if ( PopUmpoSyncEventInProgress <= 0 )
          v11 = 0LL;
        else
          v11 = PopConnectedUmpoProcess;
        if ( *Src == 13 || *Src == 7 )
          v6 = PopPushPowerStateTransitionRecord(v11, KeGetCurrentThread(), 0LL);
        memset(v14, 0, sizeof(v14));
        v13 = 4096LL;
        v9 = ((__int64 (__fastcall *)(HANDLE, __int64, _WORD *, _QWORD, _WORD *, __int64 *, _DWORD *, _QWORD))ZwAlpcSendWaitReceivePort)(
               PopAlpcClientPort,
               0x20000LL,
               Pool2,
               0LL,
               Pool2,
               &v13,
               v14,
               0LL);
        if ( v6 >= 0 )
          PoDelistPowerStateTransitionBlocker();
        _InterlockedDecrement(&PopUmpoSyncEventInProgress);
        if ( v9 < 0 )
          goto LABEL_7;
        MessageAttribute = AlpcGetMessageAttribute(v14, 0x20000000);
        v8 = PopUmpoProcessMessage(Pool2, MessageAttribute);
      }
      else
      {
        v8 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000LL, Pool2, 0LL, 0LL, 0LL, 0LL, 0LL, v13);
      }
      v9 = v8;
    }
  }
  else
  {
    v9 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v9;
}
