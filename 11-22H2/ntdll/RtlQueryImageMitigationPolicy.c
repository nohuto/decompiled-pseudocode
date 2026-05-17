/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800EC470
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001AEA0 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007689C (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtOpenKey @ 0x18009F030 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009F0D0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800EE3E0 (RtlpQueryEafPlusModuleList.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryImageMitigationPolicy(__int64 a1, int a2, char a3, _QWORD *a4, int a5)
{
  __int64 v6; // r12
  int v8; // r15d
  unsigned __int64 v9; // rbx
  int inited; // esi
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
  unsigned __int64 v26; // rdx
  __int64 v27; // r10
  __int64 v28; // r9
  __int64 v29; // r11
  __int64 v30; // r9
  unsigned __int64 v31; // r8
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  bool v34; // zf
  int v35; // r14d
  int v36; // r14d
  int v37; // r14d
  int v38; // r14d
  int v39; // r14d
  int v40; // r14d
  int v41; // r14d
  unsigned __int64 v42; // r13
  unsigned __int64 v43; // r15
  __int64 v44; // r9
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // r13
  unsigned __int64 v48; // rax
  bool v49; // zf
  unsigned __int64 v50; // r15
  __int64 v51; // r8
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // r15
  unsigned __int64 v56; // rax
  _OWORD *v57; // rdi
  _OWORD *v58; // rax
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int64 v66; // r9
  unsigned __int64 v67; // r8
  int v69; // [rsp+38h] [rbp-D0h]
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int16 v71[8]; // [rsp+48h] [rbp-C0h] BYREF
  char v72[16]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v73; // [rsp+68h] [rbp-A0h]
  __int64 v74; // [rsp+70h] [rbp-98h]
  _DWORD *v75; // [rsp+78h] [rbp-90h]
  int v76; // [rsp+80h] [rbp-88h]
  __int128 v77; // [rsp+88h] [rbp-80h]
  __int128 v78; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v79; // [rsp+A8h] [rbp-60h]
  unsigned int Size; // [rsp+B8h] [rbp-50h]
  size_t Size_4; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v82[1024]; // [rsp+D8h] [rbp-30h] BYREF

  v69 = a3 & 4;
  v6 = 8LL;
  v79 = 0LL;
  v8 = a3 & 8;
  v78 = 0LL;
  v9 = 0LL;
  inited = RtlInitUnicodeStringEx((__int64)v71, a1);
  if ( inited < 0 )
    return (unsigned int)inited;
  if ( v69 )
  {
    if ( v71[0] )
      return (unsigned int)-1073741811;
    if ( v8 )
      v13 = 0x2222222222222222LL;
    else
      v13 = 0x2222212222111211LL;
    v15 = *((_QWORD *)&v78 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
    v14 = 35791394LL;
LABEL_22:
    if ( a2 <= 9 )
    {
      if ( a2 == 9 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v13 >>= 48;
        goto LABEL_98;
      }
      if ( !a2 )
      {
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        goto LABEL_98;
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
                v26 = v13 >> 40;
                v27 = 0LL;
                v28 = 0LL;
                *(_OWORD *)a4 = 0LL;
                if ( (v26 & 3) != 0 )
                {
                  switch ( v26 & 3 )
                  {
                    case 1uLL:
LABEL_57:
                      v28 = v27 | 1;
                      *a4 = v27 | 1;
                      break;
                    case 2uLL:
                      *a4 = 2LL;
                      v28 = 2LL;
                      break;
                    case 3uLL:
                      v27 = 8LL;
                      goto LABEL_57;
                  }
                }
                if ( (v26 & 4) != 0 )
                  *a4 = v28 | 4;
                v25 = v15 >> 8;
LABEL_42:
                if ( (v25 & 3) != 0 )
                {
                  if ( (v25 & 3) == 1 )
                  {
                    a4[1] = 1LL;
                    v9 = 1LL;
LABEL_47:
                    if ( (v25 & 4) != 0 )
                      a4[1] = v9 | 4;
                    return (unsigned int)inited;
                  }
                  if ( (v25 & 3) != 2 )
                    goto LABEL_47;
                  v9 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
                }
                a4[1] = v9;
                goto LABEL_47;
              }
              if ( a5 != 8 )
                return (unsigned int)-1073741811;
              v13 >>= 32;
            }
            else
            {
              if ( a5 != 8 )
                return (unsigned int)-1073741811;
              v13 >>= 28;
            }
          }
          else
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v13 >>= 24;
          }
          goto LABEL_66;
        }
        if ( a5 != 8 )
          return (unsigned int)-1073741811;
        v13 >>= 36;
LABEL_98:
        *a4 = 0LL;
        if ( (v13 & 3) == 0 )
          goto LABEL_104;
        if ( (v13 & 3) != 1 )
        {
          if ( (v13 & 3) == 2 )
            goto LABEL_69;
          if ( (v13 & 3) != 3 )
            goto LABEL_104;
          v9 = 8LL;
        }
        v9 |= 1uLL;
        *a4 = v9;
        goto LABEL_104;
      }
      if ( a5 != 24 )
        return (unsigned int)-1073741811;
      v29 = 0LL;
      v30 = 0LL;
      *(_OWORD *)a4 = 0LL;
      a4[2] = 0LL;
      if ( (v13 & 0x300) != 0 )
      {
        if ( (BYTE1(v13) & 3) == 1 )
        {
LABEL_81:
          v30 = v29 | 1;
          *a4 = v29 | 1;
          goto LABEL_82;
        }
        if ( (BYTE1(v13) & 3) != 2 )
        {
          if ( (BYTE1(v13) & 3) != 3 )
            goto LABEL_82;
          v29 = 8LL;
          goto LABEL_81;
        }
        *a4 = 2LL;
        v30 = 2LL;
      }
LABEL_82:
      if ( (v13 & 0x400) != 0 )
        *a4 = v30 | 4;
      v31 = 0LL;
      if ( (v13 & 0x30000) != 0 )
      {
        if ( (BYTE2(v13) & 3) == 1 )
        {
          a4[1] = 1LL;
          v31 = 1LL;
        }
        else if ( (BYTE2(v13) & 3) == 2 )
        {
          v31 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[1] = v31;
        }
      }
      else
      {
        a4[1] = 0LL;
      }
      if ( (v13 & 0x40000) != 0 )
        a4[1] = v31 | 4;
      v32 = v13 >> 20;
      if ( (v32 & 3) != 0 )
      {
        if ( (v32 & 3) != 1 )
        {
          if ( (v32 & 3) == 2 )
          {
            v33 = 2LL;
LABEL_242:
            a4[2] = v33;
            goto LABEL_245;
          }
          goto LABEL_245;
        }
        goto LABEL_243;
      }
      goto LABEL_244;
    }
    v35 = a2 - 10;
    if ( !v35 )
    {
      if ( a5 != 24 )
        return (unsigned int)-1073741811;
      v66 = 0LL;
      *(_OWORD *)a4 = 0LL;
      a4[2] = 0LL;
      if ( ((v13 >> 52) & 3) != 0 )
      {
        if ( ((v13 >> 52) & 3) == 1 )
        {
          *a4 = 1LL;
          v66 = 1LL;
        }
        else if ( ((v13 >> 52) & 3) == 2 )
        {
          *a4 = 2LL;
          v66 = 2LL;
        }
      }
      if ( ((v13 >> 52) & 4) != 0 )
        *a4 = v66 | 4;
      v67 = 0LL;
      if ( (v13 & 0x300000000000000LL) != 0 )
      {
        if ( (HIBYTE(v13) & 3) == 1 )
        {
          a4[1] = 1LL;
          v67 = 1LL;
        }
        else if ( (HIBYTE(v13) & 3) == 2 )
        {
          v67 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
          a4[1] = v67;
        }
      }
      else
      {
        a4[1] = 0LL;
      }
      if ( (v13 & 0x400000000000000LL) != 0 )
        a4[1] = v67 | 4;
      v32 = v13 >> 60;
      if ( (v32 & 3) != 0 )
      {
        if ( (v32 & 3) != 1 )
        {
          if ( (v32 & 3) == 2 )
          {
            v33 = 2LL;
            goto LABEL_242;
          }
LABEL_245:
          v49 = (v32 & 4) == 0;
LABEL_246:
          if ( !v49 )
            a4[2] |= 4uLL;
          return (unsigned int)inited;
        }
LABEL_243:
        v33 = 1LL;
        goto LABEL_242;
      }
LABEL_244:
      a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_245;
    }
    v36 = v35 - 1;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( !v38 )
        {
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v13 >>= 4;
          goto LABEL_98;
        }
        v39 = v38 - 1;
        if ( !v39 )
        {
          if ( a5 != 8 )
            return (unsigned int)-1073741811;
          v13 >>= 12;
LABEL_66:
          *a4 = 0LL;
          if ( (v13 & 3) == 0 )
            goto LABEL_104;
          if ( (v13 & 3) == 1 )
          {
            *a4 = 1LL;
            v9 = 1LL;
            goto LABEL_104;
          }
          if ( (v13 & 3) != 2 )
          {
LABEL_104:
            v34 = (v13 & 4) == 0;
            goto LABEL_105;
          }
LABEL_69:
          *a4 = 2LL;
          v9 = 2LL;
          goto LABEL_104;
        }
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            if ( v41 != 1 || a5 != 8 )
              return (unsigned int)-1073741811;
            v42 = v14 >> 12;
          }
          else
          {
            if ( a5 != 8 )
              return (unsigned int)-1073741811;
            v42 = v14 >> 20;
          }
          *a4 = 0LL;
          if ( (v42 & 3) != 0 )
          {
            if ( (v42 & 3) == 1 )
            {
              *a4 = 1LL;
              v9 = 1LL;
            }
            else if ( (v42 & 3) == 2 )
            {
              *a4 = 2LL;
              v9 = 2LL;
            }
          }
          v34 = (v42 & 4) == 0;
          goto LABEL_105;
        }
        if ( a5 != 24 )
          return (unsigned int)-1073741811;
        v43 = v15 >> 60;
        v44 = 0LL;
        v45 = 0LL;
        *(_OWORD *)a4 = 0LL;
        a4[2] = 0LL;
        if ( (v43 & 3) != 0 )
        {
          if ( (v43 & 3) == 1 )
          {
LABEL_133:
            v45 = v44 | 1;
            *a4 = v44 | 1;
            goto LABEL_134;
          }
          if ( (v43 & 3) != 2 )
          {
            if ( (v43 & 3) != 3 )
              goto LABEL_134;
            v44 = 8LL;
            goto LABEL_133;
          }
          *a4 = 2LL;
          v45 = 2LL;
        }
