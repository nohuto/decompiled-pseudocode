/*
 * XREFs of sub_1C0073170 @ 0x1C0073170
 * Callers:
 *     sub_1C0021620 @ 0x1C0021620 (sub_1C0021620.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C006A724 @ 0x1C006A724 (sub_1C006A724.c)
 *     sub_1C00707BC @ 0x1C00707BC (sub_1C00707BC.c)
 *     sub_1C0070BFC @ 0x1C0070BFC (sub_1C0070BFC.c)
 *     sub_1C0073864 @ 0x1C0073864 (sub_1C0073864.c)
 */

void __fastcall sub_1C0073170(__int64 a1)
{
  const char *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int *v5; // r14
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  char *v9; // rbx
  char *v10; // rdx
  bool v11; // cf
  _WORD *v12; // r15
  unsigned __int16 *v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // rax
  __int64 v31; // rdx
  const char *v32; // rbx
  int v33; // [rsp+70h] [rbp-B0h]
  int v34; // [rsp+88h] [rbp-98h]
  _QWORD Dst[2]; // [rsp+A0h] [rbp-80h] BYREF
  __int16 v36; // [rsp+B0h] [rbp-70h]
  int v37; // [rsp+B4h] [rbp-6Ch]
  __int16 v38; // [rsp+B8h] [rbp-68h]
  char v39; // [rsp+BAh] [rbp-66h]
  unsigned __int64 v40; // [rsp+C0h] [rbp-60h]
  unsigned __int64 v41; // [rsp+C8h] [rbp-58h]
  unsigned __int64 v42; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v43; // [rsp+D8h] [rbp-48h]
  unsigned __int64 v44; // [rsp+E0h] [rbp-40h]
  unsigned __int64 v45; // [rsp+E8h] [rbp-38h]
  unsigned __int64 v46; // [rsp+F0h] [rbp-30h]
  unsigned __int64 v47; // [rsp+F8h] [rbp-28h]
  unsigned __int64 v48; // [rsp+100h] [rbp-20h]
  unsigned __int64 v49; // [rsp+108h] [rbp-18h]
  unsigned __int64 v50; // [rsp+110h] [rbp-10h]
  unsigned __int64 v51; // [rsp+118h] [rbp-8h]

  memset_0(Dst, 0, 0x80uLL);
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 2040) & 2) == 0 && !KeGetCurrentIrql() )
  {
    v3 = sub_1C0007CF4(256LL, 556LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    v5 = (unsigned int *)v3;
    if ( v3 )
    {
      v37 = -1;
      v36 = -1;
      v38 = -1;
      LOBYTE(v4) = -38;
      v39 = -1;
      v40 = -1LL;
      v41 = -1LL;
      v42 = -1LL;
      v43 = -1LL;
      v44 = -1LL;
      v45 = -1LL;
      v46 = -1LL;
      v47 = -1LL;
      v48 = -1LL;
      v49 = -1LL;
      v50 = -1LL;
      v51 = -1LL;
      v6 = sub_1C0073864(a1, v4, v3);
      if ( v6 < 0 )
        goto LABEL_5;
      v9 = (char *)v5 + *v5;
      if ( *(_DWORD *)v9 < 8u )
        goto LABEL_6;
      if ( v9[19] == -12 && v9[20] == 44 )
        *(_DWORD *)(a1 + 2040) |= 0x20u;
      else
        *(_DWORD *)(a1 + 2040) &= ~0x20u;
      LOBYTE(v7) = -48;
      v6 = sub_1C0073864(a1, v7, v5);
      if ( v6 < 0 )
      {
LABEL_5:
        if ( v6 == -1073741670 )
        {
LABEL_8:
          ExFreePoolWithTag(v5, 0x65546152u);
          return;
        }
      }
      else
      {
        v10 = (char *)v5 + *v5;
        v11 = *(_DWORD *)v9 < 0x200u;
        Dst[0] = v10;
        v12 = v10 + 16;
        Dst[1] = v10 + 16;
        if ( !v11 )
        {
          if ( v10 == (char *)-16LL )
          {
LABEL_54:
            if ( byte_1C0093B18 == 1 && !dword_1C0093B1C || dword_1C0093BDC >= (unsigned int)dword_1C0093418 )
              goto LABEL_65;
            if ( (*(_DWORD *)(a1 + 2040) & 0x20) != 0 )
              dword_1C0093B1C = -1;
            if ( *(_BYTE *)(a1 + 2044) )
              dword_1C0093B1C = -1;
            if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
              dword_1C0093B1C = -1;
            if ( dword_1C0093B1C )
              sub_1C00707BC(a1);
            else
LABEL_65:
              sub_1C0070BFC(a1);
            v30 = *(_QWORD *)(a1 + 152);
            if ( v30 )
            {
              v2 = (const char *)(v30 + 90);
            }
            else
            {
              v31 = *(_QWORD *)(a1 + 144);
              if ( v31 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 568LL) + 184LL) & 0x40) != 0 )
                v2 = (const char *)(v31 + 41);
            }
            if ( byte_1C0093A04 < 0 )
            {
              v32 = (const char *)&dword_1C0082784;
              if ( v2 )
                v32 = v2;
              sub_1C006A724(
                a1 + 186,
                a1 + 169,
                a1 + 160,
                *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
                *(_BYTE *)(a1 + 96),
                *(_BYTE *)(a1 + 97),
                *(_BYTE *)(a1 + 98),
                a1 + 2024,
                *(_QWORD *)(a1 + 24) + 5000LL,
                *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
                (const char *)(a1 + 160),
                (const char *)(a1 + 169),
                (const char *)(a1 + 186),
                v32,
                v33,
                *v12,
                (*(_DWORD *)(a1 + 2040) & 0x20) != 0,
                v34,
                (__int64)v12);
            }
            goto LABEL_8;
          }
          v13 = (unsigned __int16 *)(v10 + 27);
          v14 = 30LL;
          while ( 1 )
          {
            v15 = *((unsigned __int8 *)v13 - 9);
            if ( v15 > 0xC1 )
            {
              v23 = v15 - 194;
              if ( !v23 )
              {
                v39 = *((_BYTE *)v13 - 4);
                goto LABEL_53;
              }
              v24 = v23 - 2;
              if ( !v24 )
              {
                v46 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                goto LABEL_53;
              }
              v25 = v24 - 1;
              if ( !v25 )
              {
                v47 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                goto LABEL_53;
              }
              v26 = v25 - 1;
              if ( !v26 )
              {
                v48 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                goto LABEL_53;
              }
              v27 = v26 - 3;
              if ( !v27 )
              {
                v49 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                goto LABEL_53;
              }
              v28 = v27 - 24;
              if ( v28 )
              {
                v29 = v28 - 5;
                if ( v29 )
                {
                  if ( v29 == 3 )
                    v51 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13
                                                                                              - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                }
                else
                {
                  v50 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                }
                goto LABEL_53;
              }
            }
            else if ( v15 != 193 )
            {
              v16 = v15 - 4;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( v17 )
                {
                  v18 = v17 - 4;
                  if ( v18 )
                  {
                    v19 = v18 - 1;
                    if ( v19 )
                    {
                      v20 = v19 - 173;
                      if ( v20 )
                      {
                        v21 = v20 - 1;
                        if ( v21 )
                        {
                          v22 = v21 - 3;
                          if ( v22 )
                          {
                            if ( v22 == 1 )
                              v45 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                          }
                          else
                          {
                            v44 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                          }
                        }
                        else
                        {
                          v43 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                        }
                      }
                      else
                      {
                        v42 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13
                                                                                                  - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                      }
                    }
                    else
                    {
                      v41 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13
                                                                                                - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                    }
                  }
                  else
                  {
                    v37 = *((_DWORD *)v13 - 1);
                  }
                }
                else
                {
                  v40 = *((unsigned __int8 *)v13 - 4) | ((*((unsigned __int8 *)v13 - 3) | ((*((unsigned __int8 *)v13 - 2) | ((*((unsigned __int8 *)v13 - 1) | ((unsigned __int64)*v13 << 8)) << 8)) << 8)) << 8);
                }
              }
              else
              {
                v36 = *(v13 - 2);
              }
              goto LABEL_53;
            }
            v38 = *(v13 - 2);
LABEL_53:
            v13 += 6;
            if ( !--v14 )
              goto LABEL_54;
          }
        }
      }
LABEL_6:
      v8 = *(_DWORD *)(a1 + 2040);
      if ( (v8 & 1) == 0 )
        *(_DWORD *)(a1 + 2040) = v8 | 2;
      goto LABEL_8;
    }
  }
}
