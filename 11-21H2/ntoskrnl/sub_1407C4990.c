/*
 * XREFs of sub_1407C4990 @ 0x1407C4990
 * Callers:
 *     sub_1407C6580 @ 0x1407C6580 (sub_1407C6580.c)
 * Callees:
 *     sub_14020A890 @ 0x14020A890 (sub_14020A890.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_140717780 @ 0x140717780 (sub_140717780.c)
 *     sub_14071F300 @ 0x14071F300 (sub_14071F300.c)
 *     sub_1407C45A0 @ 0x1407C45A0 (sub_1407C45A0.c)
 *     sub_1407C8130 @ 0x1407C8130 (sub_1407C8130.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 */

__int64 __fastcall sub_1407C4990(
        ULONG_PTR BugCheckParameter3,
        char a2,
        __int64 a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter4,
        int a6,
        PRTL_BITMAP BitMapHeader,
        __int64 a8,
        _DWORD *a9,
        unsigned int *a10)
{
  unsigned int v12; // esi
  char v13; // r14
  unsigned int v14; // r13d
  unsigned int v15; // r15d
  void *v16; // r12
  _WORD *v17; // rax
  _WORD *v18; // r12
  unsigned int v19; // ecx
  int v20; // edx
  __int16 v21; // r8
  unsigned int v22; // esi
  signed int v23; // eax
  unsigned __int16 v24; // cx
  int v25; // eax
  __int16 v26; // r8
  unsigned __int16 v27; // cx
  unsigned int v28; // esi
  unsigned int v29; // r14d
  __int64 v30; // r13
  __int64 v31; // rax
  ULONG_PTR v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rcx
  unsigned int v43; // eax
  char v44; // r14
  __int64 v45; // rax
  __int64 v46; // r14
  __int64 *v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned int v51; // eax
  unsigned int v53; // [rsp+20h] [rbp-61h]
  __int64 v54; // [rsp+30h] [rbp-51h] BYREF
  unsigned int v55; // [rsp+38h] [rbp-49h]
  void *v56; // [rsp+40h] [rbp-41h]
  __int64 v57; // [rsp+48h] [rbp-39h] BYREF
  __int64 v58; // [rsp+50h] [rbp-31h] BYREF
  __int64 v59; // [rsp+58h] [rbp-29h] BYREF
  __int64 v60; // [rsp+60h] [rbp-21h] BYREF
  __int64 v61; // [rsp+68h] [rbp-19h]
  __int128 v62; // [rsp+70h] [rbp-11h] BYREF
  __int64 v64; // [rsp+D0h] [rbp+4Fh]
  unsigned int v65; // [rsp+D8h] [rbp+57h]
  char v66; // [rsp+F8h] [rbp+77h]

  v65 = a4;
  v64 = a3;
  v54 = 0xFFFFFFFFLL;
  v55 = 0;
  v57 = 0xFFFFFFFFLL;
  v12 = a4;
  v13 = a2;
  v60 = 0xFFFFFFFFLL;
  v14 = 0;
  v59 = 0xFFFFFFFFLL;
  v58 = 0xFFFFFFFFLL;
  v66 = 0;
  v62 = 0LL;
  if ( a8 )
  {
    *(_QWORD *)(a8 + 272) = a3;
    *(_DWORD *)(a8 + 280) = -1;
    *(_DWORD *)(a8 + 284) = 0;
    *(_QWORD *)(a8 + 288) = 0LL;
  }
  *a9 = 0;
  *a10 = 0;
  if ( !a4 )
    return 0;
  while ( 1 )
  {
    v15 = *(_DWORD *)(a3 + 4LL * v14);
    v16 = (void *)(a3 + 4LL * v14);
    v56 = v16;
    if ( v13 && v12 != 1 )
    {
      v22 = -1073741492;
      sub_14020A890(a8, 0, 15, 0xC000014C, 0x40u);
      goto LABEL_173;
    }
    if ( v15 != -1 )
      break;
    sub_14020A890(a8, 1, 15, 0xC000014C, 0x50u);
    if ( !a8 )
      goto LABEL_157;
    *(_DWORD *)(a8 + 284) = -1;
LABEL_156:
    *(_DWORD *)(a8 + 280) = v14;
LABEL_157:
    if ( (a6 & 0x20000) != 0 || !BYTE3(NlsMbOemCodePageTag) && (dword_140C4986C & 6) == 0 )
    {
      sub_14020A890(a8, 0, 15, 0xC000014C, 0x30u);
      return (unsigned int)-1073741492;
    }
    sub_14020A890(a8, 1, 15, 0xC000014C, 0);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v45 = sub_1406BF400(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v60);
    else
      v45 = sub_1407C9820(BugCheckParameter3);
    v46 = v45;
    if ( !v45 )
    {
      v22 = -1073741670;
      sub_14020A890(a8, 0, 15, 0xC000009A, 0x10u);
      return v22;
    }
    v22 = sub_14071F300(BugCheckParameter3, (unsigned int)BugCheckParameter4, 0);
    if ( (v22 & 0x80000000) != 0 )
    {
      v51 = 24;
      goto LABEL_204;
    }
    v22 = sub_14071F300(BugCheckParameter3, *(unsigned int *)(v46 + 40), 0);
    if ( (v22 & 0x80000000) != 0 )
    {
      v51 = 40;
LABEL_204:
      sub_14020A890(a8, 0, 15, v22, v51);
      v47 = &v60;
      goto LABEL_205;
    }
    --*(_DWORD *)(v46 + 36);
    v12 = --v65;
    memmove(v16, (const void *)(v64 + 4LL * (v14 + 1)), 4LL * (v65 - v14));
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      sub_1406BF450(BugCheckParameter3, &v60);
    else
      sub_1407C97C0(BugCheckParameter3, &v60);
    v44 = 1;
    v66 = 1;
LABEL_170:
    if ( v14 >= v12 )
    {
      if ( v44 )
        return (unsigned int)-2147483606;
      return 0;
    }
    v13 = a2;
    a3 = v64;
  }
  if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, v15, BitMapHeader) )
  {
    sub_14020A890(a8, 1, 15, 0xC000014C, 0x60u);
    if ( !a8 )
      goto LABEL_157;
    *(_DWORD *)(a8 + 284) = v15;
    goto LABEL_156;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v17 = (_WORD *)sub_1406BF400(BugCheckParameter3, v15, &v54);
  else
    v17 = (_WORD *)sub_1407C9820(BugCheckParameter3);
  v18 = v17;
  if ( !v17 )
  {
    v22 = -1073741670;
    sub_14020A890(a8, 0, 15, 0xC000009A, 0x70u);
LABEL_173:
    if ( a8 )
    {
      *(_DWORD *)(a8 + 280) = v14;
      *(_DWORD *)(a8 + 284) = v15;
    }
    return v22;
  }
  v19 = -4 - *((_DWORD *)v17 - 1);
  if ( v19 < 0x14 )
  {
    sub_14020A890(a8, 1, 15, 0xC000014C, 0x80u);
    goto LABEL_144;
  }
  if ( *v17 != 27510 )
  {
    sub_14020A890(a8, 1, 15, 0xC000014C, 0x88u);
    goto LABEL_144;
  }
  v20 = (unsigned __int16)v17[1];
  if ( v20 + 20 > v19 )
  {
    sub_14020A890(a8, 1, 15, 0xC000014C, 0x90u);
    goto LABEL_144;
  }
  v21 = v17[8];
  if ( (v21 & 1) != 0 )
  {
    if ( (unsigned __int16)v20 > 0x3FFFu )
    {
      sub_14020A890(a8, 1, 15, 0xC000014C, 0x92u);
      goto LABEL_144;
    }
  }
  else
  {
    if ( (v20 & 1) != 0 )
    {
      sub_14020A890(a8, 1, 15, 0xC000014C, 0x94u);
      goto LABEL_144;
    }
    if ( (unsigned __int16)v20 > 0x7FFFu )
    {
      sub_14020A890(a8, 1, 15, 0xC000014C, 0x96u);
      goto LABEL_144;
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 144LL) & 2) != 0 || (v21 & 2) == 0 )
  {
LABEL_29:
    if ( v13 )
    {
      v24 = v18[1];
      if ( (v18[8] & 1) != 0 )
      {
        v25 = sub_1407C45A0((__int64)&stru_140D3CB80, (unsigned __int8 *)v18 + 20, v24, 0);
      }
      else
      {
        *((_QWORD *)&v62 + 1) = v18 + 10;
        LOWORD(v62) = v24;
        WORD1(v62) = v24;
        v25 = sub_140717780((__int64)&stru_140D3CB80, (__int64)&v62, 0);
      }
      if ( v25 )
      {
        v53 = 160;
        goto LABEL_179;
      }
      if ( *((_DWORD *)v18 + 3) != 6 && (v18[8] & 2) == 0 )
      {
        v53 = 176;
        goto LABEL_179;
      }
    }
    v26 = v18[8];
    v27 = 2 * v18[1];
    if ( (v26 & 1) == 0 )
      v27 = v18[1];
    if ( *a9 < (unsigned int)v27 )
      *a9 = v27;
    v28 = *((_DWORD *)v18 + 1);
    if ( !v13 )
      goto LABEL_43;
    if ( (v28 & 1) != 0 )
    {
      v53 = 192;
    }
    else
    {
      if ( v28 <= 0xFFFF )
      {
LABEL_43:
        if ( (v26 & 2) != 0 )
        {
          if ( v28 || *((_DWORD *)v18 + 3) )
            goto LABEL_47;
          v29 = *((_DWORD *)v18 + 2);
LABEL_50:
          if ( v29 == -1 )
          {
            v30 = 0LL;
            goto LABEL_57;
          }
LABEL_47:
          sub_14020A890(a8, 1, 15, 0xC000014C, 0xE0u);
          goto LABEL_144;
        }
        if ( v28 >= 0x80000000 )
        {
          if ( v28 + 0x80000000 <= 4 )
            goto LABEL_132;
          sub_14020A890(a8, 1, 15, 0xC000014C, 0x1A0u);
LABEL_144:
          if ( a8 )
          {
            *(_DWORD *)(a8 + 280) = v14;
            *(_DWORD *)(a8 + 284) = v15;
            *(_QWORD *)(a8 + 288) = v18;
          }
LABEL_146:
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            sub_1406BF450(BugCheckParameter3, &v54);
          else
            sub_1407C97C0(BugCheckParameter3, &v54);
          v16 = v56;
          goto LABEL_157;
        }
        v29 = *((_DWORD *)v18 + 2);
        if ( !v28 )
          goto LABEL_50;
        if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, v29, BitMapHeader) )
        {
          sub_14020A890(a8, 1, 15, 0xC000014C, 0xF0u);
          goto LABEL_144;
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v31 = sub_1406BF400(BugCheckParameter3, v29, &v57);
        else
          v31 = sub_1407C9820(BugCheckParameter3);
        v30 = v31;
        if ( v31 )
        {
LABEL_57:
          if ( *(_DWORD *)(BugCheckParameter3 + 220) < 4u || v28 <= 0x3FD8 )
          {
            if ( !v28 || v28 <= -4 - *(_DWORD *)(v30 - 4) )
              goto LABEL_84;
            sub_14020A890(a8, 1, 15, 0xC000014C, 0x190u);
            v14 = v55;
            if ( a8 )
            {
              *(_DWORD *)(a8 + 280) = v55;
              *(_DWORD *)(a8 + 284) = v15;
              *(_QWORD *)(a8 + 288) = v18;
            }
            v42 = BugCheckParameter3;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              goto LABEL_127;
          }
          else
          {
            if ( (unsigned int)(-4 - *(_DWORD *)(v30 - 4)) >= 8 && *(_WORD *)v30 == 25188 )
            {
              if ( *(_WORD *)(v30 + 2) )
              {
                v32 = *(unsigned int *)(v30 + 4);
                if ( (_DWORD)v32 != -1 )
                {
                  if ( !(unsigned __int8)sub_1407C8130(BugCheckParameter3, v32, BitMapHeader) )
                  {
                    sub_14020A890(a8, 1, 15, 0xC000014C, 0x120u);
                    if ( a8 )
                    {
                      *(_DWORD *)(a8 + 280) = v55;
                      *(_DWORD *)(a8 + 284) = *(_DWORD *)(v30 + 4);
                      *(_QWORD *)(a8 + 288) = v30;
                    }
                    v41 = BugCheckParameter3;
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
LABEL_99:
                      sub_1406BF450(v41, &v57);
                    else
LABEL_113:
                      sub_1407C97C0(v41, &v57);
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      sub_1406BF450(BugCheckParameter3, &v54);
                    else
                      sub_1407C97C0(BugCheckParameter3, &v54);
                    v14 = v55;
                    v16 = v56;
                    goto LABEL_157;
                  }
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    v33 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v30 + 4), &v58);
                  else
                    v33 = sub_1407C9820(BugCheckParameter3);
                  v61 = v33;
                  v34 = v33;
                  if ( !v33 )
                  {
                    v22 = -1073741670;
                    sub_14020A890(a8, 0, 15, 0xC000009A, 0x130u);
                    if ( a8 )
                    {
                      *(_DWORD *)(a8 + 280) = v55;
                      *(_DWORD *)(a8 + 284) = *(_DWORD *)(v30 + 4);
                    }
                    v50 = BugCheckParameter3;
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      goto LABEL_191;
LABEL_192:
                    sub_1407C97C0(v50, &v57);
                    v47 = &v54;
LABEL_205:
                    v48 = BugCheckParameter3;
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      goto LABEL_206;
LABEL_177:
                    sub_1407C97C0(v48, v47);
                    return v22;
                  }
                  v35 = 4LL * *(unsigned __int16 *)(v30 + 2);
                  if ( v35 < 4 || v35 > (unsigned int)(-4 - *(_DWORD *)(v33 - 4)) )
                  {
                    sub_14020A890(a8, 1, 15, 0xC000014C, 0x140u);
                  }
                  else
                  {
                    if ( *(unsigned __int16 *)(v30 + 2) == (v28 + 16343) / 0x3FD8 )
                    {
                      v36 = 0LL;
                      if ( *(_WORD *)(v30 + 2) )
                      {
                        while ( (unsigned __int8)sub_1407C8130(
                                                   BugCheckParameter3,
                                                   *(unsigned int *)(v34 + 4 * v36),
                                                   BitMapHeader) )
                        {
                          v37 = v61;
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            v38 = sub_1406BF400(BugCheckParameter3, *(unsigned int *)(v61 + 4 * v36), &v59);
                          else
                            v38 = sub_1407C9820(BugCheckParameter3);
                          if ( !v38 )
                          {
                            v22 = -1073741670;
                            sub_14020A890(a8, 0, 15, 0xC000009A, 0x170u);
                            if ( a8 )
                            {
                              v49 = v61;
                              *(_DWORD *)(a8 + 280) = v36;
                              *(_DWORD *)(a8 + 284) = *(_DWORD *)(v49 + 4 * v36);
                              *(_QWORD *)(a8 + 288) = v30;
                            }
                            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                              sub_1406BF450(BugCheckParameter3, &v58);
                            else
                              sub_1407C97C0(BugCheckParameter3, &v58);
                            v50 = BugCheckParameter3;
                            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                              goto LABEL_192;
LABEL_191:
                            sub_1406BF450(v50, &v57);
                            v47 = &v54;
                            goto LABEL_205;
                          }
                          if ( (unsigned int)(-4 - *(_DWORD *)(v38 - 4)) < 0x3FD8 )
                          {
                            sub_14020A890(a8, 1, 15, 0xC000014C, 0x180u);
                            if ( a8 )
                            {
                              *(_DWORD *)(a8 + 280) = v36;
                              *(_DWORD *)(a8 + 284) = *(_DWORD *)(v37 + 4 * v36);
                              *(_QWORD *)(a8 + 288) = v30;
                            }
                            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                              sub_1406BF450(BugCheckParameter3, &v59);
                            else
                              sub_1407C97C0(BugCheckParameter3, &v59);
                            v39 = BugCheckParameter3;
                            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                              goto LABEL_93;
LABEL_97:
                            sub_1407C97C0(v39, &v58);
                            goto LABEL_98;
                          }
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            sub_1406BF450(BugCheckParameter3, &v59);
                          else
                            sub_1407C97C0(BugCheckParameter3, &v59);
                          v36 = (unsigned int)(v36 + 1);
                          v34 = v37;
                          if ( (unsigned int)v36 >= *(unsigned __int16 *)(v30 + 2) )
                            goto LABEL_82;
                        }
                        sub_14020A890(a8, 1, 15, 0xC000014C, 0x160u);
                        if ( a8 )
                        {
                          v40 = v61;
                          *(_DWORD *)(a8 + 280) = v36;
                          *(_DWORD *)(a8 + 284) = *(_DWORD *)(v40 + 4 * v36);
                          *(_QWORD *)(a8 + 288) = v30;
                        }
                        v39 = BugCheckParameter3;
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                          goto LABEL_97;
LABEL_93:
                        sub_1406BF450(v39, &v58);
LABEL_98:
                        v41 = BugCheckParameter3;
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                          goto LABEL_113;
                        goto LABEL_99;
                      }
LABEL_82:
                      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        sub_1406BF450(BugCheckParameter3, &v58);
                      else
                        sub_1407C97C0(BugCheckParameter3, &v58);
LABEL_84:
                      if ( v30 )
                      {
                        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                        {
                          sub_1406BF450(BugCheckParameter3, &v57);
                          v28 = *((_DWORD *)v18 + 1);
                          v14 = v55;
LABEL_132:
                          v43 = v28 + 0x80000000;
                          if ( v28 < 0x80000000 )
                            v43 = v28;
                          if ( *a10 < v43 )
                            *a10 = v43;
                          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                            sub_1406BF450(BugCheckParameter3, &v54);
                          else
                            sub_1407C97C0(BugCheckParameter3, &v54);
                          v44 = v66;
                          ++v14;
                          v12 = v65;
                          v55 = v14;
                          goto LABEL_170;
                        }
                        sub_1407C97C0(BugCheckParameter3, &v57);
                      }
                      v28 = *((_DWORD *)v18 + 1);
                      v14 = v55;
                      goto LABEL_132;
                    }
                    sub_14020A890(a8, 1, 15, 0xC000014C, 0x150u);
                  }
                  v14 = v55;
                  if ( a8 )
                  {
                    *(_DWORD *)(a8 + 280) = v55;
                    *(_DWORD *)(a8 + 284) = v15;
                    *(_QWORD *)(a8 + 288) = v18;
                  }
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                    sub_1406BF450(BugCheckParameter3, &v58);
                  else
                    sub_1407C97C0(BugCheckParameter3, &v58);
                  v42 = BugCheckParameter3;
                  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
                    goto LABEL_108;
LABEL_127:
                  sub_1406BF450(v42, &v57);
                  goto LABEL_146;
                }
              }
            }
            sub_14020A890(a8, 1, 15, 0xC000014C, 0x110u);
            v14 = v55;
            if ( a8 )
            {
              *(_DWORD *)(a8 + 280) = v55;
              *(_DWORD *)(a8 + 284) = v29;
            }
            v42 = BugCheckParameter3;
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              goto LABEL_127;
          }
LABEL_108:
          sub_1407C97C0(v42, &v57);
          goto LABEL_146;
        }
        v22 = -1073741670;
        sub_14020A890(a8, 0, 15, 0xC000009A, 0x100u);
        if ( a8 )
        {
          v47 = &v54;
          *(_DWORD *)(a8 + 280) = v55;
          *(_DWORD *)(a8 + 284) = v29;
          goto LABEL_205;
        }
