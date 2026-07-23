/*
 * XREFs of sub_1402ED77C @ 0x1402ED77C
 * Callers:
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     sub_14079D7A8 @ 0x14079D7A8 (sub_14079D7A8.c)
 * Callees:
 *     sub_14026F0F0 @ 0x14026F0F0 (sub_14026F0F0.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 *     sub_1402879C8 @ 0x1402879C8 (sub_1402879C8.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 */

__int64 __fastcall sub_1402ED77C(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  __int64 *v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  bool v10; // zf
  _WORD *v11; // rax
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 24);
  v5 = a2 + (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
  if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
  {
    v6 = *(__int64 **)(a1 + 72);
    v7 = *v6;
    v8 = (a2 << 12) + sub_1403342D0(v6, *(_QWORD *)(a1 + 80), 0xFFFFFFFFLL);
    v9 = v8 >> 12;
    v10 = *(_QWORD *)(v7 + 64) == 0LL;
    v17 = v8 >> 12;
    if ( v10 )
    {
      v11 = sub_14026F0F0((unsigned int *)(v7 + 128), &v17);
      v9 = v17;
    }
    else
    {
      v11 = sub_140287180(v7, v8, 0);
    }
    v12 = (__int64)v11;
    v13 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
    v14 = v9 - (*((unsigned int *)v11 + 9) | ((unsigned __int64)(v11[16] & 0xFFC0) << 26));
    *(_QWORD *)(a1 + 72) = v11;
    v15 = *((_QWORD *)v11 + 1) + 8 * v14;
    v16 = *(unsigned int *)(a1 + 28);
    *(_QWORD *)(a1 + 80) = v15;
    result = sub_1402879C8(v12, v14 + (v16 | v13) - v5);
    *(_QWORD *)(a1 + 88) = result;
  }
  if ( a2 )
  {
    *(_DWORD *)(a1 + 24) = v5;
    *(_BYTE *)(a1 + 32) = BYTE4(v5);
  }
  return result;
}
