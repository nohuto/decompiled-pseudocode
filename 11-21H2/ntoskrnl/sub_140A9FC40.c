/*
 * XREFs of sub_140A9FC40 @ 0x140A9FC40
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 */

__int64 __fastcall sub_140A9FC40(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, unsigned int a5)
{
  ULONG_PTR retaddr; // [rsp+58h] [rbp+0h]

  sub_140A82EB0(a5, retaddr);
  return sub_14042A5E0(a1, a2);
}
