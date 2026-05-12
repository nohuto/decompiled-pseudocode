/*
 * XREFs of sub_1C00216E4 @ 0x1C00216E4
 * Callers:
 *     sub_1C0021620 @ 0x1C0021620 (sub_1C0021620.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C00219F8 @ 0x1C00219F8 (sub_1C00219F8.c)
 *     sub_1C0021B28 @ 0x1C0021B28 (sub_1C0021B28.c)
 *     __security_check_cookie @ 0x1C0022EA0 (__security_check_cookie.c)
 *     sub_1C006B414 @ 0x1C006B414 (sub_1C006B414.c)
 *     sub_1C007189C @ 0x1C007189C (sub_1C007189C.c)
 */

void __fastcall sub_1C00216E4(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r15
  __int16 v4; // bx
  __int16 v5; // r12
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r13
  int v10; // eax
  char v11; // r11
  __int64 v12; // r10
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // al
  __int64 v16; // rcx
  void *v17; // r13
  void *v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  const int *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r9
  const int *v25; // rsi
  char v26; // [rsp+C9h] [rbp-7Fh]
  unsigned __int16 v27; // [rsp+CCh] [rbp-7Ch]
  __int64 v28; // [rsp+D8h] [rbp-70h]
  __int64 v29; // [rsp+E0h] [rbp-68h]
  PVOID v30; // [rsp+F8h] [rbp-50h]
  PVOID P; // [rsp+100h] [rbp-48h]

  v2 = 0LL;
  v27 = 0;
  v3 = 0LL;
  v4 = 0;
  v26 = 0;
  v5 = 0;
  v30 = 0LL;
  v6 = 0LL;
  v29 = 0LL;
  v28 = 0LL;
  v7 = sub_1C0007CF4(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  P = (PVOID)v7;
  v8 = v7;
  if ( v7 && (int)sub_1C00219F8(a1, 2LL, 512LL, v7, 560) >= 0 )
  {
    v27 = 216;
    v2 = v8 + 8 + *(unsigned int *)(v8 + 24);
    v29 = *(_QWORD *)(v2 + 48);
    v28 = *(_QWORD *)(v2 + 56);
    v26 = *(_BYTE *)(a1 + 2044);
    *(_BYTE *)(a1 + 2044) = *(_BYTE *)v2;
  }
  if ( (*(_DWORD *)(a1 + 2040) & 8) != 0 )
  {
    v12 = 0LL;
    v11 = 0;
    goto LABEL_10;
  }
  v9 = sub_1C0007CF4(256LL, 560LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  v30 = (PVOID)v9;
  if ( !v9 )
  {
    v12 = 0LL;
    v11 = 0;
    goto LABEL_10;
  }
  v10 = sub_1C00219F8(a1, 192LL, 512LL, v9, 560);
  if ( v10 >= 0 )
  {
    v11 = -64;
    v3 = v9 + 8 + *(unsigned int *)(v9 + 24);
    if ( *(_BYTE *)(v3 + 509) )
    {
      v19 = *(_QWORD *)(v3 + 496) + 0x5B0D4015D7EF503BLL;
      if ( *(_QWORD *)(v3 + 496) == 0xA4F2BFEA2810AFC5uLL )
        v19 = *(_QWORD *)(v3 + 504) + 0x502AEB368390B064LL;
      if ( !v19 )
      {
        v5 = *(_WORD *)(v3 + 494);
        if ( v5 == 2 || v5 == 3 )
        {
          v4 = 494;
          goto LABEL_39;
        }
      }
    }
    else
    {
      v5 = *(_WORD *)(v3 + 510);
      if ( !v5 )
      {
        v6 = *(_QWORD *)v3;
        v4 = 55;
        v12 = *(_QWORD *)(v3 + 8);
        goto LABEL_10;
      }
      if ( v5 == 1 )
      {
        v4 = 88;
LABEL_39:
        v6 = *(_QWORD *)v3;
        v12 = *(_QWORD *)(v3 + 8);
        goto LABEL_10;
      }
    }
    v4 = *(_WORD *)(v9 + 28);
    v5 = -1;
    v12 = 0LL;
    goto LABEL_10;
  }
  if ( v10 == -1073741670 )
  {
    v12 = 0LL;
    v11 = 0;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 2040);
    v12 = 0LL;
    v11 = 0;
    if ( (v20 & 1) == 0 )
      *(_DWORD *)(a1 + 2040) = v20 | 8;
  }
LABEL_10:
  if ( v2 || v3 )
  {
    v13 = _InterlockedExchange64((volatile __int64 *)(a1 + 3248), 0LL);
    v14 = _InterlockedExchange64((volatile __int64 *)(a1 + 3256), 0LL);
    if ( byte_1C0093B18 == 1 && !dword_1C0093B1C || dword_1C0093BDC >= (unsigned int)dword_1C0093418 )
    {
      v15 = 0;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 2040) & 0x20) != 0 )
        dword_1C0093B1C = -1;
      if ( *(_BYTE *)(a1 + 2044) )
        dword_1C0093B1C = -1;
      if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
        dword_1C0093B1C = -1;
      v15 = dword_1C0093B1C != 0;
    }
    v16 = *(_QWORD *)(a1 + 24);
    v17 = &unk_1C0082788;
    v18 = &unk_1C0082788;
    if ( v15 )
    {
      ++dword_1C0093BDC;
      if ( *(_QWORD *)(v16 + 5016) )
        LODWORD(v18) = *(_QWORD *)(v16 + 5016);
      sub_1C007189C(a1, (_DWORD)v18, v2, v27, v11, v5, v3, v4, v13, v14, v29, v28, v6, v12);
    }
    else
    {
      if ( *(_QWORD *)(v16 + 5016) )
        LODWORD(v18) = *(_QWORD *)(v16 + 5016);
      sub_1C0021B28(a1, (_DWORD)v18, v2, v27, v11, v5, v3, v4, v13, v14, v29, v28, v6, v12);
    }
    if ( !*(_BYTE *)(a1 + 2045) || *(_BYTE *)(a1 + 2044) != v26 )
    {
      v21 = *(_QWORD *)(a1 + 152);
      if ( v21 )
      {
        v22 = (const int *)(v21 + 90);
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 144);
        if ( !v23
          || (v22 = (const int *)(v23 + 41), (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) == 0) )
        {
          v22 = 0LL;
        }
      }
      if ( byte_1C0093A04 < 0 )
      {
        v24 = *(_QWORD *)(a1 + 24);
        v25 = &dword_1C0082784;
        if ( v22 )
          v25 = v22;
        if ( *(_QWORD *)(v24 + 5016) )
          v17 = *(void **)(v24 + 5016);
        sub_1C006B414(
          v27,
          *(unsigned __int8 *)(a1 + 2044),
          *(_BYTE *)(a1 + 450) & 1,
          *(_DWORD *)(v24 + 56),
          *(_BYTE *)(a1 + 96),
          *(_BYTE *)(a1 + 97),
          *(_BYTE *)(a1 + 98),
          a1 + 2024,
          v24 + 5000,
          *(_QWORD *)(v24 + 4656),
          a1 + 160,
          a1 + 169,
          (__int64)v17,
          (__int64)v25,
          *(_BYTE *)(a1 + 450) & 1);
      }
      *(_BYTE *)(a1 + 2045) = 0;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x65546152u);
  if ( v30 )
    ExFreePoolWithTag(v30, 0x65546152u);
}
