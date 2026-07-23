/*
 * XREFs of sub_1403B65D8 @ 0x1403B65D8
 * Callers:
 *     BroadcastFunction @ 0x140A48E70 (BroadcastFunction.c)
 *     sub_140A58F00 @ 0x140A58F00 (sub_140A58F00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403B65D8(__int64 *a1)
{
  __int64 result; // rax

  result = *a1 + 1;
  *a1 = result;
  return result;
}
