/*
 * XREFs of KeEnterKernelDebugger @ 0x140566EC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405672C0 @ 0x1405672C0 (sub_1405672C0.c)
 *     sub_140A70470 @ 0x140A70470 (sub_140A70470.c)
 */

__int64 KeEnterKernelDebugger()
{
  unsigned __int8 CurrentIrql; // cl
  __int64 v1; // r9

  _InterlockedExchange(&dword_140C2B0E4, 1);
  _disable();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v1 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v1 + 20) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  if ( !(_BYTE)KdDebuggerEnabled && !byte_140C09804 && !_InterlockedExchange(&dword_140D01948, 1) )
    sub_140A70470(0LL, 0LL);
  return sub_1405672C0(5u);
}
