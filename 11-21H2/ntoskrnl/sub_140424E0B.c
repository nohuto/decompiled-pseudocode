/*
 * XREFs of sub_140424E0B @ 0x140424E0B
 * Callers:
 *     sub_140424CF4 @ 0x140424CF4 (sub_140424CF4.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
int __fastcall sub_140424E0B()
{
  __int64 v0; // rbp
  int result; // eax

  _RAX = 56026LL;
  if ( (BYTE2(KeGetPcr()[5].KdVersionBlock) & 8) != 0 )
  {
    LOBYTE(_RAX) = 32;
    __asm { incsspq rax }
  }
  _mm_lfence();
  result = BYTE2(KeGetPcr()[5].HalReserved[15]);
  *(_BYTE *)(v0 - 88) = result;
  __writegsbyte(0x856u, BYTE2(KeGetPcr()[5].HalReserved[15]) | 2);
  return result;
}
