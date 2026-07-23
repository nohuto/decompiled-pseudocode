/*
 * XREFs of sub_14096CB14 @ 0x14096CB14
 * Callers:
 *     sub_1406F71A0 @ 0x1406F71A0 (sub_1406F71A0.c)
 *     sub_14096CDB8 @ 0x14096CDB8 (sub_14096CDB8.c)
 * Callees:
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 */

int __fastcall sub_14096CB14(__int64 a1, __int64 a2)
{
  int v4; // r15d
  unsigned __int64 v5; // rbp
  __int64 v6; // r14
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v17 = 0LL;
  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 112) & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = **(_QWORD **)(a1 + 72);
  v7 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( *(_QWORD *)(v6 + 64) )
  {
    v8 = sub_140281750(v6);
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v8 + 24);
    sub_140280D08(v6, v8);
    sub_140319600(a1, v7, 0, &v17);
    v9 = sub_140287F30(v5);
    v10 = *(_QWORD *)(a2 + 16) ^ (sub_1403342D0(v17, *(_QWORD *)(a1 + 80), v9) ^ *(_QWORD *)(a2 + 16)) & 0xFFFFFFFFFFFFLL;
    *(_QWORD *)(a2 + 16) = v10;
    if ( (v4 & 0x70) == 0x20 )
    {
      if ( (*(_DWORD *)(a1 + 48) & 0xF80) == 0x380 )
      {
        v11 = v10 & 0xFF7FFFFFFFFFFFFFuLL;
        v12 = 0x40000000000000LL;
      }
      else
      {
        v11 = v10 & 0xFFBFFFFFFFFFFFFFuLL;
        v12 = 0x80000000000000LL;
      }
      v13 = v12 | v11;
    }
    else
    {
      v13 = v10 & 0xFF3FFFFFFFFFFFFFuLL;
    }
    *(_QWORD *)(a2 + 16) = v13;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a2 + 16) = 0xC0000000000000LL;
  }
  v14 = ((unsigned __int64)(*(_DWORD *)(a1 + 64) & 0x1000000) << 29) | *(_QWORD *)(a2 + 16) & 0xFFDFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a2 + 16) = v14;
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(v5 + 1088);
  *(_QWORD *)a2 = v7 << 12;
  *(_QWORD *)(a2 + 24) = ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))
                        - (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                        + 1) << 12;
  *(_QWORD *)(a2 + 16) = v14 ^ (v14 ^ ((unsigned __int64)*(unsigned int *)(a1 + 48) << 41)) & 0x1F000000000000LL;
  v15 = *(unsigned int *)(a1 + 52);
  LODWORD(v15) = v15 & 0x7FFFFFFF;
  *(_QWORD *)(a2 + 32) = (v15 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) << 12;
  return v15;
}
