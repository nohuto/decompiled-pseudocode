/*
 * XREFs of sub_14023A860 @ 0x14023A860
 * Callers:
 *     <none>
 * Callees:
 *     sub_140221330 @ 0x140221330 (sub_140221330.c)
 *     sub_14023A8D0 @ 0x14023A8D0 (sub_14023A8D0.c)
 *     sub_140512054 @ 0x140512054 (sub_140512054.c)
 */

__int64 __fastcall sub_14023A860(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11

  if ( (unsigned int)sub_14023A8D0() == 2 )
    return sub_140221330(v10, v11, (__int64 *)v8, v9, a5, a6, a7, a8, 0LL, 0);
  else
    return sub_140512054(
             v10,
             v11,
             0,
             v8,
             v9 - *(unsigned int *)(v8 + 44) - *(_QWORD *)(v8 + 32),
             a5,
             0,
             a6,
             a7,
             a8,
             0LL,
             0);
}
