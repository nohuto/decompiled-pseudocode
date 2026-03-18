/*
 * XREFs of MmCanThreadFault @ 0x140297EF0
 * Callers:
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpGetStackCaptureSettings @ 0x140460684 (EtwpGetStackCaptureSettings.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x140460F1A (EtwpCovSampSafeForUserAddressCapture.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 */

_BOOL8 MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rcx
  _BOOL8 result; // rax

  result = 0;
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
  {
    if ( KeGetCurrentIrql() < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0
        && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc )
      {
        if ( MmPhysicalMemoryBlock )
        {
          v1 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessor[25])
                         + 16600LL);
          if ( v1 )
          {
            if ( CurrentThread != *(struct _KTHREAD **)(v1 + 88) )
              return 1;
          }
        }
      }
    }
  }
  return result;
}
