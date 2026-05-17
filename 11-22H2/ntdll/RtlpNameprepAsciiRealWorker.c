/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x18000D858
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x18000D74C (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlpValidateAsciiStd3AndLength @ 0x18000DAB8 (RtlpValidateAsciiStd3AndLength.c)
 *     RtlStringCchLengthW @ 0x180015F28 (RtlStringCchLengthW.c)
 *     RtlNormalizeString @ 0x180089490 (RtlNormalizeString.c)
 *     punycode_encode @ 0x180089B10 (punycode_encode.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     FindEmailAt @ 0x18010BC1C (FindEmailAt.c)
 */

__int64 __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        _WORD *a2,
        __int64 a3,
        void *a4,
        int *a5,
        char a6,
        void *Src,
        char a8,
        _WORD *a9,
        char a10)
{
  __int16 v10; // r11
  void *v11; // r15
  int v12; // ebx
  _WORD *v13; // r14
  int *v14; // rsi
  int v15; // ebp
  char v16; // di
  char v17; // dl
  char v18; // r12
  char v19; // al
  __int64 v20; // r8
  int v21; // r10d
  __int64 result; // rax
  wchar_t *v23; // r13
  int v24; // ecx
  int v25; // r9d
  int v26; // eax
  int v27; // edi
  bool v28; // zf
  wchar_t v29; // ax
  __int16 v30; // cx
  int EmailAt; // eax
  int v32; // r11d
  bool v33; // zf
  bool v34; // cc
  __int64 v35; // rax
  int v36; // [rsp+30h] [rbp-38h] BYREF
  int v37; // [rsp+38h] [rbp-30h]
  int v38; // [rsp+78h] [rbp+10h] BYREF

  v10 = 0;
  v11 = a4;
  v12 = a3;
  v13 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( (int)a3 < -1 )
    return 3221225485LL;
  v14 = a5;
  if ( !a5 )
    return 3221225485LL;
  v15 = *a5;
  if ( *a5 < 0 || v15 > 0 && !a4 )
    return 3221225485LL;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return 3221225485LL;
  a8 = 0;
  v16 = 0;
  v37 = a1 & 1;
  v38 = a1 & 4;
  v17 = v38 != 0;
  v18 = (a1 & 2) != 0;
  a10 = v38 != 0;
  if ( (_DWORD)a3 == -1 )
  {
    if ( (int)RtlStringCchLengthW(v13, 0x7FFFFFFFLL, &v36) >= 0 )
    {
      v17 = a10;
      v12 = v36 + 1;
      goto LABEL_9;
    }
    return 3221225485LL;
  }
LABEL_9:
  if ( v12 > 0 && v13[v12 - 1] == v10 )
  {
    v16 = 1;
    --v12;
    a8 = 1;
  }
  LOBYTE(a3) = v17;
  LOBYTE(a4) = v18;
  v19 = RtlpValidateAsciiStd3AndLength(v13, (unsigned int)v12, a3, a4);
  v21 = 0;
  if ( !v19 )
  {
    v23 = (wchar_t *)Src;
    v24 = 511;
    v25 = (int)Src;
    v26 = 0;
    v27 = 0;
    if ( !v38 )
    {
LABEL_26:
      if ( v26 >= v12 )
      {
LABEL_30:
        if ( v27 > 0 )
        {
          v29 = v23[v27 - 1];
          if ( v29 == 46 )
          {
            v30 = v13[v12 - 1];
            if ( v30 != 46 && v30 != 12290 && v30 != -242 && v30 != -159 )
              goto LABEL_47;
          }
          else if ( !v29 )
          {
            goto LABEL_47;
          }
        }
        v13 = a9;
        v38 = 515;
        result = punycode_encode(v23, a10, v18);
        v12 = v38;
        v21 = 0;
        if ( !v38 )
        {
LABEL_34:
          *v14 = v21;
          return result;
        }
        if ( a6 )
        {
          if ( !a8 )
          {
LABEL_15:
            if ( !v11 || !v15 )
              goto LABEL_19;
            if ( v12 <= v15 )
            {
              memmove(v11, v13, 2LL * v12);
LABEL_19:
              *v14 = v12;
              return 0LL;
            }
            goto LABEL_70;
          }
          if ( v38 < 515 )
          {
            v13[v38] = 0;
LABEL_23:
            ++v12;
            goto LABEL_15;
          }
          goto LABEL_47;
        }
        if ( !a8 )
        {
LABEL_65:
          if ( v11 && v15 )
          {
            if ( v27 > v15 )
            {
LABEL_70:
              result = 3221225507LL;
              goto LABEL_34;
            }
            memmove(v11, v23, 2LL * v27);
          }
          *v14 = v27;
          return 0LL;
        }
        if ( v27 <= 511 )
        {
          v35 = v27++;
          v23[v35] = 0;
          goto LABEL_65;
        }
LABEL_47:
        result = 3221227286LL;
        goto LABEL_34;
      }
      v38 = v24;
      result = RtlNormalizeString(((v37 ^ 1u) << 8) + 13, (int)v13 + 2 * v26, v12 - v26, v25, (__int64)&v38);
      v21 = 0;
      v28 = (_DWORD)result == 0;
      if ( (int)result >= 0 )
      {
        if ( v38 )
        {
          v27 += v38;
          goto LABEL_30;
        }
        v28 = (_DWORD)result == 0;
      }
      if ( v28 || (_DWORD)result == -1073741789 || (_DWORD)result == -1073740009 )
        goto LABEL_47;
      v34 = v38 <= 0;
LABEL_46:
      if ( v34 )
        goto LABEL_34;
      goto LABEL_47;
    }
    EmailAt = FindEmailAt(v13, (unsigned int)v12, v20, Src);
    v36 = EmailAt;
    if ( !EmailAt )
      goto LABEL_47;
    v38 = v32;
    result = RtlNormalizeString(1, (_DWORD)v13, EmailAt, (_DWORD)v23, (__int64)&v38);
    v27 = v38;
    v21 = 0;
    v33 = (_DWORD)result == 0;
    if ( (int)result >= 0 )
    {
      if ( v38 )
      {
        v26 = v36;
        v25 = (_DWORD)v23 + 2 * v38;
        v24 = 511 - v38;
        goto LABEL_26;
      }
      v33 = (_DWORD)result == 0;
    }
    if ( v33 || (_DWORD)result == -1073741789 || (_DWORD)result == -1073740009 )
      goto LABEL_47;
    v34 = v38 <= 0;
    goto LABEL_46;
  }
  if ( v12 )
  {
    if ( !v16 )
      goto LABEL_15;
    goto LABEL_23;
  }
  return 3221227286LL;
}
