/*
 * XREFs of sub_140A902F0 @ 0x140A902F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82F58 @ 0x140A82F58 (sub_140A82F58.c)
 */

__int64 __fastcall sub_140A902F0(int a1)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  if ( (dword_140C29FC0 & 0x2000000) != 0 )
    sub_140A82F58(a1, retaddr, 0);
  return sub_14042A5E0(a1 | 0x80u, 0LL);
}
