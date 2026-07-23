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

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  __int64 v6; // r12
  ULONG v8; // r15d
  unsigned __int64 v9; // rbx
  int inited; // esi
  const WCHAR *v11; // rdx
  int v12; // eax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r15
  __int32 v16; // r14d
  __int32 v17; // r14d
  __int32 v18; // r14d
  __int32 v19; // r14d
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
  __int32 v35; // r14d
  __int32 v36; // r14d
  __int32 v37; // r14d
  __int32 v38; // r14d
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
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v74; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v75; // [rsp+A8h] [rbp-60h]
  char KeyValueInformation[8]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned int Size; // [rsp+B8h] [rbp-50h]
  size_t Size_4; // [rsp+BCh] [rbp-4Ch] BYREF
  _BYTE v79[1024]; // [rsp+D8h] [rbp-30h] BYREF

  ResultLength[0] = Flags & 4;
  v6 = 8LL;
  v75 = 0LL;
  v8 = Flags & 8;
  v74 = 0LL;
  v9 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, ImagePath);
  if ( inited < 0 )
    return inited;
  if ( ResultLength[0] )
  {
    if ( DestinationString.Length )
      return -1073741811;
    if ( v8 )
      v13 = 0x2222222222222222LL;
    else
      v13 = 0x2222212222111211LL;
    v15 = *((_QWORD *)&v74 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
    v14 = 35791394LL;
LABEL_22:
    if ( Policy <= ImageFontDisablePolicy )
    {
      if ( Policy == ImageFontDisablePolicy )
      {
        if ( BufferSize != 8 )
          return -1073741811;
        LOBYTE(v13) = BYTE6(v13);
        goto LABEL_98;
      }
      if ( Policy == ImageDepPolicy )
      {
        if ( BufferSize != 8 )
          return -1073741811;
        goto LABEL_98;
      }
      v16 = Policy - 1;
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
                  if ( v21 == 1 && BufferSize == 16 )
                  {
                    v22 = v13 >> 44;
                    v23 = 0LL;
                    v24 = 0LL;
                    *(_OWORD *)Buffer = 0LL;
                    if ( (v22 & 3) != 0 )
                    {
                      switch ( v22 & 3 )
                      {
                        case 1uLL:
LABEL_38:
                          v24 = v23 | 1;
                          *(_QWORD *)Buffer = v23 | 1;
                          break;
                        case 2uLL:
                          *(_QWORD *)Buffer = 2LL;
                          v24 = 2LL;
                          break;
                        case 3uLL:
                          v23 = 8LL;
                          goto LABEL_38;
                      }
                    }
                    if ( (v22 & 4) != 0 )
                      *(_QWORD *)Buffer = v24 | 4;
                    v25 = v15 >> 4;
                    goto LABEL_42;
                  }
                  return -1073741811;
                }
                if ( BufferSize != 16 )
                  return -1073741811;
                v26 = v13 >> 40;
                v27 = 0LL;
                v28 = 0LL;
                *(_OWORD *)Buffer = 0LL;
                if ( (v26 & 3) != 0 )
                {
                  switch ( v26 & 3 )
                  {
                    case 1uLL:
LABEL_57:
                      v28 = v27 | 1;
                      *(_QWORD *)Buffer = v27 | 1;
                      break;
                    case 2uLL:
                      *(_QWORD *)Buffer = 2LL;
                      v28 = 2LL;
                      break;
                    case 3uLL:
                      v27 = 8LL;
                      goto LABEL_57;
                  }
                }
                if ( (v26 & 4) != 0 )
                  *(_QWORD *)Buffer = v28 | 4;
                v25 = v15 >> 8;
LABEL_42:
                if ( (v25 & 3) != 0 )
                {
                  if ( (v25 & 3) == 1 )
                  {
                    *((_QWORD *)Buffer + 1) = 1LL;
                    v9 = 1LL;
LABEL_47:
                    if ( (v25 & 4) != 0 )
                      *((_QWORD *)Buffer + 1) = v9 | 4;
                    return inited;
                  }
                  if ( (v25 & 3) != 2 )
                    goto LABEL_47;
                  v9 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
                }
                *((_QWORD *)Buffer + 1) = v9;
                goto LABEL_47;
              }
              if ( BufferSize != 8 )
                return -1073741811;
              LOBYTE(v13) = BYTE4(v13);
            }
            else
            {
              if ( BufferSize != 8 )
                return -1073741811;
              v13 >>= 28;
            }
          }
          else
          {
            if ( BufferSize != 8 )
              return -1073741811;
            v13 >>= 24;
          }
          goto LABEL_66;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        v13 >>= 36;
