/*
 * XREFs of sub_140762174 @ 0x140762174
 * Callers:
 *     sub_1407092C0 @ 0x1407092C0 (sub_1407092C0.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 */

__int64 __fastcall sub_140762174(int a1, unsigned int a2)
{
  __int64 result; // rax

  result = sub_1407621C0(a2, 0LL, a1 == 2);
  if ( result )
    return result << 25 >> 16;
  return result;
}
