/*
 * XREFs of NVMeIoCompletionQueueDelete @ 0x1C001F414
 * Callers:
 *     IoQueuesDeletion @ 0x1C000ABE4 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x1C0012E60 (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C0013374 (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002360 (ProcessCommand.c)
 *     LocalCommandReuse @ 0x1C000C21C (LocalCommandReuse.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0025504 (WaitForCommandCompleteWithCustomTimeout.c)
 */

bool __fastcall NVMeIoCompletionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax

  LocalCommandReuse(a1, a1 + 944);
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 1040) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 1040) + 4244LL) = 0;
  v4 = *(_QWORD *)(a1 + 1040);
  *(_WORD *)(v4 + 4136) = a2;
  *(_BYTE *)(v4 + 4096) = 4;
  ProcessCommand(a1, a1 + 952);
  WaitForCommandCompleteWithCustomTimeout(a1);
  return *(_BYTE *)(a1 + 955) == 1;
}
