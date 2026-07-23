/*
 * XREFs of sub_14041B570 @ 0x14041B570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void sub_14041B570()
{
  if ( !_bittestandreset(*(signed __int32 **)&KeGetPcr()[92].PcrAlign1[20], 0) )
    __writemsr(0x40000070u, 0LL);
}