LABEL_134:
        if ( (v43 & 4) != 0 )
          *a4 = v45 | 4;
        v46 = 0LL;
        if ( (v14 & 3) != 0 )
        {
          if ( (v14 & 3) == 1 )
          {
            a4[1] = 1LL;
            v46 = 1LL;
          }
          else if ( (v14 & 3) == 2 )
          {
            v46 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
            a4[1] = v46;
          }
        }
        else
        {
          a4[1] = 0LL;
        }
        if ( (v14 & 4) != 0 )
          a4[1] = v46 | 4;
        v47 = v14 >> 4;
        if ( (v47 & 3) == 0 )
        {
          a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
          goto LABEL_154;
        }
        if ( (v47 & 3) != 1 )
        {
          if ( (v47 & 3) == 2 )
          {
            v48 = 2LL;
            goto LABEL_152;
          }
          if ( (v47 & 3) != 3 )
          {
LABEL_154:
            v49 = (v47 & 4) == 0;
            goto LABEL_246;
          }
          a4[2] |= 8uLL;
        }
        v48 = a4[2] & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_152:
        a4[2] = v48;
        goto LABEL_154;
      }
      if ( a5 != 8 )
        return (unsigned int)-1073741811;
      v50 = v15 >> 36;
      *a4 = 0LL;
      if ( (v50 & 3) != 0 )
      {
        switch ( v50 & 3 )
        {
          case 1uLL:
LABEL_165:
            v9 |= 1uLL;
            *a4 = v9;
            break;
          case 2uLL:
            *a4 = 2LL;
            v9 = 2LL;
            break;
          case 3uLL:
            v9 = 8LL;
            goto LABEL_165;
        }
      }
      v34 = (v50 & 4) == 0;
