/*
 * XREFs of PopUmpoSendPowerMessage @ 0x14036AF00
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x14036ABA8 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140398C28 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407EF514 (PopEvaluateGlobalUserStatus.c)
 *     PopPowerRequestDelete @ 0x1407EF930 (PopPowerRequestDelete.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x1407EFDC8 (PopPowerRequestHandleRequestUpdate.c)
 *     PopUmpoSendPowerRequestCreate @ 0x1407F01CC (PopUmpoSendPowerRequestCreate.c)
 *     PopUmpoSendLegacyEvent @ 0x1407FE938 (PopUmpoSendLegacyEvent.c)
 *     PopMonitorProcessLoop @ 0x1408600E4 (PopMonitorProcessLoop.c)
 *     PopUserPresencePredictionModeCallback @ 0x140862DB0 (PopUserPresencePredictionModeCallback.c)
 *     PopPowerRequestNotificationsBegin @ 0x140989DD4 (PopPowerRequestNotificationsBegin.c)
 * Callees:
 *     AlpcGetMessageAttribute @ 0x14036A1D0 (AlpcGetMessageAttribute.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwAlpcSendWaitReceivePort @ 0x14041C8E0 (ZwAlpcSendWaitReceivePort.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopUmpoProcessMessage @ 0x1407EFC00 (PopUmpoProcessMessage.c)
 *     PopReleaseUmpoPushLock @ 0x1407F02A8 (PopReleaseUmpoPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1407F02CC (PopAcquireUmpoPushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopUmpoSendPowerMessage(void *Src, size_t Size, char a3)
{
  _WORD *Pool2; // rdi
  int v7; // eax
  int v8; // ebx
  char *MessageAttribute; // rax
  __int64 v11; // [rsp+40h] [rbp-D8h] BYREF
  _DWORD v12[40]; // [rsp+50h] [rbp-C8h] BYREF

  v11 = 0LL;
  Pool2 = (_WORD *)ExAllocatePool2(256LL, 4096LL, 1869638997LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  PopAcquireUmpoPushLock(0LL);
  if ( PopAlpcClientPort )
  {
    if ( Size > 0xFD8 )
    {
      v8 = -2147483643;
      goto LABEL_7;
    }
    memset(Pool2 + 2, 0, 0xFFCuLL);
    *Pool2 = Size;
    Pool2[1] = Size + 40;
    memmove(Pool2 + 20, Src, Size);
    if ( a3 )
    {
      memset(v12, 0, sizeof(v12));
      v11 = 4096LL;
      v8 = ((__int64 (__fastcall *)(HANDLE, __int64, _WORD *, _QWORD, _WORD *, __int64 *, _DWORD *, _QWORD))ZwAlpcSendWaitReceivePort)(
             PopAlpcClientPort,
             0x20000LL,
             Pool2,
             0LL,
             Pool2,
             &v11,
             v12,
             0LL);
      if ( v8 < 0 )
        goto LABEL_7;
      MessageAttribute = AlpcGetMessageAttribute(v12, 0x20000000);
      v7 = PopUmpoProcessMessage(Pool2, MessageAttribute);
    }
    else
    {
      v7 = ZwAlpcSendWaitReceivePort(PopAlpcClientPort, 0x10000LL, Pool2, 0LL, 0LL, 0LL, 0LL, 0LL, v11);
    }
    v8 = v7;
  }
  else
  {
    v8 = -1073741758;
  }
LABEL_7:
  PopReleaseUmpoPushLock();
  ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)v8;
}
