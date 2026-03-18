/*
 * XREFs of NVMeControllerCompleteAllIORequests @ 0x1C000CD84
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C00036A0 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C000E638 (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x1C001C9C0 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     NVMeCompleteSubmissionQueueRequests @ 0x1C000C774 (NVMeCompleteSubmissionQueueRequests.c)
 */

void __fastcall NVMeControllerCompleteAllIORequests(__int64 a1, char a2)
{
  unsigned int i; // edi
  unsigned __int16 j; // di

  StorPortExtendedFunction(81LL, a1, 10000LL);
  for ( i = 0;
        i < *(unsigned __int16 *)(a1 + 336);
        NVMeCompleteSubmissionQueueRequests(
          a1,
          *(_QWORD *)(a1 + 872) + 136LL * i++,
          *(unsigned __int16 *)(a1 + 334),
          0,
          1,
          0,
          a2) )
  {
    ;
  }
  for ( j = 0; *(_WORD *)(a1 + 912) && j < 0x1388u; ++j )
    StorPortStallExecution(10LL);
  NVMeCompleteSubmissionQueueRequests(a1, a1 + 344, *(unsigned __int16 *)(a1 + 332), 0, 1, 0, a2);
}
