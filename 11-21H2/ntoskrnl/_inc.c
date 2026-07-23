/*
 * XREFs of _inc @ 0x1403E9238
 * Callers:
 *     sub_1403E8F20 @ 0x1403E8F20 (sub_1403E8F20.c)
 *     sub_1403E9268 @ 0x1403E9268 (sub_1403E9268.c)
 * Callees:
 *     sub_1403EAAB8 @ 0x1403EAAB8 (sub_1403EAAB8.c)
 */

__int64 __fastcall inc(__int64 a1)
{
  if ( --*(_DWORD *)(a1 + 8) < 0 )
    return (unsigned int)sub_1403EAAB8();
  else
    return *(unsigned __int8 *)(*(_QWORD *)a1)++;
}
