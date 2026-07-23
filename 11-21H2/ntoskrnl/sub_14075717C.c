/*
 * XREFs of sub_14075717C @ 0x14075717C
 * Callers:
 *     sub_1402D6FB0 @ 0x1402D6FB0 (sub_1402D6FB0.c)
 *     sub_1402D75FC @ 0x1402D75FC (sub_1402D75FC.c)
 *     RtlFindMessage @ 0x140758920 (RtlFindMessage.c)
 *     LdrFindResource_U @ 0x140855100 (LdrFindResource_U.c)
 *     LdrFindResourceDirectory_U @ 0x1409B67B0 (LdrFindResourceDirectory_U.c)
 *     LdrFindResourceEx_U @ 0x1409B67D0 (LdrFindResourceEx_U.c)
 *     RtlLoadString @ 0x1409B7260 (RtlLoadString.c)
 * Callees:
 *     sub_14024A520 @ 0x14024A520 (sub_14024A520.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_1402D6FB0 @ 0x1402D6FB0 (sub_1402D6FB0.c)
 *     sub_1402D7740 @ 0x1402D7740 (sub_1402D7740.c)
 *     sub_140389D88 @ 0x140389D88 (sub_140389D88.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 */

__int64 __fastcall sub_14075717C(char *a1, __int64 *a2, unsigned int a3, int a4, char **a5)
{
  int v5; // r14d
  int v6; // r15d
  __int64 *v7; // r13
  int v8; // eax
  unsigned __int16 v9; // r12
  char *v10; // rax
  unsigned __int16 *v11; // rbx
  char *v12; // rsi
  int v13; // r9d
  __int64 v14; // rcx
  char v15; // di
  char v16; // dl
  unsigned int v17; // ecx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rdi
  unsigned int *v23; // rsi
  __int64 v24; // rcx
  unsigned int *v25; // rax
  unsigned __int16 v26; // r15
  const wchar_t *v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  char v31; // di
  unsigned int *v32; // r14
  const wchar_t *v33; // r8
  int v34; // eax
  bool v35; // cl
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 result; // rax
  __int16 v41; // cx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int16 v45; // ax
  __int16 v46[2]; // [rsp+30h] [rbp-118h] BYREF
  char v47; // [rsp+34h] [rbp-114h]
  bool v48; // [rsp+35h] [rbp-113h]
  char v49; // [rsp+36h] [rbp-112h]
  int v50; // [rsp+38h] [rbp-110h]
  char v51; // [rsp+3Ch] [rbp-10Ch]
  int v52; // [rsp+40h] [rbp-108h]
  char v53; // [rsp+44h] [rbp-104h] BYREF
  char v54[3]; // [rsp+45h] [rbp-103h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-100h]
  ULONG Size; // [rsp+4Ch] [rbp-FCh] BYREF
  int v57; // [rsp+50h] [rbp-F8h]
  int v58; // [rsp+54h] [rbp-F4h]
  char **v59; // [rsp+58h] [rbp-F0h]
  __int64 v60; // [rsp+60h] [rbp-E8h] BYREF
  void *v61; // [rsp+68h] [rbp-E0h]
  char *v62; // [rsp+70h] [rbp-D8h]
  bool v63; // [rsp+78h] [rbp-D0h]
  char v64; // [rsp+79h] [rbp-CFh]
  __int16 v65; // [rsp+7Ch] [rbp-CCh]
  int v66; // [rsp+80h] [rbp-C8h]
  __int64 v67; // [rsp+88h] [rbp-C0h]
  __int64 v68; // [rsp+90h] [rbp-B8h]
  char *v69; // [rsp+98h] [rbp-B0h]
  char *v70; // [rsp+A0h] [rbp-A8h]
  unsigned int v71; // [rsp+A8h] [rbp-A0h]
  unsigned int *v72; // [rsp+B0h] [rbp-98h]
  unsigned int *v73; // [rsp+B8h] [rbp-90h]
  unsigned int *v74; // [rsp+C0h] [rbp-88h]
  int v75; // [rsp+C8h] [rbp-80h]
  __int64 v76; // [rsp+D0h] [rbp-78h]
  __int64 *v77; // [rsp+D8h] [rbp-70h]
  __int64 *v78; // [rsp+E0h] [rbp-68h]
  _QWORD v79[2]; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-50h]
  __int64 v81; // [rsp+100h] [rbp-48h]

  v5 = a4;
  v58 = a4;
  v6 = a3;
  v71 = a3;
  v7 = a2;
  v61 = a1;
  v59 = a5;
  v60 = 0LL;
  v77 = a2;
  v48 = 0;
  v51 = 1;
  v49 = 1;
  if ( a3 < 3 && (a4 & 2) == 0 || a3 > 4 || (a4 & 0x41) != 0 && a3 != 4 || a3 == 4 && (a4 & 0x41) == 0 )
    return 3221225713LL;
  v8 = 3;
  if ( a3 != 4 )
    v8 = a3;
  v55 = v8;
  v57 = v8;
  LOWORD(v52) = 0;
  v9 = 0;
  v46[0] = 0;
  if ( (unsigned __int64)a2 - 1 > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL
    || (unsigned __int64)a5 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return 3221225485LL;
  }
  v10 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 2u, &Size);
  v69 = v10;
  if ( !v10 )
    return 3221225609LL;
  v11 = (unsigned __int16 *)v10;
  v67 = (__int64)v10;
  v60 = 61166LL;
  v66 = 0;
  v12 = 0LL;
  v62 = 0LL;
  v70 = 0LL;
  v68 = 0LL;
  v76 = 0LL;
  if ( (~(_BYTE)v5 & 0x10) == 0 || byte_140C4629A != 1 || v55 - 1 > 2 )
    goto LABEL_21;
  if ( v55 == 3 )
    v13 = *((unsigned __int16 *)v7 + 8);
  else
    v13 = 0;
  v52 = v13;
  v65 = v13;
  v14 = *v7;
  if ( ((*v7 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 )
  {
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) == 0 || wcsicmp((const wchar_t *)v14, L"MUI") )
      goto LABEL_20;
    LOWORD(v13) = v52;
  }
  if ( (~(_BYTE)v5 & 8) == 0 || (v13 & 0xF3FF) != 0 || (_WORD)v13 == 3072 )
  {
LABEL_20:
    v5 |= sub_1402D7740(v61, v7);
    v58 = v5;
LABEL_21:
    LOWORD(v13) = v52;
    goto LABEL_22;
  }
  v5 |= 0x10u;
  v58 = v5;
