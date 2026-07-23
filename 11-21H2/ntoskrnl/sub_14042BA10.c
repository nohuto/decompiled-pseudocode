/*
 * XREFs of sub_14042BA10 @ 0x14042BA10
 * Callers:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_14042BA70 @ 0x14042BA70 (sub_14042BA70.c)
 * Callees:
 *     sub_1403731B0 @ 0x1403731B0 (sub_1403731B0.c)
 */

__int64 __fastcall sub_14042BA10(__int64 a1, __int64 a2, __int64 a3)
{
  signed __int64 v3; // r8

  v3 = (unsigned __int64)(a3 + 15) >> 4;
  if ( v3 > 1 )
    __asm { jmp     r9 }
  return off_140E01860();
}
