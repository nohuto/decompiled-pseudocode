/*
 * XREFs of sub_14093B5F8 @ 0x14093B5F8
 * Callers:
 *     sub_14093AAEC @ 0x14093AAEC (sub_14093AAEC.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14054AC34 @ 0x14054AC34 (sub_14054AC34.c)
 *     sub_14055A628 @ 0x14055A628 (sub_14055A628.c)
 *     sub_14055A6A0 @ 0x14055A6A0 (sub_14055A6A0.c)
 *     sub_140829CBC @ 0x140829CBC (sub_140829CBC.c)
 *     sub_14093C268 @ 0x14093C268 (sub_14093C268.c)
 */

__int64 __fastcall sub_14093B5F8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 *v16; // r15
  unsigned __int64 *v17; // r13
  int v18; // r14d
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rsi
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r10
  void *v31; // rcx
  int v33; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v6 = 0LL;
  v7 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    v6 = sub_14055A628(0);
  v8 = *(_QWORD *)(a1 + 696);
  if ( v8 || *(_QWORD *)(a1 + 704) )
  {
    v9 = (unsigned int)dword_140C0CBEC;
    v10 = v8 / (unsigned int)dword_140C0CBEC;
    *(_QWORD *)(a1 + 240) = 0LL;
    v11 = v10;
    *(_QWORD *)(a1 + 272) = 0LL;
    v12 = *(_QWORD *)(a1 + 704) / v9;
    v13 = *(_QWORD *)(a1 + 744) - v12;
    v33 = v12;
    LODWORD(v12) = *(_DWORD *)(a1 + 80);
    v14 = v13 - v11;
    *(_QWORD *)(a1 + 216) = v14;
    *(_QWORD *)(a1 + 248) = 0LL;
    *(_QWORD *)(a1 + 280) = 0LL;
    if ( (v12 & 0x80u) != 0LL )
    {
      v15 = sub_14055A628(0);
      v14 = *(_QWORD *)(a1 + 216);
      v7 = v15;
    }
    v16 = (unsigned __int64 *)(a1 + 256);
    v17 = (unsigned __int64 *)(a1 + 224);
    v18 = sub_14054AC34(
            *(_QWORD *)(a1 + 752) + 8 * v14,
            v11,
            v33,
            a4,
            a1 + 232,
            a1 + 224,
            (_QWORD *)(a1 + 264),
            (_QWORD *)(a1 + 256),
            a1 + 208);
    if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
      *(_QWORD *)(a1 + 296) = sub_14055A628(0) - v7;
    if ( v18 >= 0 )
    {
      v19 = *v17;
      v20 = *v16;
      *(_QWORD *)(a1 + 232) <<= 12;
      v21 = (unsigned int)dword_140C0CBE8;
      v22 = v19 << 12;
      *(_QWORD *)(a1 + 264) <<= 12;
      v23 = v20 << 12;
      *v17 = v22;
      *v16 = v23;
      if ( v22 % v21 )
        *(_QWORD *)(a1 + 248) = *(_QWORD *)(a1 + 216) + v22 / v21;
      if ( v23 % v21 )
        *(_QWORD *)(a1 + 280) = *(_QWORD *)(a1 + 216) + v23 / v21;
    }
    else
    {
      *(_QWORD *)(a1 + 696) = 0LL;
      *(_QWORD *)(a1 + 704) = 0LL;
    }
  }
  v24 = *(_QWORD *)(a1 + 136);
  if ( v24 )
  {
    v25 = v24 << 12;
    v26 = sub_140829CBC(v25, -1, 0LL, 0);
    *(_QWORD *)(a1 + 144) = v26;
    if ( v26 )
    {
      v27 = *(_QWORD *)(a1 + 936);
      v28 = *(_QWORD *)(a1 + 928);
      v29 = *(_QWORD *)(a1 + 920);
      *(_DWORD *)(a1 + 152) = v25;
      if ( sub_14055A6A0(v29, v28, v27) )
      {
        v4 = -1073741248;
      }
      else
      {
        sub_14093C268(a1, v30, v25);
        v31 = *(void **)(a1 + 144);
        *(_QWORD *)(a1 + 176) = v31;
        *(_DWORD *)(a1 + 184) = 0;
        memset(v31, 0, v25);
      }
    }
    else
    {
      *(_QWORD *)(a1 + 176) = 0LL;
      *(_DWORD *)(a1 + 184) = 0;
      *(_DWORD *)(a1 + 152) = 0;
    }
  }
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    *(_QWORD *)(a1 + 776) = sub_14055A628(0) - v6;
  return v4;
}
