/*
 * XREFs of sub_1405430DC @ 0x1405430DC
 * Callers:
 *     sub_1403DF080 @ 0x1403DF080 (sub_1403DF080.c)
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140A4E0E0 @ 0x140A4E0E0 (sub_140A4E0E0.c)
 *     sub_140A6BE04 @ 0x140A6BE04 (sub_140A6BE04.c)
 * Callees:
 *     sub_14054C0E0 @ 0x14054C0E0 (sub_14054C0E0.c)
 */

__int64 __fastcall sub_1405430DC(char a1)
{
  __int64 result; // rax

  if ( (dword_140D0688C & 0x40000) != 0 )
    return sub_14054C0E0(624LL, a1 != 0);
  return result;
}
