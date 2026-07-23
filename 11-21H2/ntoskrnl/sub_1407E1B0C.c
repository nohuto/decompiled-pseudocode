/*
 * XREFs of sub_1407E1B0C @ 0x1407E1B0C
 * Callers:
 *     sub_1406D5C1C @ 0x1406D5C1C (sub_1406D5C1C.c)
 *     sub_1406D5CF8 @ 0x1406D5CF8 (sub_1406D5CF8.c)
 *     sub_1407E15B4 @ 0x1407E15B4 (sub_1407E15B4.c)
 *     sub_1407E1968 @ 0x1407E1968 (sub_1407E1968.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1407E3440 @ 0x1407E3440 (sub_1407E3440.c)
 */

__int64 __fastcall sub_1407E1B0C(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // ebx
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 != -1 )
    goto LABEL_4;
  v5 = sub_1407E3440(a1, a2, a3, a5, (__int64)&v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
LABEL_4:
    memmove(
      (void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(v6 * *(_DWORD *)a1)),
      (const void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(*(_DWORD *)a1 * (v6 + 1))),
      (unsigned int)(*(_DWORD *)a1 * (*(_DWORD *)(a1 + 4) - v6 - 1)));
    --*(_DWORD *)(a1 + 4);
  }
  return (unsigned int)v5;
}
