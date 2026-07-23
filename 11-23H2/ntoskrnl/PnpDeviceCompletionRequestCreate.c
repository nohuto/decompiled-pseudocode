/*
 * XREFs of PnpDeviceCompletionRequestCreate @ 0x14079507C
 * Callers:
 *     PnpStartDeviceNode @ 0x1407936C0 (PnpStartDeviceNode.c)
 *     PipEnumerateDevice @ 0x140794F6C (PipEnumerateDevice.c)
 *     PiProcessNewDeviceNodeAsync @ 0x1407E2778 (PiProcessNewDeviceNodeAsync.c)
 * Callees:
 *     PnpEnableWatchdog @ 0x14078620C (PnpEnableWatchdog.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpDeviceCompletionRequestCreate(__int64 a1, int a2, __int64 a3)
{
  __int64 Pool2; // rax
  __int64 v7; // rbx

  Pool2 = ExAllocatePool2(64LL, 72LL, 829451856LL);
  v7 = Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 48) = 0LL;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    *(_DWORD *)(Pool2 + 56) = 1;
    *(_QWORD *)(Pool2 + 24) = a3;
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 32) = a2;
    *(_DWORD *)(Pool2 + 40) = -1073741595;
    *(_QWORD *)(Pool2 + 64) = PnpEnableWatchdog(2, Pool2, (const UNICODE_STRING *)(a1 + 56));
  }
  return v7;
}
