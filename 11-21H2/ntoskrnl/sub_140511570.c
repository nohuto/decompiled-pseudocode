/*
 * XREFs of sub_140511570 @ 0x140511570
 * Callers:
 *     <none>
 * Callees:
 *     sub_140512054 @ 0x140512054 (sub_140512054.c)
 */

__int64 __fastcall sub_140511570(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        __int64 a9,
        int a10)
{
  return sub_140512054(
           a1,
           a2,
           0,
           a3,
           a4 - *(unsigned int *)(a3 + 44) - *(_QWORD *)(a3 + 32),
           a5,
           0,
           a6,
           a7,
           a8,
           a9,
           a10);
}
