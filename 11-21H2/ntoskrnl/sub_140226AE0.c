/*
 * XREFs of sub_140226AE0 @ 0x140226AE0
 * Callers:
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_1402C3100 @ 0x1402C3100 (sub_1402C3100.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 * Callees:
 *     sub_140226D50 @ 0x140226D50 (sub_140226D50.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402E7D14 @ 0x1402E7D14 (sub_1402E7D14.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 */

__int64 __fastcall sub_140226AE0(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // r12d
  _QWORD *v4; // r14
  __int64 v5; // r13
  _QWORD *v6; // rdi
  __int64 result; // rax
  __int64 v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 v17; // rdx
  _QWORD *v18; // r8
  unsigned __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  bool v29; // zf

  v1 = *(unsigned int *)(a1 + 80);
  v2 = 1;
  if ( (*(_DWORD *)(a1 + 192) & 0x10) == 0 )
  {
    v4 = 0LL;
    v5 = a1;
    goto LABEL_3;
  }
  v12 = (_QWORD *)(a1 + 16);
  v13 = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(v13 + 8) != a1 + 16 || (v14 = *(_QWORD **)(a1 + 24), (_QWORD *)*v14 != v12) )
LABEL_37:
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  v15 = *(_QWORD *)(a1 + 320);
  v5 = *(_QWORD *)(a1 + 328);
  v16 = 48 * v15 - 0x220000000000LL;
  if ( (int)v1 < 0 )
  {
    sub_140226D50(48 * v15 - 0x220000000000LL, v1, 0x8000000000000000uLL);
    result = 0LL;
    v12[1] = v12;
    *v12 = v12;
    return result;
  }
  v17 = v5 + 272;
  v4 = (_QWORD *)(*(_QWORD *)(v16 + 8) | 0x8000000000000000uLL);
  v2 = 0;
  if ( *(_QWORD *)(v5 + 256) )
    v17 = *(_QWORD *)(v5 + 256);
  v18 = (_QWORD *)(v17 + 48);
  v19 = (((*(_DWORD *)(v17 + 32) + *(_DWORD *)(v17 + 44)) & 0xFFF) + (unsigned __int64)*(unsigned int *)(v17 + 40)
                                                                   + 4095) >> 12;
  v20 = 6LL * *(_QWORD *)(v17 + 48);
  v21 = v17 + 40 + 8 * v19;
  v22 = *(_QWORD *)(8 * v20 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  if ( (unsigned __int64)v4 < v22
    || (v23 = (__int64)((__int64)v4 - v22) >> 3, v23 >= v19)
    || (v24 = 48LL * v18[v23] - 0x220000000000LL, v4 != (_QWORD *)(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL)) )
  {
    while ( (unsigned __int64)v18 <= v21 )
    {
      v24 = 48LL * *v18 - 0x220000000000LL;
      if ( (_QWORD *)(*(_QWORD *)(v24 + 8) | 0x8000000000000000uLL) == v4 )
        goto LABEL_18;
      ++v18;
    }
    v24 = 48 * v15 - 0x220000000000LL;
    *(_DWORD *)(v5 + 180) = 1;
    goto LABEL_22;
  }
LABEL_18:
  v25 = sub_140317A10(v4);
  v26 = sub_1402E7D14(v25, v15);
  v27 = v26;
  if ( (unsigned int)sub_140317A80(v4) )
  {
    if ( (unsigned int)sub_140229550(v28, v21) )
    {
      v2 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_19;
      v29 = (v26 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_19;
      v29 = (v26 & 1) == 0;
    }
    if ( !v29 )
      v27 = v26 | 0x8000000000000000uLL;
  }
LABEL_19:
  *v4 = v27;
  if ( v2 )
    sub_1402294F0(v4, v27);
  *(_QWORD *)(a1 + 168) = v26;
  v2 = 1;
  *(_QWORD *)(v16 + 16) ^= (*(_DWORD *)(v16 + 16) ^ *(_DWORD *)(v24 + 16)) & 0x3E0;
LABEL_22:
  sub_140226D50(v24, v21, v18);
LABEL_3:
  v6 = *(_QWORD **)(v5 + 16);
  while ( v6 != (_QWORD *)(v5 + 16) )
  {
    v8 = v6[38];
    v9 = v6;
    v6 = (_QWORD *)*v6;
    v10 = 48 * v8 - 0x220000000000LL;
    if ( (*(_DWORD *)(a1 + 192) & 0x10) == 0 || (_QWORD *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == v4 )
    {
      sub_140226D50(v10, v1, 0x8000000000000000uLL);
      v1 = *v9;
      if ( *(_QWORD **)(*v9 + 8LL) != v9 )
        goto LABEL_37;
      v11 = (_QWORD *)v9[1];
      if ( (_QWORD *)*v11 != v9 )
        goto LABEL_37;
      *v11 = v1;
      *(_QWORD *)(v1 + 8) = v11;
      v9[1] = v9;
      *v9 = v9;
    }
  }
  return v2;
}