LABEL_105:
      if ( !v34 )
        *a4 = v9 | 4;
      return (unsigned int)inited;
    }
    if ( a5 != 1072 )
      return (unsigned int)-1073741811;
    memset_thunk_772440563353939046(a4, 0, 0x430uLL);
    v51 = 0LL;
    if ( (v15 & 0x30000) != 0 )
    {
      if ( (BYTE2(v15) & 3) == 1 )
      {
        a4[3] = 1LL;
        v51 = 1LL;
      }
      else if ( (BYTE2(v15) & 3) == 2 )
      {
        a4[3] = 2LL;
        v51 = 2LL;
      }
    }
    if ( (v15 & 0x40000) != 0 )
      a4[3] = v51 | 4;
    v52 = 0LL;
    if ( ((v15 >> 20) & 3) != 0 )
    {
      if ( ((v15 >> 20) & 3) == 1 )
      {
        a4[4] = 1LL;
        v52 = 1LL;
      }
      else if ( ((v15 >> 20) & 3) == 2 )
      {
        v52 = a4[4] & 0xFFFFFFFFFFFFFFFCuLL | 2;
        a4[4] = v52;
      }
    }
    else
    {
      a4[4] = 0LL;
    }
    if ( ((v15 >> 20) & 4) != 0 )
      a4[4] = v52 | 4;
    if ( (v15 & 0x3000000) != 0 )
    {
      if ( (BYTE3(v15) & 3) == 1 )
      {
        v53 = a4[5] & 0xFFFFFFFFFFFFFFFCuLL | 1;
      }
      else
      {
        if ( (BYTE3(v15) & 3) != 2 )
          goto LABEL_191;
        v53 = a4[5] & 0xFFFFFFFFFFFFFFFCuLL | 2;
      }
      a4[5] = v53;
    }
    else
    {
      a4[5] &= 0xFFFFFFFFFFFFFFFCuLL;
    }
