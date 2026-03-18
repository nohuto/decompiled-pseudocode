/*
 * XREFs of sub_1404244FB @ 0x1404244FB
 * Callers:
 *     sub_1404243E4 @ 0x1404243E4 (sub_1404243E4.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_1404244FB()
{
  __int64 v0; // rbp
  int result; // eax

  _RAX = 56026LL;
  if ( (KeGetPcr()->Prcb.BpbFeatures & 8) != 0 )
  {
    LOBYTE(_RAX) = 32;
    __asm { incsspq rax }
  }
  _mm_lfence();
  result = KeGetPcr()->Prcb.BpbRetpolineState;
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x856u, KeGetPcr()->Prcb.BpbRetpolineState | 2);
  return result;
}
