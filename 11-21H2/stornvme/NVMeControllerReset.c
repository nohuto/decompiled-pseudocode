/*
 * XREFs of NVMeControllerReset @ 0x1C001906C
 * Callers:
 *     NVMeHwResetBus @ 0x1C0017C60 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C0018A50 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     IsNVMeControllerOnFatalError @ 0x1C0005834 (IsNVMeControllerOnFatalError.c)
 *     NVMeControllerInitPart3 @ 0x1C0005FFC (NVMeControllerInitPart3.c)
 *     NVMeControllerInitPart2 @ 0x1C0006F74 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart1 @ 0x1C0007384 (NVMeControllerInitPart1.c)
 *     ControllerReset @ 0x1C0007A88 (ControllerReset.c)
 *     __security_check_cookie @ 0x1C000E880 (__security_check_cookie.c)
 *     memset @ 0x1C00109C0 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0017A04 (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0017B68 (NVMeControllerStartFailureEventLog.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C00185E0 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C0018AD4 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeHardwareReset @ 0x1C00197E8 (NVMeHardwareReset.c)
 *     NVMeQueuesReInit @ 0x1C0019CD8 (NVMeQueuesReInit.c)
 *     NvmSubsystemReset @ 0x1C001A000 (NvmSubsystemReset.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // si
  __int64 v6; // r9
  char v7; // dl
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  char v12; // di
  __int64 *v13; // rcx
  __int64 v14; // rax
  _DWORD v15[24]; // [rsp+70h] [rbp-78h] BYREF

  v4 = 0;
  memset(v15, 0, 0x58uLL);
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3828), 0) )
    return 1;
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 32) &= 0xFFFFFDFE;
  StorPortExtendedFunction(81LL, a1, 20000LL, v6);
  *(_DWORD *)(a1 + 32) |= 0x10u;
  NVMeCancelAllCompletionQueueDpc(a1, v7);
  StorPortExtendedFunction(81LL, a1, 20000LL, v8);
  NVMeControllerCompleteAllIORequests(a1, 14, v9, v10);
  IsNVMeControllerOnFatalError(a1);
  if ( !a2 )
  {
    if ( (unsigned int)ControllerReset(a1, 0) )
    {
      v12 = 0;
      if ( (*(_DWORD *)(a1 + 64) & 0x40) == 0 || (unsigned int)NVMeHardwareReset(a1) )
      {
        v4 = 1;
        goto LABEL_18;
      }
    }
    goto LABEL_8;
  }
  if ( _bittest64((const signed __int64 *)(a1 + 192), 0x24u) && (unsigned __int8)NvmSubsystemReset(a1) )
  {
    if ( (*(_BYTE *)(a1 + 3808) & 3) == 3 )
      *(_BYTE *)(a1 + 3808) |= 4u;
LABEL_8:
    *(_DWORD *)(a1 + 32) &= ~0x10u;
    NVMeQueuesReInit(a1);
    if ( !(unsigned int)NVMeControllerInitPart1(a1, 0)
      && !(unsigned int)NVMeControllerInitPart2(a1, 0, 1)
      && NVMeControllerInitPart3(a1) )
    {
      v11 = 0;
      v12 = 1;
      if ( *(int *)(a1 + 224) > 0 )
      {
        v13 = (__int64 *)(a1 + 1752);
        do
        {
          v14 = *v13;
          if ( *v13 )
          {
            if ( !a2 )
            {
              ++*(_DWORD *)(v14 + 40);
              v14 = *v13;
            }
            ++*(_DWORD *)(v14 + 44);
          }
          ++v11;
          ++v13;
        }
        while ( v11 < *(_DWORD *)(a1 + 224) );
      }
      goto LABEL_18;
    }
  }
  v12 = 0;
LABEL_18:
  *(_DWORD *)(a1 + 3828) &= ~1u;
  StorPortResume(a1);
  if ( !v12 )
  {
    NVMeControllerStartFailureEventLog(a1);
    if ( v4 )
    {
      FillControllerRuntimeLog(a1, v15);
      StorPortNotification(4109LL, a1, 0LL, 0LL);
    }
  }
  return v12;
}
