/*
 * XREFs of Interrupter_FlushPendingDpcOrWorkItemPreReset @ 0x1C003C080
 * Callers:
 *     Controller_InternalReset @ 0x1C00321C8 (Controller_InternalReset.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled @ 0x1C0019074 (Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled.c)
 *     Interrupter_AcquireEventRingLock @ 0x1C00190C4 (Interrupter_AcquireEventRingLock.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1C001911C (Interrupter_ReleaseEventRingLock.c)
 */

void __fastcall Interrupter_FlushPendingDpcOrWorkItemPreReset(__int64 a1)
{
  __int64 i; // rsi
  __int64 v3; // rbp
  KIRQL v4; // al
  char v5; // al
  __int64 j; // rbx
  _QWORD *v7; // rsi
  int v8; // edx
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 80); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * i);
    if ( v3 )
    {
      if ( (unsigned int)Feature_Servicing_BSOD_AMD_BDF_34884382__private_IsEnabled() )
      {
        v5 = Interrupter_AcquireEventRingLock(v3);
        *(_DWORD *)(v3 + 96) |= 0x10u;
        Interrupter_ReleaseEventRingLock(v3, v5);
      }
      else
      {
        v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 208));
        *(_DWORD *)(v3 + 96) |= 0x10u;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 208), v4);
      }
    }
  }
  KeFlushQueuedDpcs();
  for ( j = 0LL; (unsigned int)j < *(_DWORD *)(a1 + 80); j = (unsigned int)(j + 1) )
  {
    v7 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 8 * j);
    if ( v7 && v7[25] )
    {
      Timeout.QuadPart = -600000000LL;
      while ( KeWaitForSingleObject(v7 + 22, Executive, 0, 0, &Timeout) == 258 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 4;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(v7[1] + 72LL),
            v8,
            9,
            34,
            (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
            j);
        }
      }
    }
  }
}