LABEL_181:
        v47 = &v54;
        goto LABEL_205;
      }
      v53 = 208;
    }
LABEL_179:
    v22 = -1073741492;
    sub_14020A890(a8, 0, 15, 0xC000014C, v53);
    if ( a8 )
    {
      *(_DWORD *)(a8 + 280) = v14;
      *(_DWORD *)(a8 + 284) = v15;
      *(_QWORD *)(a8 + 288) = v18;
    }
    goto LABEL_181;
  }
  v66 = 1;
  v22 = -1073741492;
  if ( a8 )
  {
    *(_DWORD *)(a8 + 280) = v14;
    *(_DWORD *)(a8 + 284) = v15;
    *(_QWORD *)(a8 + 288) = v17;
  }
  if ( (a6 & 0x20000) == 0 && (BYTE3(NlsMbOemCodePageTag) || (dword_140C4986C & 6) != 0) )
  {
    sub_14020A890(a8, 1, 15, 0xC000014C, 0x98u);
    v23 = sub_14071F300(BugCheckParameter3, v15, 0);
    v22 = v23;
    if ( v23 < 0 )
    {
      sub_14020A890(a8, 1, 15, v23, 0x9Au);
      v47 = &v54;
      goto LABEL_205;
    }
    v13 = a2;
    v18[8] &= ~2u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
    goto LABEL_29;
  }
  sub_14020A890(a8, 0, 15, 0xC000014C, 0x9Cu);
  v47 = &v54;
  v48 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0 )
    goto LABEL_177;
LABEL_206:
  sub_1406BF450(v48, v47);
  return v22;
}
