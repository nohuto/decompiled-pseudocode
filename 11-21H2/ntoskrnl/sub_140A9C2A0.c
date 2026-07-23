/*
 * XREFs of sub_140A9C2A0 @ 0x140A9C2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A9C2A0(unsigned int a1, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  sub_140A82F58(a1, retaddr, a2);
  return sub_14042A5E0(a1, a2);
}
