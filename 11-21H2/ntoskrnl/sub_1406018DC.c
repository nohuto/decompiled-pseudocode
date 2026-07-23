/*
 * XREFs of sub_1406018DC @ 0x1406018DC
 * Callers:
 *     sub_1406015D4 @ 0x1406015D4 (sub_1406015D4.c)
 *     sub_140601734 @ 0x140601734 (sub_140601734.c)
 *     sub_140A97900 @ 0x140A97900 (sub_140A97900.c)
 *     sub_140A97FF4 @ 0x140A97FF4 (sub_140A97FF4.c)
 *     sub_140A98064 @ 0x140A98064 (sub_140A98064.c)
 *     sub_140A98420 @ 0x140A98420 (sub_140A98420.c)
 *     sub_140A985B4 @ 0x140A985B4 (sub_140A985B4.c)
 *     sub_140A99478 @ 0x140A99478 (sub_140A99478.c)
 *     sub_140A9952C @ 0x140A9952C (sub_140A9952C.c)
 *     sub_140A9A170 @ 0x140A9A170 (sub_140A9A170.c)
 * Callees:
 *     <none>
 */

unsigned __int8 sub_1406018DC()
{
  unsigned __int8 CurrentIrql; // r10
  unsigned __int8 v1; // cl
  struct _KPRCB *CurrentPrcb; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    v1 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && v1 <= 0xFu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        *(_DWORD *)(*((_QWORD *)CurrentPrcb + 4375) + 20LL) |= ~((unsigned __int8)(1LL << (v1 + 1)) - 1) & 4;
      }
    }
  }
  return CurrentIrql;
}
