/*
 * XREFs of sub_140765A28 @ 0x140765A28
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140765B84 @ 0x140765B84 (sub_140765B84.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void __fastcall sub_140765A28(__int64 a1, int a2, __int64 a3, char a4)
{
  int v5; // r14d
  const void **v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  char v9; // r9
  __int64 v10; // r15
  unsigned int v11; // ebp
  _QWORD *Pool2; // rdi
  __int128 v13; // xmm0
  int v14; // ecx
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  int v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+4Ch] [rbp-3Ch]

  v5 = 0;
  v6 = 0LL;
  v7 = MEMORY[0xFFFFF78000000014];
  v10 = sub_140765B84(a1);
  v11 = *(unsigned __int16 *)(v10 + 40) + 50;
  if ( a3 )
  {
    v6 = (const void **)(a3 + 8);
    if ( !v9 && a3 != -8 )
    {
      v15 = *(unsigned __int16 *)v6;
      if ( (_WORD)v15 )
      {
        if ( *(_QWORD *)(a3 + 16) != v8 )
          v5 = v15 + 2;
      }
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v5 + v11, 1265659472LL);
  if ( Pool2 )
  {
    v17 = 0LL;
    v19 = 0;
    v13 = *(_OWORD *)(a1 + 88);
    Pool2[2] = v7;
    *(_OWORD *)Pool2 = v13;
    v14 = *(_DWORD *)(a1 + 16);
    *((_DWORD *)Pool2 + 6) = a2;
    *((_DWORD *)Pool2 + 8) = v14;
    *((_BYTE *)Pool2 + 28) = a4;
    memmove((char *)Pool2 + 44, *(const void **)(v10 + 48), *(unsigned __int16 *)(v10 + 40));
    *((_WORD *)Pool2 + ((unsigned __int64)*(unsigned __int16 *)(v10 + 40) >> 1) + 22) = 0;
    if ( v5 )
    {
      *((_DWORD *)Pool2 + 9) = *(_DWORD *)a3;
      *((_DWORD *)Pool2 + 10) = v11;
      memmove((char *)Pool2 + v11, v6[1], *(unsigned __int16 *)v6);
      *(_WORD *)((char *)Pool2 + 2 * ((unsigned __int64)*(unsigned __int16 *)v6 >> 1) + v11) = 0;
    }
    v18 = 2;
    *(_QWORD *)&v16 = Pool2;
    *((_QWORD *)&v16 + 1) = v5 + v11;
    sub_14074F950(0x5Eu, &v16, 32, 0LL, 0);
    ExFreePoolWithTag(Pool2, 0x4B706E50u);
  }
}