LABEL_191:
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
        v54 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 1;
      }
      else
      {
        if ( (BYTE4(v15) & 3) != 2 )
          goto LABEL_208;
        v54 = a4[1] & 0xFFFFFFFFFFFFFFFCuLL | 2;
      }
      a4[1] = v54;
    }
    else
    {
      a4[1] &= 0xFFFFFFFFFFFFFFFCuLL;
    }
LABEL_208:
    if ( (v15 & 0x400000000LL) != 0 )
      a4[1] |= 4uLL;
    v55 = v15 >> 40;
    switch ( v55 & 3 )
    {
      case 0uLL:
        a4[2] &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_217;
      case 1uLL:
        v56 = a4[2] & 0xFFFFFFFFFFFFFFFCuLL | 1;
        break;
      case 2uLL:
        v56 = a4[2] & 0xFFFFFFFFFFFFFFFCuLL | 2;
        break;
      default:
LABEL_217:
        if ( (v55 & 4) != 0 )
          a4[2] |= 4uLL;
        v57 = a4 + 6;
        v58 = v82;
        do
        {
          v59 = v58[1];
          *v57 = *v58;
          v60 = v58[2];
          v57[1] = v59;
          v61 = v58[3];
          v57[2] = v60;
          v62 = v58[4];
          v57[3] = v61;
          v63 = v58[5];
          v57[4] = v62;
          v64 = v58[6];
          v57[5] = v63;
          v65 = v58[7];
          v58 += 8;
          v57[6] = v64;
          v57 += 8;
          *(v57 - 1) = v65;
          --v6;
        }
        while ( v6 );
        return (unsigned int)inited;
    }
    a4[2] = v56;
    goto LABEL_217;
  }
  Handle = 0LL;
  v11 = L"MitigationOptions";
  if ( v8 )
    v11 = L"MitigationAuditOptions";
  RtlInitUnicodeStringEx((__int64)v72, (__int64)v11);
  if ( v71[0] )
  {
    v12 = RtlpOpenImageFileOptionsKeyEx(v71, 9u, 0, &Handle);
  }
  else
  {
    LODWORD(v73) = 48;
    v75 = dword_180131DB0;
    v74 = 0LL;
    v76 = 576;
    v77 = 0LL;
    v12 = NtOpenKey();
  }
  inited = v12;
  if ( v12 >= 0 )
  {
    inited = NtQueryValueKey();
    if ( inited >= 0 && a2 == 11 )
      inited = RtlpQueryEafPlusModuleList(Handle, v82);
    NtClose(Handle);
    if ( inited >= 0 )
    {
      if ( Size > 0x18 )
        return (unsigned int)-1073741788;
      memmove(&v78, &Size_4, Size);
      v13 = v78;
      v14 = v79;
      v15 = *((_QWORD *)&v78 + 1);
      goto LABEL_22;
    }
  }
  return (unsigned int)inited;
}
