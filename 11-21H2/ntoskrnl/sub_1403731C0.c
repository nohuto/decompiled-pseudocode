/*
 * XREFs of sub_1403731C0 @ 0x1403731C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140228C50 @ 0x140228C50 (sub_140228C50.c)
 *     sub_140274D80 @ 0x140274D80 (sub_140274D80.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140333040 @ 0x140333040 (sub_140333040.c)
 *     sub_1403336E0 @ 0x1403336E0 (sub_1403336E0.c)
 *     sub_1403735A0 @ 0x1403735A0 (sub_1403735A0.c)
 *     sub_1403737D0 @ 0x1403737D0 (sub_1403737D0.c)
 *     sub_140373880 @ 0x140373880 (sub_140373880.c)
 *     sub_14045BB38 @ 0x14045BB38 (sub_14045BB38.c)
 *     sub_14045BBAE @ 0x14045BBAE (sub_14045BBAE.c)
 */

__int64 __fastcall sub_1403731C0(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v6; // r15
  __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  BOOL v9; // r9d
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r12
  unsigned int v19; // r14d
  __int64 v20; // rbx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  int v30; // [rsp+80h] [rbp+18h] BYREF

  v30 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = *(_QWORD *)a2;
  v8 = (__int64)(a2 << 25) >> 16;
  v9 = a3 == 0;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL
    && a2 <= 0xFFFFF6FB7DBED7F8uLL
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v7 & 1) != 0
    && ((v7 & 0x20) == 0 || (v7 & 0x42) == 0) )
  {
    v23 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v23 )
    {
      v24 = *(_QWORD *)(v23 + 8 * ((a2 >> 3) & 0x1FF));
      v25 = v7 | 0x20;
      if ( (v24 & 0x20) == 0 )
        v25 = v7;
      LOBYTE(v7) = v25;
      if ( (v24 & 0x42) != 0 )
        LOBYTE(v7) = v25 | 0x42;
    }
  }
  v10 = *(_QWORD *)(a1 + 168);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(_QWORD *)(v10 + 8);
  if ( v11 == v12
    || (*(_DWORD *)v10 & 0x4000) != 0
    && ((*(_DWORD *)v10 & 0x8000) != 0 && v11 >= 0x100
     || *(_QWORD *)(v6 + 144) <= (unsigned __int64)(*(_QWORD *)(v10 + 56) - v12)) )
  {
    return 4LL;
  }
  if ( (*(_DWORD *)v10 & 0x10000) == 0 )
    **(_QWORD **)(*(_QWORD *)(a1 + 24) + 16LL) = sub_14045BB38(a2, v9);
  v13 = 48 * (((unsigned __int64)sub_140317A10(a2) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  if ( a3 && ((*(_QWORD *)(v13 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || (unsigned int)sub_140228C50(v6, a2)) )
    return 0LL;
  if ( !_bittest64((const signed __int64 *)(v13 + 40), 0x28u) )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 > 0 )
    {
      if ( (unsigned int)sub_1403336E0(v6, a2, v14 | 0x8000000000000000uLL) )
        LOBYTE(v7) = sub_140317A10(a2);
    }
  }
  if ( v8 < 0xFFFFF68000000000uLL || v8 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v15 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = *(_QWORD *)v15;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL
      && v15 <= 0xFFFFF6FB7DBED7F8uLL
      && (dword_140D06880 & 0xC00000) != 0
      && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
      && (v16 & 1) != 0
      && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
    {
      v26 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 8 * ((v15 >> 3) & 0x1FF));
        v28 = v16 | 0x20;
        if ( (v27 & 0x20) == 0 )
          v28 = v16;
        v16 = v28;
        if ( (v27 & 0x42) != 0 )
          v16 = v28 | 0x42;
      }
    }
    v17 = HIBYTE(v16) & 0xF;
  }
  else
  {
    LODWORD(v17) = (*(_DWORD *)(48
                              * (((unsigned __int64)sub_140317A10(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL)
                              - 0x220000000000LL) >> 1) & 7;
  }
  v18 = *(_QWORD *)(a1 + 24);
  v19 = *(_DWORD *)v10 & 0xF;
  if ( !(unsigned int)sub_1403735A0(v18, v8, v13, v10, (v7 & 0x20) != 0, (__int64)&v30) )
    goto LABEL_15;
  sub_1402CF280(v10 + 64, v8, 1LL, 0);
  if ( (*(_DWORD *)v10 & 0x100) != 0
    && (v8 >= 0xFFFFF68000000000uLL && v8 <= 0xFFFFF6FFFFFFFFFFuLL || sub_140274D80(v22, v8) != 7)
    && (*(_BYTE *)a2 & 0x20) != 0 )
  {
    sub_140333040(v18, a2);
  }
  if ( ++*(_QWORD *)(v10 + 16) != *(_QWORD *)(v10 + 8) && *(_DWORD *)(v10 + 76) != *(_DWORD *)(v10 + 72) )
  {
LABEL_15:
    v20 = a1;
LABEL_16:
    if ( v30 && (unsigned int)sub_14045BBAE(*(_QWORD *)(v10 + 248), v8) )
    {
      sub_1403737D0(v20);
    }
    else if ( (unsigned int)v17 >= v19 && ++*(_QWORD *)(v10 + 40) >= *(_QWORD *)(v10 + 48) )
    {
      return 4LL;
    }
    return 0LL;
  }
  v20 = a1;
  sub_140373880(a1, v10);
  if ( *(_QWORD *)(v10 + 16) != *(_QWORD *)(v10 + 8) )
    goto LABEL_16;
  return 4LL;
}
