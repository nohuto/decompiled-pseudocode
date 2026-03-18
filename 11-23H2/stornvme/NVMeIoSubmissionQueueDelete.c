/*
 * XREFs of NVMeIoSubmissionQueueDelete @ 0x1C0020284
 * Callers:
 *     IoQueuesDeletion @ 0x1C000AC64 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0012F90 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C00134A4 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C00024B0 (ProcessCommand.c)
 *     Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage @ 0x1C0004648 (Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage.c)
 *     LocalCommandReuse @ 0x1C000C29C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025E80 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoSubmissionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax

  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v4 = *(_QWORD *)(a1 + 1040);
  *(_WORD *)(v4 + 4136) = a2;
  *(_BYTE *)(v4 + 4096) = 0;
  ProcessCommand(a1, a1 + 952);
  Feature_Servicing_StornvmeCustomTimeout__private_IsEnabledDeviceUsage();
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 955) == 1;
}
