/*
 * XREFs of sub_14024215C @ 0x14024215C
 * Callers:
 *     sub_1402421DC @ 0x1402421DC (sub_1402421DC.c)
 *     sub_140298BF0 @ 0x140298BF0 (sub_140298BF0.c)
 *     sub_14029B8E8 @ 0x14029B8E8 (sub_14029B8E8.c)
 *     sub_140703C00 @ 0x140703C00 (sub_140703C00.c)
 * Callees:
 *     sub_1402423D0 @ 0x1402423D0 (sub_1402423D0.c)
 *     sub_14042AB70 @ 0x14042AB70 (sub_14042AB70.c)
 */

__int64 __fastcall sub_14024215C(__int64 _RCX, __int64 a2)
{
  if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
    return sub_1402423D0(_RCX, a2);
  *(_QWORD *)(_RCX + 520) |= 0x8000000000000000uLL;
  __asm { xrstors byte ptr [rcx] }
  return sub_14042AB70(_RCX, a2 & *(_QWORD *)(_RCX + 520));
}
