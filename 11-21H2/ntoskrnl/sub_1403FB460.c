/*
 * XREFs of sub_1403FB460 @ 0x1403FB460
 * Callers:
 *     sub_1403FB390 @ 0x1403FB390 (sub_1403FB390.c)
 *     sub_1403FCC10 @ 0x1403FCC10 (sub_1403FCC10.c)
 *     sub_1403FD778 @ 0x1403FD778 (sub_1403FD778.c)
 * Callees:
 *     sub_140259650 @ 0x140259650 (sub_140259650.c)
 *     sub_1403FB4C4 @ 0x1403FB4C4 (sub_1403FB4C4.c)
 *     sub_1403FB888 @ 0x1403FB888 (sub_1403FB888.c)
 */

__int64 __fastcall sub_1403FB460(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (((unsigned __int8)dword_140C094E0 | (unsigned __int8)sub_140259650()) & 0x42) != 0 )
    return sub_1403FB888(a1, a2, a3, a4);
  else
    return sub_1403FB4C4(a1, a2, a3, a4);
}
