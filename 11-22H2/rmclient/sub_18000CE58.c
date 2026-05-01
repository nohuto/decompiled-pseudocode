/*
 * XREFs of sub_18000CE58 @ 0x18000CE58
 * Callers:
 *     sub_18000BEA0 @ 0x18000BEA0 (sub_18000BEA0.c)
 *     pfnti @ 0x18000BF10 (pfnti.c)
 *     sub_18000D940 @ 0x18000D940 (sub_18000D940.c)
 *     sub_18000DA3C @ 0x18000DA3C (sub_18000DA3C.c)
 *     sub_18000DAC4 @ 0x18000DAC4 (sub_18000DAC4.c)
 *     sub_18000F414 @ 0x18000F414 (sub_18000F414.c)
 *     sub_18000F520 @ 0x18000F520 (sub_18000F520.c)
 *     sub_18000F6B0 @ 0x18000F6B0 (sub_18000F6B0.c)
 *     sub_18000FA24 @ 0x18000FA24 (sub_18000FA24.c)
 *     sub_18000FAEC @ 0x18000FAEC (sub_18000FAEC.c)
 *     sub_18000FC54 @ 0x18000FC54 (sub_18000FC54.c)
 *     sub_180010B38 @ 0x180010B38 (sub_180010B38.c)
 *     sub_180010BE4 @ 0x180010BE4 (sub_180010BE4.c)
 *     sub_180010C80 @ 0x180010C80 (sub_180010C80.c)
 *     sub_180011190 @ 0x180011190 (sub_180011190.c)
 *     sub_180015414 @ 0x180015414 (sub_180015414.c)
 *     sub_180015620 @ 0x180015620 (sub_180015620.c)
 *     sub_180015674 @ 0x180015674 (sub_180015674.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18000CE58(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
