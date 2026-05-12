/*
 * XREFs of sub_1C0071E24 @ 0x1C0071E24
 * Callers:
 *     sub_1C0021620 @ 0x1C0021620 (sub_1C0021620.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C006A368 @ 0x1C006A368 (sub_1C006A368.c)
 *     sub_1C006E5A4 @ 0x1C006E5A4 (sub_1C006E5A4.c)
 *     sub_1C006F440 @ 0x1C006F440 (sub_1C006F440.c)
 *     sub_1C006F918 @ 0x1C006F918 (sub_1C006F918.c)
 */

void __fastcall sub_1C0071E24(__int64 a1)
{
  const char *v2; // rdi
  __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  const char *v12; // rax
  int v13; // [rsp+78h] [rbp-108h]
  __int64 v14; // [rsp+100h] [rbp-80h]
  void *Dst; // [rsp+108h] [rbp-78h]
  __int64 v16; // [rsp+110h] [rbp-70h]
  __int64 v17; // [rsp+118h] [rbp-68h]
  __int64 v18; // [rsp+120h] [rbp-60h]
  __int64 v19; // [rsp+128h] [rbp-58h]
  __int64 v20; // [rsp+130h] [rbp-50h]
  __int64 v21; // [rsp+138h] [rbp-48h]
  __int128 v22; // [rsp+140h] [rbp-40h]
  PVOID P; // [rsp+1B8h] [rbp+38h]

  v22 = 0LL;
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2040) & 4) != 0 )
    return;
  v3 = sub_1C0007CF4(256LL, 4096LL, 1700028754LL, *(_QWORD *)(a1 + 8));
  P = (PVOID)v3;
  if ( !v3 )
    return;
  v14 = v3;
  Dst = (void *)(v3 + 512);
  v16 = v3 + 1024;
  v17 = v3 + 1536;
  v18 = v3 + 2048;
  v19 = v3 + 2560;
  v20 = v3 + 3072;
  v21 = v3 + 3584;
  v4 = sub_1C006E5A4(a1, v3, 0LL);
  if ( v4 < 0 )
  {
    if ( v4 != -1073741670 )
    {
      v5 = *(_DWORD *)(a1 + 2040);
      if ( (v5 & 1) == 0 )
        *(_DWORD *)(a1 + 2040) = v5 | 4;
    }
    goto LABEL_61;
  }
  if ( *(_BYTE *)(v14 + 8) <= 1u )
    goto LABEL_61;
  v6 = 0;
  while ( v6 <= 7 )
  {
    v7 = *(unsigned __int8 *)(v6 + v14 + 9);
    switch ( *(_BYTE *)(v6 + v14 + 9) )
    {
      case 1:
        if ( (int)sub_1C006E5A4(a1, (__int64)Dst, v7) >= 0 )
        {
          LOWORD(v22) = 88;
          break;
        }
        v8 = Dst;
        goto LABEL_37;
      case 2:
        if ( (int)sub_1C006E5A4(a1, v16, v7) < 0 )
        {
          v8 = (void *)v16;
          goto LABEL_37;
        }
        WORD1(v22) = 24;
        break;
      case 3:
        if ( (int)sub_1C006E5A4(a1, v17, v7) < 0 )
        {
          v8 = (void *)v17;
          goto LABEL_37;
        }
        WORD2(v22) = 72;
        break;
      case 4:
        if ( (int)sub_1C006E5A4(a1, v18, v7) < 0 )
        {
          v8 = (void *)v18;
          goto LABEL_37;
        }
        WORD3(v22) = 24;
        break;
      case 5:
        if ( (int)sub_1C006E5A4(a1, v19, v7) < 0 )
        {
          v8 = (void *)v19;
          goto LABEL_37;
        }
        WORD4(v22) = 112;
        break;
      case 6:
        if ( (int)sub_1C006E5A4(a1, v20, v7) < 0 )
        {
          v8 = (void *)v20;
          goto LABEL_37;
        }
        WORD5(v22) = 32;
        break;
      case 7:
        if ( (int)sub_1C006E5A4(a1, v21, v7) < 0 )
        {
          v8 = (void *)v21;
LABEL_37:
          memset_0(v8, 0, 0x200uLL);
          break;
        }
        WORD6(v22) = 16;
        break;
    }
    if ( ++v6 >= *(unsigned __int8 *)(v14 + 8) )
      break;
  }
  if ( byte_1C0093B18 == 1 && !dword_1C0093B1C || dword_1C0093BDC >= (unsigned int)dword_1C0093418 )
    goto LABEL_51;
  if ( (*(_DWORD *)(a1 + 2040) & 0x20) != 0 )
    dword_1C0093B1C = -1;
  if ( *(_BYTE *)(a1 + 2044) )
    dword_1C0093B1C = -1;
  if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
    dword_1C0093B1C = -1;
  if ( dword_1C0093B1C )
    sub_1C006F918(a1);
  else
LABEL_51:
    sub_1C006F440(a1);
  v9 = *(_QWORD *)(a1 + 152);
  if ( v9 )
  {
    v2 = (const char *)(v9 + 90);
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 144);
    if ( v10 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) != 0 )
      v2 = (const char *)(v10 + 41);
  }
  if ( byte_1C0093A04 < 0 )
  {
    v12 = (const char *)&dword_1C0082784;
    if ( v2 )
      v12 = v2;
    v11 = *(_QWORD *)(a1 + 24);
    sub_1C006A368(
      v11,
      a1,
      WORD4(v22),
      *(_DWORD *)(v11 + 56),
      *(_BYTE *)(a1 + 96),
      *(_BYTE *)(a1 + 97),
      *(_BYTE *)(a1 + 98),
      a1 + 2024,
      v11 + 5000,
      *(const wchar_t **)(v11 + 4656),
      (const char *)(a1 + 160),
      (const char *)(a1 + 169),
      (const char *)(a1 + 186),
      v12,
      *(_BYTE *)(a1 + 450) & 1,
      v13,
      *(_WORD *)v14,
      (unsigned __int16)v22,
      (__int64)Dst,
      WORD1(v22),
      v16,
      WORD2(v22),
      v17,
      WORD3(v22),
      v18,
      WORD4(v22),
      v19,
      WORD5(v22),
      v20,
      WORD6(v22),
      v21);
  }
LABEL_61:
  ExFreePoolWithTag(P, 0x65546152u);
}
