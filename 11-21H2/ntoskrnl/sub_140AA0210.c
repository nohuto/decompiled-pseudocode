/*
 * XREFs of sub_140AA0210 @ 0x140AA0210
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A82EB0 @ 0x140A82EB0 (sub_140A82EB0.c)
 */

__int64 __fastcall sub_140AA0210(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        unsigned int a10)
{
  ULONG_PTR retaddr; // [rsp+68h] [rbp+0h]

  sub_140A82EB0(a10, retaddr);
  return sub_14042A5E0(a1, a2);
}
