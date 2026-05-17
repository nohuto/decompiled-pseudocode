/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800ECBA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x180047F30 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007C3A8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtOpenKey @ 0x1800A42B0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EEB28 (RtlpQueryEafPlusModuleList.c)
 */

__int64 __fastcall RtlQueryImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  __int64 v6; // r12
  int v8; // r15d
  unsigned __int64 v9; // rbx
  unsigned int inited; // esi
  const wchar_t *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
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
  unsigned __int64 v32; // r13
  __int64 v33; // r11
  __int64 v34; // r9
  unsigned __int64 v35; // r8
  unsigned __int64 v36; // rdx
  bool v37; // zf
  int v38; // r14d
  int v39; // r14d
  int v40; // r14d
  int v41; // r14d
  int v42; // r14d
  int v43; // r14d
  unsigned __int64 v44; // r13
  unsigned __int64 v45; // r15
  __int64 v46; // r9
  __int64 v47; // r8
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // r13
  bool v50; // zf
  unsigned __int64 v51; // r15
  __int64 v52; // r8
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r15
  _OWORD *v55; // rdi
  _OWORD *v56; // rax
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int64 v64; // r9
  unsigned __int64 v65; // r8
  int v67; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v69[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v70[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h]
  __int64 v72; // [rsp+70h] [rbp-98h]
  void *v73; // [rsp+78h] [rbp-90h]
  int v74; // [rsp+80h] [rbp-88h]
  __int128 v75; // [rsp+88h] [rbp-80h]
  __int128 v76; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v77; // [rsp+A8h] [rbp-60h]
  unsigned int Size; // [rsp+B8h] [rbp-50h]
  size_t Size_4; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v80[1024]; // [rsp+D8h] [rbp-30h] BYREF

  v67 = a3 & 4;
  v6 = 8LL;
  v77 = 0LL;
  v8 = a3 & 8;
  v76 = 0LL;
  v9 = 0LL;
  inited = RtlInitUnicodeStringEx((__int64)v69, a1);
  if ( (inited & 0x80000000) != 0 )
    return inited;
  if ( v67 )
  {
    if ( v69[0] )
      return (unsigned int)-1073741811;
    if ( v8 )
      v13 = 0x2222222222222222LL;
    else
      v13 = 0x2222212222111211LL;
    v15 = *((_QWORD *)&v76 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
    v14 = 35791394LL;
  }
  else
  {
    Handle = 0LL;
    v11 = L"MitigationOptions";
    if ( v8 )
      v11 = L"MitigationAuditOptions";
    RtlInitUnicodeStringEx((__int64)v70, (__int64)v11);
    if ( v69[0] )
    {
      v12 = RtlpOpenImageFileOptionsKeyEx(v69, 9LL, 0, &Handle);
    }
    else
    {
      LODWORD(v71) = 48;
      v73 = &unk_18012CDE0;
      v72 = 0LL;
      v74 = 576;
      v75 = 0LL;
      v12 = NtOpenKey();
    }
    inited = v12;
    if ( v12 < 0 )
      return inited;
    inited = NtQueryValueKey();
    if ( (inited & 0x80000000) == 0 && a2 == 11 )
      inited = RtlpQueryEafPlusModuleList(Handle, v80);
    NtClose(Handle);
    if ( (inited & 0x80000000) != 0 )
      return inited;
    if ( Size > 0x18 )
      return (unsigned int)-1073741788;
    memmove(&v76, &Size_4, Size);
    v13 = v76;
    v14 = v77;
    v15 = *((_QWORD *)&v76 + 1);
  }
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
          v32 = v14 >> 24;
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
              return inited;
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
          v37 = (v13 & 4) == 0;
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
          a4[2] &= ~1uLL;
          a4[2] |= 2uLL;
        }
        goto LABEL_250;
      }
      goto LABEL_248;
    }
    goto LABEL_249;
  }
  v38 = a2 - 10;
  if ( !v38 )
  {
    if ( a5 != 24 )
      return (unsigned int)-1073741811;
    v64 = 0LL;
    *(_OWORD *)a4 = 0LL;
    a4[2] = 0LL;
    if ( ((v13 >> 52) & 3) != 0 )
    {
      if ( ((v13 >> 52) & 3) == 1 )
      {
        *a4 = 1LL;
        v64 = 1LL;
      }
      else if ( ((v13 >> 52) & 3) == 2 )
      {
        *a4 = 2LL;
        v64 = 2LL;
      }
    }
    if ( ((v13 >> 52) & 4) != 0 )
      *a4 = v64 | 4;
    v65 = 0LL;
    if ( (v13 & 0x300000000000000LL) != 0 )
    {
      if ( (HIBYTE(v13) & 3) == 1 )
      {
        a4[1] = 1LL;
        v65 = 1LL;
      }
      else if ( (HIBYTE(v13) & 3) == 2 )
      {
        v65 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
        a4[1] = v65;
      }
    }
    else
    {
      a4[1] = 0LL;
    }
    if ( (v13 & 0x400000000000000LL) != 0 )
      a4[1] = v65 | 4;
    v36 = v13 >> 60;
    if ( (v36 & 3) != 0 )
    {
      if ( (v36 & 3) != 1 )
      {
        if ( (v36 & 3) == 2 )
        {
          a4[2] &= ~1uLL;
          a4[2] |= 2uLL;
        }
        goto LABEL_250;
      }
LABEL_248:
      a4[2] &= ~2uLL;
      a4[2] |= 1uLL;
LABEL_250:
      v50 = (v36 & 4) == 0;
LABEL_251:
      if ( !v50 )
        a4[2] |= 4uLL;
      return inited;
    }
LABEL_249:
    a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
    goto LABEL_250;
  }
  v39 = v38 - 1;
  if ( v39 )
  {
    v40 = v39 - 1;
    if ( v40 )
    {
      v41 = v40 - 1;
      if ( !v41 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v13 >>= 4;
        goto LABEL_112;
      }
      v42 = v41 - 1;
      if ( !v42 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v13 >>= 12;
        goto LABEL_82;
      }
      v43 = v42 - 1;
      if ( v43 )
      {
        if ( v43 != 1 || a5 != 8 )
          return (unsigned int)-1073741811;
        v44 = v14 >> 20;
        *a4 = 0LL;
        if ( (v44 & 3) != 0 )
        {
          if ( (v44 & 3) == 1 )
          {
            *a4 = 1LL;
            v9 = 1LL;
          }
          else if ( (v44 & 3) == 2 )
          {
            *a4 = 2LL;
            v9 = 2LL;
          }
        }
        v37 = (v44 & 4) == 0;
        goto LABEL_119;
      }
      if ( a5 != 24 )
        return (unsigned int)-1073741811;
      v45 = v15 >> 60;
      v46 = 0LL;
      v47 = 0LL;
      *(_OWORD *)a4 = 0LL;
      a4[2] = 0LL;
      if ( (v45 & 3) != 0 )
      {
        if ( (v45 & 3) == 1 )
        {
LABEL_143:
          v47 = v46 | 1;
          *a4 = v46 | 1;
          goto LABEL_144;
        }
        if ( (v45 & 3) != 2 )
        {
          if ( (v45 & 3) != 3 )
            goto LABEL_144;
          v46 = 8LL;
          goto LABEL_143;
        }
        *a4 = 2LL;
        v47 = 2LL;
      }
LABEL_144:
      if ( (v45 & 4) != 0 )
        *a4 = v47 | 4;
      v48 = 0LL;
      if ( (v14 & 3) != 0 )
      {
        if ( (v14 & 3) == 1 )
        {
          a4[1] = 1LL;
          v48 = 1LL;
        }
        else if ( (v14 & 3) == 2 )
        {
          v48 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[1] = v48;
        }
      }
      else
      {
        a4[1] = 0LL;
      }
      if ( (v14 & 4) != 0 )
        a4[1] = v48 | 4;
      v49 = v14 >> 4;
      if ( (v49 & 3) == 0 )
      {
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_163;
      }
      if ( (v49 & 3) != 1 )
      {
        if ( (v49 & 3) == 2 )
        {
          a4[2] &= ~1uLL;
          a4[2] |= 2uLL;
          goto LABEL_163;
        }
        if ( (v49 & 3) != 3 )
        {
LABEL_163:
          v50 = (v49 & 4) == 0;
          goto LABEL_251;
        }
        a4[2] |= 8uLL;
      }
      a4[2] &= ~2uLL;
      a4[2] |= 1uLL;
      goto LABEL_163;
    }
    if ( a5 != 8 )
      return (unsigned int)-1073741811;
    v51 = v15 >> 36;
    *a4 = 0LL;
    if ( (v51 & 3) != 0 )
    {
      switch ( v51 & 3 )
      {
        case 1uLL:
LABEL_174:
          v9 |= 1uLL;
          *a4 = v9;
          break;
        case 2uLL:
          *a4 = 2LL;
          v9 = 2LL;
          break;
        case 3uLL:
          v9 = 8LL;
          goto LABEL_174;
      }
    }
    v37 = (v51 & 4) == 0;
LABEL_119:
    if ( !v37 )
      *a4 = v9 | 4;
    return inited;
  }
  if ( a5 != 1072 )
    return (unsigned int)-1073741811;
  memset(a4, 0, 0x430uLL);
  v52 = 0LL;
  if ( (v15 & 0x30000) != 0 )
  {
    if ( (BYTE2(v15) & 3) == 1 )
    {
      a4[3] = 1LL;
      v52 = 1LL;
    }
    else if ( (BYTE2(v15) & 3) == 2 )
    {
      a4[3] = 2LL;
      v52 = 2LL;
    }
  }
  if ( (v15 & 0x40000) != 0 )
    a4[3] = v52 | 4;
  v53 = 0LL;
  if ( ((v15 >> 20) & 3) != 0 )
  {
    if ( ((v15 >> 20) & 3) == 1 )
    {
      a4[4] = 1LL;
      v53 = 1LL;
    }
    else if ( ((v15 >> 20) & 3) == 2 )
    {
      v53 = a4[4] & 0xFFFFFFFFFFFFFFFCuLL | 2;
      a4[4] = v53;
    }
  }
  else
  {
    a4[4] = 0LL;
  }
  if ( ((v15 >> 20) & 4) != 0 )
    a4[4] = v53 | 4;
  if ( (v15 & 0x3000000) != 0 )
  {
    if ( (BYTE3(v15) & 3) == 1 )
    {
      a4[5] &= ~2uLL;
      a4[5] |= 1uLL;
    }
    else if ( (BYTE3(v15) & 3) == 2 )
    {
      a4[5] &= ~1uLL;
      a4[5] |= 2uLL;
    }
  }
  else
  {
    a4[5] &= 0xFFFFFFFFFFFFFFFCuLL;
  }
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
      a4[1] &= ~2uLL;
      a4[1] |= 1uLL;
    }
    else if ( (BYTE4(v15) & 3) == 2 )
    {
      a4[1] &= ~1uLL;
      a4[1] |= 2uLL;
    }
  }
  else
  {
    a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( (v15 & 0x400000000LL) != 0 )
    a4[1] |= 4uLL;
  v54 = v15 >> 40;
  if ( (v54 & 3) != 0 )
  {
    if ( (v54 & 3) == 1 )
    {
      a4[2] &= ~2uLL;
      a4[2] |= 1uLL;
    }
    else if ( (v54 & 3) == 2 )
    {
      a4[2] &= ~1uLL;
      a4[2] |= 2uLL;
    }
  }
  else
  {
    a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  if ( (v54 & 4) != 0 )
    a4[2] |= 4uLL;
  v55 = a4 + 6;
  v56 = v80;
  do
  {
    v57 = v56[1];
    *v55 = *v56;
    v58 = v56[2];
    v55[1] = v57;
    v59 = v56[3];
    v55[2] = v58;
    v60 = v56[4];
    v55[3] = v59;
    v61 = v56[5];
    v55[4] = v60;
    v62 = v56[6];
    v55[5] = v61;
    v63 = v56[7];
    v56 += 8;
    v55[6] = v62;
    v55 += 8;
    *(v55 - 1) = v63;
    --v6;
  }
  while ( v6 );
  return inited;
}