LABEL_22:
  if ( byte_140C4629A == 1 && (~v5 & 0x20000) != 0 && (~v5 & 0x80000) != 0 && (~(_BYTE)v5 & 0x10) != 0 )
  {
    v15 = 1;
    v47 = 1;
  }
  else
  {
    v15 = 0;
    v47 = 0;
  }
  if ( !byte_140C4629A || (v5 & 0x2000000) != 0 || (v5 & 0x40000) != 0 )
  {
    v16 = 0;
    v49 = 0;
  }
  else
  {
    v16 = v49;
  }
  if ( !v15 && !v16 )
    goto LABEL_52;
  v79[0] = *v7;
  v17 = v55;
  if ( v55 < 2 )
    v18 = 0LL;
  else
    v18 = v7[1];
  v79[1] = v18;
  if ( v6 == 4 )
    v81 = v7[3];
LABEL_34:
  v19 = v57;
  if ( !v11 || (v20 = v57, v19 = v57 - 1, v57 = v19, v75 = v19, !v20) )
  {
    v21 = v68;
    goto LABEL_83;
  }
  if ( v19 )
    goto LABEL_37;
  if ( v16 )
  {
    result = sub_1402D6FB0((int)v61, (__int64)v79, v6, v5 | 0x1000000u, v59);
    v50 = result;
    if ( (int)result >= 0 )
      return result;
    v19 = v57;
  }
  if ( v19 )
  {
LABEL_37:
    v21 = v68;
  }
  else
  {
    v21 = v68;
    if ( v55 == 3 )
      v21 = (__int64)v11;
    v68 = v21;
    v76 = v21;
  }
  if ( !v21 )
    goto LABEL_39;
  v13 = *((unsigned __int16 *)v77 + 8);
  v52 = v13;
  v65 = v13;
  v35 = (v13 & 0x3FF) == 0;
  v48 = v35;
  v63 = v35;
  while ( 2 )
  {
    v36 = v66;
    while ( 1 )
    {
      v37 = v36++;
      v66 = v36;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            v42 = v39 - 1;
            if ( !v42 )
            {
              if ( word_140D3CA00 != word_140D3CA04 )
              {
                if ( v15 )
                {
                  v80 = (unsigned __int16)word_140D3CA00;
                  result = sub_1402D6FB0((int)v61, (__int64)v79, v6, v5, v59);
                  v50 = result;
                  if ( (int)result >= 0 )
                    return result;
                }
                v45 = word_140D3CA00;
                goto LABEL_163;
              }
LABEL_160:
              v9 = v60;
              v46[0] = v60;
              goto LABEL_79;
            }
            v43 = v42 - 1;
            if ( v43 )
            {
              v44 = v43 - 1;
              if ( v44 )
              {
                if ( v44 != 1 )
                  goto LABEL_168;
                v5 |= 0x20u;
                v58 = v5;
              }
              else
              {
                v9 = 1033;
                v46[0] = 1033;
                if ( dword_140D3CA30 == 1033 || word_140D3CA00 == 1033 || word_140D3CA04 == 1033 )
                  goto LABEL_160;
                if ( v15 )
                {
                  v80 = 1033LL;
                  result = sub_1402D6FB0((int)v61, (__int64)v79, v6, v5, v59);
                  v50 = result;
                  if ( (int)result >= 0 )
                    return result;
                }
              }
            }
            else
            {
              v9 = dword_140D3CA30;
              v46[0] = dword_140D3CA30;
              if ( (_WORD)dword_140D3CA30 == word_140D3CA00 || (_WORD)dword_140D3CA30 == word_140D3CA04 )
                goto LABEL_160;
              if ( v15 )
              {
                v80 = (unsigned __int16)dword_140D3CA30;
                result = sub_1402D6FB0((int)v61, (__int64)v79, v6, v5, v59);
                v50 = result;
                if ( (int)result >= 0 )
                  return result;
              }
            }
          }
          else
          {
            if ( !v35 )
              goto LABEL_168;
            if ( v15 && word_140D3CA04 )
            {
              v80 = (unsigned __int16)word_140D3CA04;
              result = sub_1402D6FB0((int)v61, (__int64)v79, v6, v5, v59);
              v50 = result;
              if ( (int)result >= 0 )
                return result;
              v45 = word_140D3CA04;
LABEL_163:
              v9 = v45;
              v46[0] = v45;
              goto LABEL_79;
            }
            v41 = v60;
            if ( word_140D3CA04 )
              v41 = word_140D3CA04;
            v9 = v41;
            v46[0] = v41;
          }
        }
        else
        {
          if ( v9 )
          {
            if ( (int)sub_140389D88(v9, v46) >= 0 )
            {
              v9 = v46[0];
            }
            else
            {
              v9 = 0;
              v46[0] = 0;
            }
          }
          if ( v15 )
          {
            if ( !v9 )
              goto LABEL_79;
            v80 = v9;
            result = sub_1402D6FB0((int)v61, (__int64)v79, v6, v5, v59);
            v50 = result;
            if ( (int)result >= 0 )
              return result;
          }
          if ( v9 )
            v66 = --v36;
        }
      }
      else
      {
        if ( v15 && (_WORD)v13 )
        {
          v80 = (unsigned __int16)v13;
          result = sub_1402D6FB0((int)v61, (__int64)v79, v6, v5, v59);
          v50 = result;
          if ( (int)result >= 0 )
            return result;
          LOWORD(v13) = v52;
        }
        v9 = v13;
        v46[0] = v13;
      }
