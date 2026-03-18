/*
 * XREFs of NVMeControllerReset @ 0x1C000E638
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00036A0 (NVMeHwAdapterControl.c)
 *     NVMeHwResetBus @ 0x1C0008700 (NVMeHwResetBus.c)
 *     NVMeControllerAsyncResetWorker @ 0x1C000CD00 (NVMeControllerAsyncResetWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0007ADC (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0007DCC (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C00097A8 (ControllerReset.c)
 *     IsNVMeControllerOnFatalError @ 0x1C000C17C (IsNVMeControllerOnFatalError.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000C3D4 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000CD84 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeControllerInitPart1 @ 0x1C000D910 (NVMeControllerInitPart1.c)
 *     NVMeControllerInitPart2 @ 0x1C000DB58 (NVMeControllerInitPart2.c)
 *     NVMeControllerInitPart3 @ 0x1C000DE44 (NVMeControllerInitPart3.c)
 *     NVMeHardwareReset @ 0x1C000F3FC (NVMeHardwareReset.c)
 *     NVMeQueuesReInit @ 0x1C0010718 (NVMeQueuesReInit.c)
 *     NvmSubsystemReset @ 0x1C0010D3C (NvmSubsystemReset.c)
 */

char __fastcall NVMeControllerReset(__int64 a1, char a2)
{
  char v4; // r12
  __int64 v6; // r8
  __int64 v7; // r8
  int v8; // edx
  char v9; // si
  __int64 v10; // rcx
  bool v11; // bp
  _BYTE v12[4]; // [rsp+60h] [rbp-A8h] BYREF
  int v13; // [rsp+64h] [rbp-A4h]
  int v14; // [rsp+68h] [rbp-A0h]
  int v15; // [rsp+6Ch] [rbp-9Ch]
  _DWORD v16[24]; // [rsp+70h] [rbp-98h] BYREF

  v4 = 0;
  memset(v16, 0, 0x58uLL);
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 0) )
    return 1;
  StorPortPause(a1, 120LL);
  *(_DWORD *)(a1 + 32) &= 0xFFFFFDFE;
  v6 = *(unsigned int *)(a1 + 168);
  if ( (_DWORD)v6 )
    StorPortExtendedFunction(81LL, a1, v6);
  *(_DWORD *)(a1 + 32) |= 0x10u;
  NVMeCancelAllCompletionQueueDpc(a1);
  v7 = *(unsigned int *)(a1 + 168);
  if ( (_DWORD)v7 )
    StorPortExtendedFunction(81LL, a1, v7);
  NVMeControllerCompleteAllIORequests(a1, 14);
  IsNVMeControllerOnFatalError(a1);
  if ( !a2 )
  {
    if ( (unsigned int)ControllerReset(a1, 0) )
    {
      v12[0] = 0;
      v11 = 0;
      if ( !(unsigned int)StorPortExtendedFunction(109LL, a1, v12) )
        v11 = v12[0] == 0;
      v9 = 0;
      if ( ((*(_DWORD *)(a1 + 64) & 0x40) == 0 || !v11 || (unsigned int)NVMeHardwareReset(a1, 0LL))
        && ((*(_DWORD *)(a1 + 64) & 0x800) == 0 || !v11 || (unsigned int)NVMeHardwareReset(a1, 2LL))
        && ((*(_DWORD *)(a1 + 64) & 0x1000) == 0 || !v11 || (unsigned int)NVMeHardwareReset(a1, 1LL)) )
      {
        v4 = 1;
        goto LABEL_22;
      }
    }
    goto LABEL_12;
  }
  if ( _bittest64((const signed __int64 *)(a1 + 200), 0x24u) && (unsigned __int8)NvmSubsystemReset(a1) )
  {
    if ( (*(_BYTE *)(a1 + 4008) & 3) == 3 )
      *(_BYTE *)(a1 + 4008) |= 4u;
LABEL_12:
    *(_DWORD *)(a1 + 32) &= ~0x10u;
    NVMeQueuesReInit(a1);
    if ( !(unsigned int)NVMeControllerInitPart1(a1, 0)
      && !(unsigned int)NVMeControllerInitPart2(a1, 0, 1)
      && NVMeControllerInitPart3(a1) )
    {
      v8 = 0;
      v9 = 1;
      if ( *(int *)(a1 + 232) > 0 )
      {
        v10 = a1 + 1952;
        do
        {
          if ( *(_QWORD *)v10 )
          {
            if ( !a2 )
              ++*(_DWORD *)(*(_QWORD *)v10 + 40LL);
            ++*(_DWORD *)(*(_QWORD *)v10 + 44LL);
          }
          ++v8;
          v10 += 8LL;
        }
        while ( v8 < *(_DWORD *)(a1 + 232) );
      }
      goto LABEL_22;
    }
  }
  v9 = 0;
LABEL_22:
  *(_DWORD *)(a1 + 4028) &= ~1u;
  StorPortResume(a1);
  if ( !v9 )
  {
    NVMeControllerStartFailureEventLog(a1);
    if ( v4 )
    {
      FillControllerRuntimeLog(a1, v16);
      v14 = *(_DWORD *)(a1 + 32);
      v15 = *(_DWORD *)(a1 + 36);
      v13 = -1056964606;
      StorPortNotification(4109LL, a1, 0LL);
    }
  }
  return v9;
}
