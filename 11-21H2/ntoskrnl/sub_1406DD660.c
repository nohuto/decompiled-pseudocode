/*
 * XREFs of sub_1406DD660 @ 0x1406DD660
 * Callers:
 *     <none>
 * Callees:
 *     sub_140756C90 @ 0x140756C90 (sub_140756C90.c)
 */

__int64 __fastcall sub_1406DD660(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        volatile void *a8,
        int a9)
{
  int v10; // [rsp+68h] [rbp-10h]

  return sub_140756C90(a1, a2, 0, a3, a4, a5, a6, a7, a8, a9, 0, 0LL, *((_BYTE *)KeGetCurrentThread() + 562), v10);
}
