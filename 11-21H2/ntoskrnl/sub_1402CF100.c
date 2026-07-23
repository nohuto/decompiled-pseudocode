/*
 * XREFs of sub_1402CF100 @ 0x1402CF100
 * Callers:
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_14027E810 @ 0x14027E810 (sub_14027E810.c)
 *     sub_1402CE240 @ 0x1402CE240 (sub_1402CE240.c)
 * Callees:
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14032F750 @ 0x14032F750 (sub_14032F750.c)
 */

__int64 __fastcall sub_1402CF100(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  char v8; // bl
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  BOOL v12; // edi
  __int64 v13; // rcx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // [rsp+40h] [rbp+8h] BYREF

  v6 = ((((__int64)(a3 << 25) >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
  v7 = *(_QWORD *)v6;
  if ( v6 >= 0xFFFFF6FB7DBED000uLL
    && v6 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v16 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v16 )
    {
      v17 = *(_QWORD *)(v16 + 8 * ((v6 >> 3) & 0x1FF));
      v18 = v7 | 0x20;
      if ( (v17 & 0x20) == 0 )
        v18 = v7;
      v7 = v18;
      if ( (v17 & 0x42) != 0 )
        v7 = v18 | 0x42;
    }
  }
  v8 = HIBYTE(v7) & 0xF | (16 * ((v7 >> 60) & 7));
  v9 = *(_QWORD *)a3;
  if ( a3 >= 0xFFFFF6FB7DBED000uLL
    && a3 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    v19 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 8 * ((a3 >> 3) & 0x1FF));
      v21 = v9 | 0x20;
      if ( (v20 & 0x20) == 0 )
        v21 = *(_QWORD *)a3;
      v9 = v21;
      if ( (v20 & 0x42) != 0 )
        v9 = v21 | 0x42;
    }
  }
  v22 = v9;
  v10 = *(_QWORD *)(48 * (((unsigned __int64)sub_140317A10(&v22) >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = v10 >= 0;
  if ( !v11 )
    goto LABEL_12;
  v13 = *(_QWORD *)(a1 + 16);
  if ( a3 == v11 + 8 * v13 && v8 == *(_BYTE *)(a1 + 28) && v12 == (*(_DWORD *)(a1 + 24) & 1) )
  {
    *(_QWORD *)(a1 + 16) = v13 + 1;
    return 1LL;
  }
  if ( (*(_DWORD *)(a1 + 24) & 2) == 0 )
  {
    sub_14032F750(a1);
LABEL_12:
    v15 = *(_DWORD *)(a1 + 24) & 0xFFFFFFFE;
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 24) = v12 | v15;
    *(_QWORD *)(a1 + 16) = 1LL;
    *(_BYTE *)(a1 + 28) = v8;
    return 1LL;
  }
  return 0LL;
}
