/*
 * XREFs of ExInitializeFastResource @ 0x1403A5830
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A58AC @ 0x1403A58AC (sub_1403A58AC.c)
 *     sub_1403A5920 @ 0x1403A5920 (sub_1403A5920.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExInitializeFastResource(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  char v2; // di
  unsigned __int8 CurrentIrql; // al
  __int16 v5; // ax

  v2 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 1u )
    KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 )
    KeBugCheckEx(0x1C6u, 0x10uLL, BugCheckParameter2, (unsigned int)BugCheckParameter3, 0LL);
  sub_1403A5920();
  v5 = *(_WORD *)(BugCheckParameter2 + 26) | 1;
  *(_WORD *)(BugCheckParameter2 + 26) = v5;
  if ( (v2 & 1) != 0 )
    *(_WORD *)(BugCheckParameter2 + 26) = v5 | 0x40;
  *(_QWORD *)(BugCheckParameter2 + 56) = BugCheckParameter2 + 48;
  *(_QWORD *)(BugCheckParameter2 + 48) = BugCheckParameter2 + 48;
  return sub_1403A58AC(BugCheckParameter2);
}