LABEL_98:
        *(_QWORD *)Buffer = 0LL;
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
        *(_QWORD *)Buffer = v9;
        goto LABEL_104;
      }
      if ( BufferSize != 24 )
        return -1073741811;
      v29 = 0LL;
      v30 = 0LL;
      *(_OWORD *)Buffer = 0LL;
      *((_QWORD *)Buffer + 2) = 0LL;
      if ( (v13 & 0x300) != 0 )
      {
        if ( (BYTE1(v13) & 3) == 1 )
        {
LABEL_81:
          v30 = v29 | 1;
          *(_QWORD *)Buffer = v29 | 1;
          goto LABEL_82;
        }
        if ( (BYTE1(v13) & 3) != 2 )
        {
          if ( (BYTE1(v13) & 3) != 3 )
            goto LABEL_82;
          v29 = 8LL;
          goto LABEL_81;
        }
        *(_QWORD *)Buffer = 2LL;
        v30 = 2LL;
      }
LABEL_82:
      if ( (v13 & 0x400) != 0 )
        *(_QWORD *)Buffer = v30 | 4;
      v31 = 0LL;
      if ( (v13 & 0x30000) != 0 )
      {
        if ( (BYTE2(v13) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) = 1LL;
          v31 = 1LL;
        }
        else if ( (BYTE2(v13) & 3) == 2 )
        {
          v31 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
          *((_QWORD *)Buffer + 1) = v31;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 1) = 0LL;
      }
      if ( (v13 & 0x40000) != 0 )
        *((_QWORD *)Buffer + 1) = v31 | 4;
      v32 = v13 >> 20;
      if ( (v32 & 3) != 0 )
      {
        if ( (v32 & 3) != 1 )
        {
          if ( (v32 & 3) == 2 )
          {
            v33 = 2LL;
LABEL_242:
            *((_QWORD *)Buffer + 2) = v33;
            goto LABEL_245;
          }
          goto LABEL_245;
        }
        goto LABEL_243;
      }
      goto LABEL_244;
    }
    v35 = Policy - 10;
    if ( !v35 )
    {
      if ( BufferSize != 24 )
        return -1073741811;
      v66 = 0LL;
      *(_OWORD *)Buffer = 0LL;
      *((_QWORD *)Buffer + 2) = 0LL;
      if ( ((v13 >> 52) & 3) != 0 )
      {
        if ( ((v13 >> 52) & 3) == 1 )
        {
          *(_QWORD *)Buffer = 1LL;
          v66 = 1LL;
        }
        else if ( ((v13 >> 52) & 3) == 2 )
        {
          *(_QWORD *)Buffer = 2LL;
          v66 = 2LL;
        }
      }
      if ( ((v13 >> 52) & 4) != 0 )
        *(_QWORD *)Buffer = v66 | 4;
      v67 = 0LL;
      if ( (v13 & 0x300000000000000LL) != 0 )
      {
        if ( (HIBYTE(v13) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) = 1LL;
          v67 = 1LL;
        }
        else if ( (HIBYTE(v13) & 3) == 2 )
        {
          v67 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
          *((_QWORD *)Buffer + 1) = v67;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 1) = 0LL;
      }
      if ( (v13 & 0x400000000000000LL) != 0 )
        *((_QWORD *)Buffer + 1) = v67 | 4;
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
            *((_QWORD *)Buffer + 2) |= 4uLL;
          return inited;
        }
LABEL_243:
        v33 = 1LL;
        goto LABEL_242;
      }
