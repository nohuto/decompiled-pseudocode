/*
 * XREFs of sub_140681174 @ 0x140681174
 * Callers:
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140681130 @ 0x140681130 (sub_140681130.c)
 *     sub_1407350A0 @ 0x1407350A0 (sub_1407350A0.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140681174(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 )
    return *(_QWORD *)(a1 + 160) + 16 * (a2 - 8 + 6LL);
  else
    return a1 + 16 * (a2 + 2LL);
}
