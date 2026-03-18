/*
 * XREFs of NVMeControllerPanicResetActionWorkItem @ 0x1C001C9C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00038A0 (__security_check_cookie.c)
 *     memset @ 0x1C0004D40 (memset.c)
 *     FillControllerRuntimeLog @ 0x1C0007ADC (FillControllerRuntimeLog.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0007DCC (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C00097A8 (ControllerReset.c)
 *     NVMeCancelAllCompletionQueueDpc @ 0x1C000C3D4 (NVMeCancelAllCompletionQueueDpc.c)
 *     NVMeControllerCompleteAllIORequests @ 0x1C000CD84 (NVMeControllerCompleteAllIORequests.c)
 *     NVMeHardwareReset @ 0x1C000F3FC (NVMeHardwareReset.c)
 *     NvmSubsystemReset @ 0x1C0010D3C (NvmSubsystemReset.c)
 *     NVMeControllerReinitialize @ 0x1C001CCD0 (NVMeControllerReinitialize.c)
 */

__int64 __fastcall NVMeControllerPanicResetActionWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // si
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // eax
  __int64 v10; // r8
  _DWORD v12[24]; // [rsp+70h] [rbp-78h] BYREF

  v5 = 0;
  memset(v12, 0, 0x58uLL);
  if ( (*(_DWORD *)(a1 + 32) & 0x8008) != 0
    || !*(_QWORD *)(a1 + 4216)
    || _interlockedbittestandset((volatile signed __int32 *)(a1 + 4028), 0) )
  {
    goto LABEL_28;
  }
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
  v8 = 10000000LL;
  v9 = 1000 * **(unsigned __int16 **)(a1 + 4216);
  if ( v9 < 0x989680 )
    v8 = v9;
  StorPortExtendedFunction(81LL, a1, v8);
  StorPortExtendedFunction(98LL, a1, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 4216) + 2LL) & 1) == 0 || (unsigned int)ControllerReset(a1, 0) )
  {
    if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 4216) + 2LL) & 2) == 0 || !NvmSubsystemReset(a1))
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 4216) + 2LL) & 4) == 0 || (unsigned int)NVMeHardwareReset(a1, 0, v10))
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 4216) + 2LL) & 0x20) == 0
       || (*(_DWORD *)(a1 + 64) & 0x800) == 0
       || (unsigned int)NVMeHardwareReset(a1, 2u, v10))
      && ((*(_BYTE *)(*(_QWORD *)(a1 + 4216) + 2LL) & 0x10) == 0
       || (*(_DWORD *)(a1 + 64) & 0x1000) == 0
       || (unsigned int)NVMeHardwareReset(a1, 1u, v10)) )
    {
      goto LABEL_25;
    }
    *(_BYTE *)(a1 + 4008) |= 4u;
  }
  else
  {
    *(_BYTE *)(a1 + 4008) &= ~4u;
  }
  v5 = NVMeControllerReinitialize(a1);
LABEL_25:
  *(_DWORD *)(a1 + 32) &= ~0x10u;
  *(_DWORD *)(a1 + 4028) &= ~1u;
  StorPortResume(a1);
  if ( v5 )
  {
    ++*(_DWORD *)(a1 + 4416);
    return StorPortExtendedFunction(31LL, a1, a3);
  }
  if ( !*(_BYTE *)(a1 + 20) )
  {
    NVMeControllerStartFailureEventLog(a1);
    FillControllerRuntimeLog(a1, v12);
    StorPortNotification(4109LL, a1, 0LL);
  }
LABEL_28:
  ++*(_DWORD *)(a1 + 4420);
  return StorPortExtendedFunction(31LL, a1, a3);
}
