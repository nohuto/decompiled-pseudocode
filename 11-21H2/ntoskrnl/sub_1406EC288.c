/*
 * XREFs of sub_1406EC288 @ 0x1406EC288
 * Callers:
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 *     sub_1407F71B0 @ 0x1407F71B0 (sub_1407F71B0.c)
 * Callees:
 *     sub_1406EC2D4 @ 0x1406EC2D4 (sub_1406EC2D4.c)
 */

__int64 __fastcall sub_1406EC288(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx
  __int64 result; // rax

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    result = sub_1406EC2D4(a1, i);
  return result;
}
