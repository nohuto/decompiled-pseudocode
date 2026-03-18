/*
 * XREFs of MmCanThreadFault @ 0x14022784C
 * Callers:
 *     RtlWalkFrameChain @ 0x140227760 (RtlWalkFrameChain.c)
 *     EtwpEventWriteFull @ 0x140258570 (EtwpEventWriteFull.c)
 *     EtwpGetStackCaptureSettings @ 0x140468904 (EtwpGetStackCaptureSettings.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x14046A2C8 (EtwpCovSampSafeForUserAddressCapture.c)
 *     ObpPushStackInfo @ 0x140582BD8 (ObpPushStackInfo.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 */

bool MmCanThreadFault()
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 v1; // rcx
  bool result; // al

  result = ObGetCurrentIrql() < 2u
        && (CurrentThread = KeGetCurrentThread(), (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 2) == 0)
        && (void (__fastcall __noreturn *)())CurrentThread[1].ApcState.ApcListHead[0].Blink != KiExecuteDpc
        && MmPhysicalMemoryBlock
        && (v1 = *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8LL * CurrentThread->ApcState.Process[1].IdealProcessor[25])
                           + 16920LL)) != 0
        && CurrentThread != *(struct _KTHREAD **)(v1 + 88);
  return result;
}
