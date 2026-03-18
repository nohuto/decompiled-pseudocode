/*
 * XREFs of NVMeIoSubmissionQueueDelete @ 0x1C0023810
 * Callers:
 *     IoQueuesDeletion @ 0x1C0017F20 (IoQueuesDeletion.c)
 *     IoctlCreateReservedQueuePair @ 0x1C001AFEC (IoctlCreateReservedQueuePair.c)
 *     IoctlDeleteReservedQueuePair @ 0x1C001B48C (IoctlDeleteReservedQueuePair.c)
 * Callees:
 *     ProcessCommand @ 0x1C00039C8 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C00109C0 (memset.c)
 */

bool __fastcall NVMeIoSubmissionQueueDelete(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  *(_BYTE *)(a1 + 867) = 0;
  memset(*(void **)(a1 + 952), 0, 0x10A0uLL);
  *(_QWORD *)(*(_QWORD *)(a1 + 952) + 4232LL) = 0LL;
  v4 = *(_QWORD *)(a1 + 952);
  *(_QWORD *)(a1 + 920) = v4;
  *(_DWORD *)(a1 + 856) = 1;
  *(_BYTE *)(v4 + 4253) |= 1u;
  *(_BYTE *)(*(_QWORD *)(a1 + 952) + 4253LL) &= ~2u;
  *(_WORD *)(*(_QWORD *)(a1 + 952) + 4244LL) = 0;
  v5 = *(_QWORD *)(a1 + 952);
  *(_WORD *)(v5 + 4136) = a2;
  *(_BYTE *)(v5 + 4096) = 0;
  ProcessCommand(a1, a1 + 864);
  WaitForCommandCompleteWithCustomTimeout(a1, a1 + 864, 1, 10000000);
  return *(_BYTE *)(a1 + 867) == 1;
}
