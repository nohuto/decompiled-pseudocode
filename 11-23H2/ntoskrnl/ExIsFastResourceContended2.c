/*
 * XREFs of ExIsFastResourceContended2 @ 0x140413A10
 * Callers:
 *     ExIsFastResourceContended @ 0x140609D00 (ExIsFastResourceContended.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

bool __fastcall ExIsFastResourceContended2(ULONG_PTR BugCheckParameter2)
{
  unsigned __int8 CurrentIrql; // al

  if ( (*(_BYTE *)(BugCheckParameter2 + 26) & 1) == 0 )
    KeBugCheckEx(0x1C6u, 3uLL, BugCheckParameter2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
  return *(_DWORD *)(BugCheckParameter2 + 56) || *(_QWORD *)(BugCheckParameter2 + 16) != 0LL;
}