LABEL_79:
      if ( (~(_BYTE)v5 & 0x20) == 0 || v9 != v60 )
        break;
      LOWORD(v13) = v52;
      v35 = v48;
    }
    v60 = v9;
    v7 = &v60;
    v78 = &v60;
    v21 = v68;
    v11 = (unsigned __int16 *)v68;
    v67 = v68;
    v19 = v57;
LABEL_39:
    v22 = v11[6];
    LOWORD(Size) = v22;
    v23 = (unsigned int *)(v11 + 8);
    v73 = (unsigned int *)(v11 + 8);
    v24 = (unsigned __int16)v22;
    if ( (*v7 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v23 += 2 * v22;
      v73 = v23;
      LOWORD(v22) = v11[7];
      LOWORD(Size) = v22;
      v24 = (unsigned __int16)v22;
    }
    if ( !(_WORD)v24 )
    {
      v67 = 0LL;
      v51 = 0;
      v64 = 0;
      v15 = v47;
      LOWORD(v13) = v52;
      v17 = v55;
      goto LABEL_85;
    }
    if ( !v21 || (v5 & 0x20) == 0 )
    {
      v11 = 0LL;
      v67 = 0LL;
      v25 = &v23[2 * (unsigned __int16)v24 - 2];
      v74 = v25;
      while ( 1 )
      {
        if ( v23 > v25 )
          goto LABEL_50;
        v26 = (unsigned __int16)v24 >> 1;
        if ( !((unsigned __int16)v24 >> 1) )
        {
          if ( !(_WORD)v24 )
            goto LABEL_50;
          v27 = (const wchar_t *)*v7;
          v54[0] = 0;
          v28 = (__int64)v69;
          if ( (unsigned int)sub_14024A520(v24, v21, v27, (__int64)v69, v23, v54) )
            goto LABEL_50;
          v29 = v23[1];
          if ( (int)v29 < 0 )
            goto LABEL_49;
          v12 = (char *)(v29 + v28);
          goto LABEL_113;
        }
        v72 = v23;
        v30 = 2LL * v26;
        v31 = v22 & 1;
        if ( v31 )
          v32 = &v23[v30];
        else
          v32 = &v23[v30 - 2];
        v72 = v32;
        v33 = (const wchar_t *)*v7;
        v53 = 0;
        v34 = sub_14024A520(v24, v21, v33, (__int64)v69, v32, &v53);
        if ( !v34 )
        {
          v29 = v32[1];
          if ( (int)v29 < 0 )
          {
            v28 = (__int64)v69;
LABEL_49:
            v11 = (unsigned __int16 *)(v28 + (v29 & 0xFFFFFFFF7FFFFFFFuLL));
            v67 = (__int64)v11;
LABEL_50:
            v12 = v62;
            goto LABEL_51;
          }
          v11 = 0LL;
          v67 = 0LL;
          v12 = &v69[v29];
LABEL_113:
          v62 = v12;
          v70 = v12;
LABEL_51:
          v78 = ++v7;
          v5 = v58;
          v6 = v71;
          v15 = v47;
          LOWORD(v13) = v52;
          v16 = v49;
LABEL_52:
          v17 = v55;
          goto LABEL_34;
        }
        if ( v34 >= 0 )
          break;
        v25 = v32 - 2;
        v74 = v32 - 2;
        if ( v31 )
        {
          LOWORD(Size) = v26;
LABEL_120:
          v24 = v26;
          LOBYTE(v22) = v26;
        }
        else
        {
          LOBYTE(v22) = v26 - 1;
          LOWORD(Size) = v26 - 1;
          v24 = (unsigned __int16)(v26 - 1);
        }
      }
      v23 = v32 + 2;
      v73 = v32 + 2;
      LOWORD(Size) = v26;
      v25 = v74;
      goto LABEL_120;
    }
    v11 = 0LL;
    v67 = 0LL;
    v60 = *v23;
    v12 = &v69[v23[1]];
    v70 = v12;
    v15 = v47;
    LOWORD(v13) = v52;
    v17 = v55;
LABEL_83:
    if ( v12 && (v5 & 2) == 0 )
    {
      *v59 = v12;
      goto LABEL_94;
    }
    if ( !v11 || (v5 & 2) == 0 )
    {
LABEL_85:
      switch ( v17 - v19 )
      {
        case 1u:
          result = 3221225610LL;
          goto LABEL_95;
        case 2u:
          result = 3221225611LL;
          break;
        case 3u:
          result = 3221225988LL;
          v50 = -1073741308;
          if ( !v21 )
            return result;
          v62 = 0LL;
          v70 = 0LL;
          if ( v51 )
          {
            v35 = v48;
            continue;
          }
LABEL_168:
          result = 3221225988LL;
          break;
        default:
          result = 3221225485LL;
          goto LABEL_95;
      }
      v50 = result;
      return result;
    }
    break;
  }
  *v59 = (char *)v11;
LABEL_94:
  result = 0LL;
LABEL_95:
  v50 = result;
  return result;
}
