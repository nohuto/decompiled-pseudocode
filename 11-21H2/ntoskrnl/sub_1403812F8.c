/*
 * XREFs of sub_1403812F8 @ 0x1403812F8
 * Callers:
 *     sub_14023814C @ 0x14023814C (sub_14023814C.c)
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 *     sub_1403812B0 @ 0x1403812B0 (sub_1403812B0.c)
 *     sub_140390A50 @ 0x140390A50 (sub_140390A50.c)
 *     sub_1403944E0 @ 0x1403944E0 (sub_1403944E0.c)
 *     sub_14045F42A @ 0x14045F42A (sub_14045F42A.c)
 *     sub_1405FA31C @ 0x1405FA31C (sub_1405FA31C.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_1403814C4 @ 0x1403814C4 (sub_1403814C4.c)
 */

__int64 __fastcall sub_1403812F8(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v5 = a4;
  v6 = a3;
  v7 = sub_1402F5718();
  v10 = v7;
  if ( (_DWORD)v5 == -1 )
  {
    v11 = -1LL;
    v12 = -1LL;
  }
  else
  {
    *(_QWORD *)(a1 + 24 * v9 + 16) = v7;
    v11 = v7 + 10000 * v5;
    v12 = 10000 * v6;
  }
  *(_QWORD *)(a1 + 24 * v9) = v12;
  *(_QWORD *)(a1 + 24 * v9 + 8) = v11;
  result = *(unsigned int *)(a1 + 224);
  if ( (result & 1) == 0 )
    return sub_1403814C4(a1, v10, v8);
  return result;
}
