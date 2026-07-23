/*
 * XREFs of sub_140228170 @ 0x140228170
 * Callers:
 *     sub_140227ED0 @ 0x140227ED0 (sub_140227ED0.c)
 * Callees:
 *     sub_140228464 @ 0x140228464 (sub_140228464.c)
 *     sub_140228BCC @ 0x140228BCC (sub_140228BCC.c)
 *     sub_140229100 @ 0x140229100 (sub_140229100.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402CCC80 @ 0x1402CCC80 (sub_1402CCC80.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402CFEB0 @ 0x1402CFEB0 (sub_1402CFEB0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405AD67C @ 0x1405AD67C (sub_1405AD67C.c)
 */

__int64 __fastcall sub_140228170(_QWORD *BugCheckParameter2, __int64 *a2, int a3)
{
  __int64 v3; // rbx
  int v7; // r14d
  __int64 v9; // r9
  int i; // eax
  __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  int v14; // r15d
  bool v15; // zf
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  ULONG_PTR v19; // rax
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  int v24; // [rsp+68h] [rbp+10h] BYREF
  __int64 v25; // [rsp+78h] [rbp+20h] BYREF

  v3 = *a2;
  v7 = sub_140317A80(a2);
  if ( v7
    && (dword_140D06880 & 0xC00000) != 0
    && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
    && (v3 & 1) != 0
    && ((v3 & 0x20) == 0 || (v3 & 0x42) == 0) )
  {
    v21 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
    if ( v21 )
    {
      v22 = *(_QWORD *)(v21 + 8 * (((unsigned __int64)a2 >> 3) & 0x1FF));
      v23 = v3 | 0x20;
      if ( (v22 & 0x20) == 0 )
        v23 = v3;
      v3 = v23;
      if ( (v22 & 0x42) != 0 )
        v3 = v23 | 0x42;
    }
  }
  v25 = v3;
  if ( (v3 & 1) != 0 && a3 <= 1 )
  {
    v9 = 1LL;
    for ( i = a3; i; --i )
      v9 <<= 9;
    v11 = BugCheckParameter2[21];
    if ( (v3 & 0x80u) == 0LL )
    {
      v12 = 48 * (((unsigned __int64)sub_140317A10(&v25) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( a3 == 1 )
      {
        if ( (*(_QWORD *)(v12 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || !(unsigned int)sub_140229100(&unk_140C53BC0, a2, 0LL, 2LL) )
        {
          return 0LL;
        }
LABEL_13:
        v14 = *(_DWORD *)(v11 + 208);
        if ( !v14 )
          *(_QWORD *)(v11 + 216) = sub_14033AC10(a2);
        v24 = 0;
        *(_DWORD *)(v11 + 208) = v14 + 1;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v24);
          while ( *(__int64 *)(v12 + 24) < 0 );
        }
        if ( (*(_DWORD *)(v11 + 204) & 2) == 0 )
        {
          if ( *(_WORD *)(v12 + 32) != 1 )
            sub_1405AD67C(v12);
          *(_BYTE *)(v12 + 34) = *(_BYTE *)(v12 + 34) & 0xF8 | 5;
        }
        if ( a3 )
        {
          *(_QWORD *)v12 = *(_QWORD *)(v11 + 192);
          *(_QWORD *)(v11 + 192) = v12;
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          sub_140228BCC(v11, (unsigned int)a3, a2);
          return 0LL;
        }
        if ( (*(_DWORD *)(v11 + 204) & 2) == 0 )
        {
          *(_QWORD *)v12 = *(_QWORD *)(v11 + 184);
          *(_QWORD *)(v11 + 184) = v12;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v15 = (*(_DWORD *)(v11 + 200) & 0x40000000) == 0;
        v25 = 0LL;
        if ( !v15 )
          goto LABEL_25;
        sub_1402CCC80(&v25);
        v17 = v25;
        if ( v7 )
        {
          if ( (unsigned int)sub_140229550(v16, v25) )
          {
            if ( !HIBYTE(word_140C51864) && (v17 & 1) != 0 )
              v17 |= 0x8000000000000000uLL;
            *a2 = v17;
            sub_1402294F0(a2, v17);
            goto LABEL_25;
          }
          if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v17 & 1) != 0 )
            v17 |= 0x8000000000000000uLL;
        }
        *a2 = v17;
LABEL_25:
        v18 = v25;
        if ( qword_140C50780 && (v25 & 0x10) == 0 )
          v18 = v25 & ~qword_140C50780;
        if ( (v18 & 0xFFFFFFFF00000000uLL) == 0 )
          sub_1402CF280(v11, (__int64)((_QWORD)a2 << 25) >> 16, 1LL, 0LL);
        return 0LL;
      }
      if ( (*(_DWORD *)(v11 + 204) & 1) == 0 )
        return 0LL;
      v13 = 0LL;
      if ( v7 )
      {
        if ( (unsigned int)sub_140229550(0xFFFFFFFFFFLL, 0LL) )
        {
          if ( !HIBYTE(word_140C51864) && (v13 & 1) != 0 )
            v13 |= 0x8000000000000000uLL;
          *a2 = v13;
          sub_1402294F0(a2, v13);
          goto LABEL_11;
        }
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v13 & 1) != 0 )
          v13 |= 0x8000000000000000uLL;
      }
      *a2 = v13;
LABEL_11:
      if ( (*(_BYTE *)(v12 + 35) & 0x10) == 0 )
        ++*(_DWORD *)(v11 + 212);
      goto LABEL_13;
    }
    if ( (*(_DWORD *)(v11 + 204) & 1) != 0 )
    {
      v19 = sub_1402CFEB0(a2);
      if ( v19 < BugCheckParameter2[4] || v19 + (BugCheckParameter4 << 12) - 1 > BugCheckParameter2[5] )
        KeBugCheckEx(0x1Au, 0x5306uLL, (ULONG_PTR)BugCheckParameter2, v19, BugCheckParameter4);
      sub_140228464(v19, a2, BugCheckParameter4);
      *(_DWORD *)(v11 + 212) += 512;
    }
  }
  return 0LL;
}