LABEL_244:
      *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
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
          if ( BufferSize != 8 )
            return -1073741811;
          v13 >>= 4;
          goto LABEL_98;
        }
        v39 = v38 - 1;
        if ( !v39 )
        {
          if ( BufferSize != 8 )
            return -1073741811;
          v13 >>= 12;
LABEL_66:
          *(_QWORD *)Buffer = 0LL;
          if ( (v13 & 3) == 0 )
            goto LABEL_104;
          if ( (v13 & 3) == 1 )
          {
            *(_QWORD *)Buffer = 1LL;
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
          *(_QWORD *)Buffer = 2LL;
          v9 = 2LL;
          goto LABEL_104;
        }
        v40 = v39 - 1;
        if ( v40 )
        {
          v41 = v40 - 1;
          if ( v41 )
          {
            if ( v41 != 1 || BufferSize != 8 )
              return -1073741811;
            v42 = v14 >> 12;
          }
          else
          {
            if ( BufferSize != 8 )
              return -1073741811;
            v42 = v14 >> 20;
          }
          *(_QWORD *)Buffer = 0LL;
          if ( (v42 & 3) != 0 )
          {
            if ( (v42 & 3) == 1 )
            {
              *(_QWORD *)Buffer = 1LL;
              v9 = 1LL;
            }
            else if ( (v42 & 3) == 2 )
            {
              *(_QWORD *)Buffer = 2LL;
              v9 = 2LL;
            }
          }
          v34 = (v42 & 4) == 0;
          goto LABEL_105;
        }
        if ( BufferSize != 24 )
          return -1073741811;
        v43 = v15 >> 60;
        v44 = 0LL;
        v45 = 0LL;
        *(_OWORD *)Buffer = 0LL;
        *((_QWORD *)Buffer + 2) = 0LL;
        if ( (v43 & 3) != 0 )
        {
          if ( (v43 & 3) == 1 )
          {
LABEL_133:
            v45 = v44 | 1;
            *(_QWORD *)Buffer = v44 | 1;
            goto LABEL_134;
          }
          if ( (v43 & 3) != 2 )
          {
            if ( (v43 & 3) != 3 )
              goto LABEL_134;
            v44 = 8LL;
            goto LABEL_133;
          }
          *(_QWORD *)Buffer = 2LL;
          v45 = 2LL;
        }
LABEL_134:
        if ( (v43 & 4) != 0 )
          *(_QWORD *)Buffer = v45 | 4;
        v46 = 0LL;
        if ( (v14 & 3) != 0 )
        {
          if ( (v14 & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) = 1LL;
            v46 = 1LL;
          }
          else if ( (v14 & 3) == 2 )
          {
            v46 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
            *((_QWORD *)Buffer + 1) = v46;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) = 0LL;
        }
        if ( (v14 & 4) != 0 )
          *((_QWORD *)Buffer + 1) = v46 | 4;
        v47 = v14 >> 4;
        if ( (v47 & 3) == 0 )
        {
          *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
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
          *((_QWORD *)Buffer + 2) |= 8uLL;
        }
        v48 = *((_QWORD *)Buffer + 2) & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_152:
        *((_QWORD *)Buffer + 2) = v48;
        goto LABEL_154;
      }
      if ( BufferSize != 8 )
        return -1073741811;
      v50 = v15 >> 36;
      *(_QWORD *)Buffer = 0LL;
      if ( (v50 & 3) != 0 )
      {
        switch ( v50 & 3 )
        {
          case 1uLL:
LABEL_165:
            v9 |= 1uLL;
            *(_QWORD *)Buffer = v9;
            break;
          case 2uLL:
            *(_QWORD *)Buffer = 2LL;
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
        *(_QWORD *)Buffer = v9 | 4;
      return inited;
    }
    if ( BufferSize != 1072 )
      return -1073741811;
    memset_thunk_772440563353939046(Buffer, 0, 0x430uLL);
    v51 = 0LL;
    if ( (v15 & 0x30000) != 0 )
    {
      if ( (BYTE2(v15) & 3) == 1 )
      {
        *((_QWORD *)Buffer + 3) = 1LL;
        v51 = 1LL;
      }
      else if ( (BYTE2(v15) & 3) == 2 )
      {
        *((_QWORD *)Buffer + 3) = 2LL;
        v51 = 2LL;
      }
    }
    if ( (v15 & 0x40000) != 0 )
      *((_QWORD *)Buffer + 3) = v51 | 4;
    v52 = 0LL;
    if ( ((v15 >> 20) & 3) != 0 )
    {
      if ( ((v15 >> 20) & 3) == 1 )
      {
        *((_QWORD *)Buffer + 4) = 1LL;
        v52 = 1LL;
      }
      else if ( ((v15 >> 20) & 3) == 2 )
      {
        v52 = *((_QWORD *)Buffer + 4) & 0xFFFFFFFFFFFFFFFCuLL | 2;
        *((_QWORD *)Buffer + 4) = v52;
      }
    }
    else
    {
      *((_QWORD *)Buffer + 4) = 0LL;
    }
    if ( ((v15 >> 20) & 4) != 0 )
      *((_QWORD *)Buffer + 4) = v52 | 4;
    if ( (v15 & 0x3000000) != 0 )
    {
      if ( (BYTE3(v15) & 3) == 1 )
      {
        v53 = *((_QWORD *)Buffer + 5) & 0xFFFFFFFFFFFFFFFCuLL | 1;
      }
      else
      {
        if ( (BYTE3(v15) & 3) != 2 )
          goto LABEL_191;
        v53 = *((_QWORD *)Buffer + 5) & 0xFFFFFFFFFFFFFFFCuLL | 2;
      }
      *((_QWORD *)Buffer + 5) = v53;
    }
    else
    {
      *((_QWORD *)Buffer + 5) &= 0xFFFFFFFFFFFFFFFCuLL;
    }
LABEL_191:
    if ( (v15 & 0x4000000) != 0 )
      *((_QWORD *)Buffer + 5) |= 4uLL;
    if ( ((v15 >> 28) & 3) != 0 )
    {
      if ( ((v15 >> 28) & 3) == 1 )
      {
        *(_QWORD *)Buffer &= ~2uLL;
        *(_QWORD *)Buffer |= 1uLL;
      }
      else if ( ((v15 >> 28) & 3) == 2 )
      {
        *(_QWORD *)Buffer &= ~1uLL;
        *(_QWORD *)Buffer |= 2uLL;
      }
    }
    else
    {
      *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
    }
    if ( ((v15 >> 28) & 4) != 0 )
      *(_QWORD *)Buffer |= 4uLL;
    if ( (v15 & 0x300000000LL) != 0 )
    {
      if ( (BYTE4(v15) & 3) == 1 )
      {
        v54 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 1;
      }
      else
      {
        if ( (BYTE4(v15) & 3) != 2 )
          goto LABEL_208;
        v54 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
      }
      *((_QWORD *)Buffer + 1) = v54;
    }
    else
    {
      *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
    }
LABEL_208:
    if ( (v15 & 0x400000000LL) != 0 )
      *((_QWORD *)Buffer + 1) |= 4uLL;
    v55 = v15 >> 40;
    switch ( v55 & 3 )
    {
      case 0uLL:
        *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_217;
      case 1uLL:
        v56 = *((_QWORD *)Buffer + 2) & 0xFFFFFFFFFFFFFFFCuLL | 1;
        break;
      case 2uLL:
        v56 = *((_QWORD *)Buffer + 2) & 0xFFFFFFFFFFFFFFFCuLL | 2;
        break;
      default:
LABEL_217:
        if ( (v55 & 4) != 0 )
          *((_QWORD *)Buffer + 2) |= 4uLL;
        v57 = (char *)Buffer + 48;
        v58 = v79;
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
        return inited;
    }
    *((_QWORD *)Buffer + 2) = v56;
    goto LABEL_217;
  }
  KeyHandle = 0LL;
  v11 = L"MitigationOptions";
  if ( v8 )
    v11 = L"MitigationAuditOptions";
  RtlInitUnicodeStringEx(&ValueName, v11);
  if ( DestinationString.Length )
  {
    v12 = RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9u, 0, &KeyHandle);
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)dword_180131DB0;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v12 = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
  }
  inited = v12;
  if ( v12 >= 0 )
  {
    inited = NtQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x28u,
               ResultLength);
    if ( inited >= 0 && Policy == ImagePayloadRestrictionPolicy )
      inited = RtlpQueryEafPlusModuleList(KeyHandle, v79);
    NtClose(KeyHandle);
    if ( inited >= 0 )
    {
      if ( Size > 0x18 )
        return -1073741788;
      memmove(&v74, &Size_4, Size);
      v13 = v74;
      v14 = v75;
      v15 = *((_QWORD *)&v74 + 1);
      goto LABEL_22;
    }
  }
  return inited;
}
