/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800ED7A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001ACC0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x180076F0C (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtOpenKey @ 0x1800A10F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A1190 (NtQueryValueKey.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EF7F0 (RtlpQueryEafPlusModuleList.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  __int64 v6; // r13
  int v8; // r15d
  unsigned __int64 v9; // rbx
  int inited; // esi
  const wchar_t *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r15
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  int v19; // r14d
  int v20; // r14d
  int v21; // r14d
  unsigned __int64 v22; // rdx
  __int64 v23; // r10
  __int64 v24; // r9
  unsigned __int64 v25; // r15
  bool v26; // zf
  unsigned __int64 v27; // rdx
  __int64 v28; // r10
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  __int64 v31; // r9
  unsigned __int64 v32; // r12
  __int64 v33; // r11
  __int64 v34; // r9
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  bool v38; // zf
  int v39; // r14d
  int v40; // r14d
  int v41; // r14d
  int v42; // r14d
  int v43; // r14d
  int v44; // r14d
  int v45; // r14d
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // r15
  __int64 v48; // r9
  __int64 v49; // r8
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // r12
  unsigned __int64 v52; // rax
  bool v53; // zf
  unsigned __int64 v54; // r15
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r15
  unsigned __int64 v60; // rax
  _OWORD *v61; // rdi
  _OWORD *v62; // rax
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int64 v70; // r9
  unsigned __int64 v71; // r8
  int v73; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v75[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v76[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+68h] [rbp-A0h]
  __int64 v78; // [rsp+70h] [rbp-98h]
  void *v79; // [rsp+78h] [rbp-90h]
  int v80; // [rsp+80h] [rbp-88h]
  __int128 v81; // [rsp+88h] [rbp-80h]
  __int128 v82; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v83; // [rsp+A8h] [rbp-60h]
  unsigned int Size; // [rsp+B8h] [rbp-50h]
  size_t Size_4; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v86[1024]; // [rsp+D8h] [rbp-30h] BYREF

  v73 = a3 & 4;
  v6 = 8LL;
  v83 = 0LL;
  v8 = a3 & 8;
  v82 = 0LL;
  v9 = 0LL;
  inited = RtlInitUnicodeStringEx((__int64)v75, a1);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( v73 )
  {
    if ( v75[0] )
      return (unsigned int)-1073741811;
    if ( v8 )
      v13 = 0x2222222222222222LL;
    else
      v13 = 0x2222212222111211LL;
    v15 = *((_QWORD *)&v82 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
    v14 = 572662306LL;
LABEL_22:
    if ( a2 <= 9 )
    {
      if ( a2 == 9 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v13 >>= 48;
        goto LABEL_112;
      }
      if ( !a2 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        goto LABEL_112;
      }
      v16 = a2 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 1;
          if ( v18 )
          {
            v19 = v18 - 1;
            if ( v19 )
            {
              v20 = v19 - 2;
              if ( v20 )
              {
                v21 = v20 - 1;
                if ( v21 )
                {
                  if ( v21 == 1 && a5 == 16 )
                  {
                    v22 = v13 >> 44;
                    v23 = 0LL;
                    v24 = 0LL;
                    *(_OWORD *)a4 = 0LL;
                    if ( (v22 & 3) != 0 )
                    {
                      switch ( v22 & 3 )
                      {
                        case 1uLL:
LABEL_38:
                          v24 = v23 | 1;
                          *a4 = v23 | 1;
                          break;
                        case 2uLL:
                          *a4 = 2LL;
                          v24 = 2LL;
                          break;
                        case 3uLL:
                          v23 = 8LL;
                          goto LABEL_38;
                      }
                    }
                    if ( (v22 & 4) != 0 )
                      *a4 = v24 | 4;
                    v25 = v15 >> 4;
                    goto LABEL_42;
                  }
                  return (unsigned int)-1073741811;
                }
                if ( a5 != 16 )
                  return (unsigned int)-1073741811;
                v27 = v13 >> 40;
                v28 = 0LL;
                v29 = 0LL;
                *(_OWORD *)a4 = 0LL;
                if ( (v27 & 3) != 0 )
                {
                  switch ( v27 & 3 )
                  {
                    case 1uLL:
LABEL_56:
                      v29 = v28 | 1;
                      *a4 = v28 | 1;
                      break;
                    case 2uLL:
                      *a4 = 2LL;
                      v29 = 2LL;
                      break;
                    case 3uLL:
                      v28 = 8LL;
                      goto LABEL_56;
                  }
                }
                if ( (v27 & 4) != 0 )
                  *a4 = v29 | 4;
                v25 = v15 >> 8;
LABEL_42:
                if ( (v25 & 3) != 0 )
                {
                  if ( (v25 & 3) == 1 )
                  {
                    a4[1] = 1LL;
                    v9 = 1LL;
                    goto LABEL_47;
                  }
                  if ( (v25 & 3) != 2 )
                  {
LABEL_47:
                    v26 = (v25 & 4) == 0;
                    goto LABEL_77;
                  }
                  v9 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
                }
                a4[1] = v9;
                goto LABEL_47;
              }
              if ( a5 != 8 )
                return (unsigned int)-1073741811;
              v13 >>= 32;
              goto LABEL_82;
            }
            if ( a5 != 16 )
              return (unsigned int)-1073741811;
            v30 = v13 >> 28;
            v31 = 0LL;
            *(_OWORD *)a4 = 0LL;
            if ( (v30 & 3) != 0 )
            {
              if ( (v30 & 3) == 1 )
              {
                *a4 = 1LL;
                v31 = 1LL;
              }
              else if ( (v30 & 3) == 2 )
              {
                *a4 = 2LL;
                v31 = 2LL;
              }
            }
            if ( (v30 & 4) != 0 )
              *a4 = v31 | 4;
            v32 = v14 >> 28;
            if ( (v32 & 3) != 0 )
            {
              if ( (v32 & 3) == 1 )
              {
                a4[1] = 1LL;
                v9 = 1LL;
                goto LABEL_76;
              }
              if ( (v32 & 3) != 2 )
              {
LABEL_76:
                v26 = (v32 & 4) == 0;
LABEL_77:
                if ( !v26 )
                  a4[1] = v9 | 4;
                return (unsigned int)inited;
              }
              v9 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
            }
            a4[1] = v9;
            goto LABEL_76;
          }
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v13 >>= 24;
LABEL_82:
          *a4 = 0LL;
          if ( (v13 & 3) == 0 )
            goto LABEL_118;
          if ( (v13 & 3) == 1 )
          {
            *a4 = 1LL;
            v9 = 1LL;
            goto LABEL_118;
          }
          if ( (v13 & 3) != 2 )
          {
LABEL_118:
            v38 = (v13 & 4) == 0;
            goto LABEL_119;
          }
LABEL_85:
          *a4 = 2LL;
          v9 = 2LL;
          goto LABEL_118;
        }
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v13 >>= 36;
LABEL_112:
        *a4 = 0LL;
        if ( (v13 & 3) == 0 )
          goto LABEL_118;
        if ( (v13 & 3) != 1 )
        {
          if ( (v13 & 3) == 2 )
            goto LABEL_85;
          if ( (v13 & 3) != 3 )
            goto LABEL_118;
          v9 = 8LL;
        }
        v9 |= 1uLL;
        *a4 = v9;
        goto LABEL_118;
      }
      if ( a5 != 24 )
        return (unsigned int)-1073741811;
      v33 = 0LL;
      v34 = 0LL;
      *(_OWORD *)a4 = 0LL;
      a4[2] = 0LL;
      if ( (v13 & 0x300) != 0 )
      {
        if ( (BYTE1(v13) & 3) == 1 )
        {
LABEL_95:
          v34 = v33 | 1;
          *a4 = v33 | 1;
          goto LABEL_96;
        }
        if ( (BYTE1(v13) & 3) != 2 )
        {
          if ( (BYTE1(v13) & 3) != 3 )
            goto LABEL_96;
          v33 = 8LL;
          goto LABEL_95;
        }
        *a4 = 2LL;
        v34 = 2LL;
      }
LABEL_96:
      if ( (v13 & 0x400) != 0 )
        *a4 = v34 | 4;
      v35 = 0LL;
      if ( (v13 & 0x30000) != 0 )
      {
        if ( (BYTE2(v13) & 3) == 1 )
        {
          a4[1] = 1LL;
          v35 = 1LL;
        }
        else if ( (BYTE2(v13) & 3) == 2 )
        {
          v35 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[1] = v35;
        }
      }
      else
      {
        a4[1] = 0LL;
      }
      if ( (v13 & 0x40000) != 0 )
        a4[1] = v35 | 4;
      v36 = v13 >> 20;
      if ( (v36 & 3) != 0 )
      {
        if ( (v36 & 3) != 1 )
        {
          if ( (v36 & 3) == 2 )
          {
            v37 = 2LL;
LABEL_256:
            a4[2] = v37;
            goto LABEL_259;
          }
          goto LABEL_259;
        }
        goto LABEL_257;
      }
      goto LABEL_258;
    }
    v39 = a2 - 10;
    if ( !v39 )
    {
      if ( a5 != 24 )
        return (unsigned int)-1073741811;
      v70 = 0LL;
      *(_OWORD *)a4 = 0LL;
      a4[2] = 0LL;
      if ( ((v13 >> 52) & 3) != 0 )
      {
        if ( ((v13 >> 52) & 3) == 1 )
        {
          *a4 = 1LL;
          v70 = 1LL;
        }
        else if ( ((v13 >> 52) & 3) == 2 )
        {
          *a4 = 2LL;
          v70 = 2LL;
        }
      }
      if ( ((v13 >> 52) & 4) != 0 )
        *a4 = v70 | 4;
      v71 = 0LL;
      if ( (v13 & 0x300000000000000LL) != 0 )
      {
        if ( (HIBYTE(v13) & 3) == 1 )
        {
          a4[1] = 1LL;
          v71 = 1LL;
        }
        else if ( (HIBYTE(v13) & 3) == 2 )
        {
          v71 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[1] = v71;
        }
      }
      else
      {
        a4[1] = 0LL;
      }
      if ( (v13 & 0x400000000000000LL) != 0 )
        a4[1] = v71 | 4;
      v36 = v13 >> 60;
      if ( (v36 & 3) != 0 )
      {
        if ( (v36 & 3) != 1 )
        {
          if ( (v36 & 3) == 2 )
          {
            v37 = 2LL;
            goto LABEL_256;
          }
LABEL_259:
          v53 = (v36 & 4) == 0;
LABEL_260:
          if ( !v53 )
            a4[2] |= 4uLL;
          return (unsigned int)inited;
        }
LABEL_257:
        v37 = 1LL;
        goto LABEL_256;
      }
LABEL_258:
      a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_259;
    }
    v40 = v39 - 1;
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( v41 )
      {
        v42 = v41 - 1;
        if ( !v42 )
        {
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v13 >>= 4;
          goto LABEL_112;
        }
        v43 = v42 - 1;
        if ( !v43 )
        {
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v13 >>= 12;
          goto LABEL_82;
        }
        v44 = v43 - 1;
        if ( v44 )
        {
          v45 = v44 - 1;
          if ( v45 )
          {
            if ( v45 != 1 || a5 != 8 )
              return (unsigned int)-1073741811;
            v46 = v14 >> 12;
          }
          else
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v46 = v14 >> 20;
          }
          *a4 = 0LL;
          if ( (v46 & 3) != 0 )
          {
            if ( (v46 & 3) == 1 )
            {
              *a4 = 1LL;
              v9 = 1LL;
            }
            else if ( (v46 & 3) == 2 )
            {
              *a4 = 2LL;
              v9 = 2LL;
            }
          }
          v38 = (v46 & 4) == 0;
          goto LABEL_119;
        }
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        v47 = v15 >> 60;
        v48 = 0LL;
        v49 = 0LL;
        *(_OWORD *)a4 = 0LL;
        a4[2] = 0LL;
        if ( (v47 & 3) != 0 )
        {
          if ( (v47 & 3) == 1 )
          {
LABEL_147:
            v49 = v48 | 1;
            *a4 = v48 | 1;
            goto LABEL_148;
          }
          if ( (v47 & 3) != 2 )
          {
            if ( (v47 & 3) != 3 )
              goto LABEL_148;
            v48 = 8LL;
            goto LABEL_147;
          }
          *a4 = 2LL;
          v49 = 2LL;
        }
LABEL_148:
        if ( (v47 & 4) != 0 )
          *a4 = v49 | 4;
        v50 = 0LL;
        if ( (v14 & 3) != 0 )
        {
          if ( (v14 & 3) == 1 )
          {
            a4[1] = 1LL;
            v50 = 1LL;
          }
          else if ( (v14 & 3) == 2 )
          {
            v50 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
            a4[1] = v50;
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v14 & 4) != 0 )
          a4[1] = v50 | 4;
        v51 = v14 >> 4;
        if ( (v51 & 3) == 0 )
        {
          a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
          goto LABEL_168;
        }
        if ( (v51 & 3) != 1 )
        {
          if ( (v51 & 3) == 2 )
          {
            v52 = 2LL;
            goto LABEL_166;
          }
          if ( (v51 & 3) != 3 )
          {
LABEL_168:
            v53 = (v51 & 4) == 0;
            goto LABEL_260;
          }
          a4[2] |= 8uLL;
        }
        v52 = a4[2] & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_166:
        a4[2] = v52;
        goto LABEL_168;
      }
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v54 = v15 >> 36;
      *a4 = 0LL;
      if ( (v54 & 3) != 0 )
      {
        switch ( v54 & 3 )
        {
          case 1uLL:
LABEL_179:
            v9 |= 1uLL;
            *a4 = v9;
            break;
          case 2uLL:
            *a4 = 2LL;
            v9 = 2LL;
            break;
          case 3uLL:
            v9 = 8LL;
            goto LABEL_179;
        }
      }
      v38 = (v54 & 4) == 0;
LABEL_119:
      if ( !v38 )
        *a4 = v9 | 4;
      return (unsigned int)inited;
    }
    if ( a5 != 1072 )
      return (unsigned int)-1073741811;
    memset_thunk_772440563353939046(a4, 0, 0x430uLL);
    v55 = 0LL;
    if ( (v15 & 0x30000) != 0 )
    {
      if ( (BYTE2(v15) & 3) == 1 )
      {
        a4[3] = 1LL;
        v55 = 1LL;
      }
      else if ( (BYTE2(v15) & 3) == 2 )
      {
        a4[3] = 2LL;
        v55 = 2LL;
      }
    }
    if ( (v15 & 0x40000) != 0 )
      a4[3] = v55 | 4;
    v56 = 0LL;
    if ( ((v15 >> 20) & 3) != 0 )
    {
      if ( ((v15 >> 20) & 3) == 1 )
      {
        a4[4] = 1LL;
        v56 = 1LL;
      }
      else if ( ((v15 >> 20) & 3) == 2 )
      {
        v56 = a4[4] & 0xFFFFFFFFFFFFFFFCuLL | 2;
        a4[4] = v56;
      }
    }
    else
    {
      a4[4] = 0LL;
    }
    if ( ((v15 >> 20) & 4) != 0 )
      a4[4] = v56 | 4;
    if ( (v15 & 0x3000000) != 0 )
    {
      if ( (BYTE3(v15) & 3) == 1 )
      {
        v57 = a4[5] & 0xFFFFFFFFFFFFFFFCuLL | 1;
      }
      else
      {
        if ( (BYTE3(v15) & 3) != 2 )
          goto LABEL_205;
        v57 = a4[5] & 0xFFFFFFFFFFFFFFFCuLL | 2;
      }
      a4[5] = v57;
    }
    else
    {
      a4[5] &= 0xFFFFFFFFFFFFFFFCuLL;
    }
LABEL_205:
    if ( (v15 & 0x4000000) != 0 )
      a4[5] |= 4uLL;
    if ( ((v15 >> 28) & 3) != 0 )
    {
      if ( ((v15 >> 28) & 3) == 1 )
      {
        *a4 &= ~2uLL;
        *a4 |= 1uLL;
      }
      else if ( ((v15 >> 28) & 3) == 2 )
      {
        *a4 &= ~1uLL;
        *a4 |= 2uLL;
      }
    }
    else
    {
      *a4 &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( ((v15 >> 28) & 4) != 0 )
      *a4 |= 4uLL;
    if ( (v15 & 0x300000000LL) != 0 )
    {
      if ( (BYTE4(v15) & 3) == 1 )
      {
        v58 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 1;
      }
      else
      {
        if ( (BYTE4(v15) & 3) != 2 )
          goto LABEL_222;
        v58 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
      }
      a4[1] = v58;
    }
    else
    {
      a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
    }
LABEL_222:
    if ( (v15 & 0x400000000LL) != 0 )
      a4[1] |= 4uLL;
    v59 = v15 >> 40;
    switch ( v59 & 3 )
    {
      case 0uLL:
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_231;
      case 1uLL:
        v60 = a4[2] & 0xFFFFFFFFFFFFFFFCuLL | 1;
        break;
      case 2uLL:
        v60 = a4[2] & 0xFFFFFFFFFFFFFFFCuLL | 2;
        break;
      default:
LABEL_231:
        if ( (v59 & 4) != 0 )
          a4[2] |= 4uLL;
        v61 = a4 + 6;
        v62 = v86;
        do
        {
          v63 = v62[1];
          *v61 = *v62;
          v64 = v62[2];
          v61[1] = v63;
          v65 = v62[3];
          v61[2] = v64;
          v66 = v62[4];
          v61[3] = v65;
          v67 = v62[5];
          v61[4] = v66;
          v68 = v62[6];
          v61[5] = v67;
          v69 = v62[7];
          v62 += 8;
          v61[6] = v68;
          v61 += 8;
          *(v61 - 1) = v69;
          --v6;
        }
        while ( v6 );
        return (unsigned int)inited;
    }
    a4[2] = v60;
    goto LABEL_231;
  }
  Handle = 0LL;
  v11 = L"MitigationOptions";
  if ( v8 )
    v11 = L"MitigationAuditOptions";
  RtlInitUnicodeStringEx((__int64)v76, (__int64)v11);
  if ( v75[0] )
  {
    v12 = RtlpOpenImageFileOptionsKeyEx(v75, 9u, 0, &Handle);
  }
  else
  {
    LODWORD(v77) = 48;
    v79 = &unk_180133E00;
    v78 = 0LL;
    v80 = 576;
    v81 = 0LL;
    v12 = NtOpenKey();
  }
  inited = v12;
  if ( v12 >= 0 )
  {
    inited = NtQueryValueKey();
    if ( inited >= 0 && a2 == 11 )
      inited = RtlpQueryEafPlusModuleList(Handle, v86);
    NtClose(Handle);
    if ( inited >= 0 )
    {
      if ( Size > 0x18 )
        return (unsigned int)-1073741788;
      memmove(&v82, &Size_4, Size);
      v13 = v82;
      v14 = v83;
      v15 = *((_QWORD *)&v82 + 1);
      goto LABEL_22;
    }
  }
  return (unsigned int)inited;
}
