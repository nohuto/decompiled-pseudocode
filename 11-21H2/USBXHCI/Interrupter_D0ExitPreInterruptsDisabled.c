/*
 * XREFs of Interrupter_D0ExitPreInterruptsDisabled @ 0x1C000C884
 * Callers:
 *     Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled @ 0x1C000C790 (Controller_WdfEvtDeviceD0ExitPreInterruptsDisabled.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled @ 0x1C0019074 (Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled.c)
 *     Interrupter_AcquireEventRingLock @ 0x1C00190C4 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1C001911C (Interrupter_ReleaseEventRingLock.c)
 */

__int64 __fastcall Interrupter_D0ExitPreInterruptsDisabled(__int64 a1)
{
  __int64 i; // rsi
  __int64 v3; // rdi
  KIRQL v4; // al
  char v5; // al
  __int64 v6; // rdx
  int v7; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    if ( v3 && *(_QWORD *)(v3 + 200) )
    {
      if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
      {
        v5 = Interrupter_AcquireEventRingLock(v3);
        *(_DWORD *)(v3 + 96) |= 2u;
        LOBYTE(v6) = v5;
        Interrupter_ReleaseEventRingLock(v3, v6);
      }
      else
      {
        v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 208));
        *(_DWORD *)(v3 + 96) |= 2u;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 208), v4);
      }
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject((PVOID)(v3 + 176), Executive, 0, 0, &Timeout) == 258 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 72LL),
            v7,
            9,
            35,
            (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
            i);
        }
      }
    }
  }
  return 0LL;
}
