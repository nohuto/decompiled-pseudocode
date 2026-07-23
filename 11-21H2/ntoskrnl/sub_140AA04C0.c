/*
 * XREFs of sub_140AA04C0 @ 0x140AA04C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 */

__int64 __fastcall sub_140AA04C0(__int64 a1, unsigned int a2)
{
  ULONG_PTR retaddr; // [rsp+28h] [rbp+0h]

  sub_140A82EB0(a2, retaddr);
  return sub_14042A5E0(a1, a2);
}
