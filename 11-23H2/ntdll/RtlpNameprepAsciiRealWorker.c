/*
 * XREFs of RtlpNameprepAsciiRealWorker @ 0x18000D648
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x18000D53C (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     RtlpValidateAsciiStd3AndLength @ 0x18000D8A8 (RtlpValidateAsciiStd3AndLength.c)
 *     RtlStringCchLengthW @ 0x180015D18 (RtlStringCchLengthW.c)
 *     RtlNormalizeString @ 0x180089C90 (RtlNormalizeString.c)
 *     punycode_encode @ 0x18008A310 (punycode_encode.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     FindEmailAt @ 0x18010D08C (FindEmailAt.c)
 */

NTSTATUS __fastcall RtlpNameprepAsciiRealWorker(
        int a1,
        _WORD *a2,
        __int64 a3,
        void *a4,
        LONG *a5,
        char a6,
        PWSTR DestinationString,
        char a8,
        _WORD *a9,
        char a10)
{
  __int16 v10; // r11
  void *v11; // r15
  LONG v12; // ebx
  _WORD *v13; // r14
  LONG *v14; // rsi
  int v15; // ebp
  char v16; // di
  char v17; // dl
  char v18; // r12
  char v19; // al
  __int64 v20; // r8
  LONG v21; // r10d
  NTSTATUS result; // eax
  wchar_t *v23; // r13
  LONG v24; // ecx
  WCHAR *v25; // r9
  LONG v26; // eax
  LONG v27; // edi
  bool v28; // zf
  wchar_t v29; // ax
  __int16 v30; // cx
  LONG EmailAt; // eax
  LONG v32; // r11d
  bool v33; // zf
  bool v34; // cc
  __int64 v35; // rax
  LONG v36; // [rsp+30h] [rbp-38h] BYREF
  int v37; // [rsp+38h] [rbp-30h]
  LONG DestinationStringLength; // [rsp+78h] [rbp+10h] BYREF

  v10 = 0;
  v11 = a4;
  v12 = a3;
  v13 = a2;
  if ( !a2 )
    return -1073741811;
  if ( (int)a3 < -1 )
    return -1073741811;
  v14 = a5;
  if ( !a5 )
    return -1073741811;
  v15 = *a5;
  if ( *a5 < 0 || v15 > 0 && !a4 )
    return -1073741811;
  if ( (a1 & 0xFFFFFFF8) != 0 )
    return -1073741811;
  a8 = 0;
  v16 = 0;
  v37 = a1 & 1;
  DestinationStringLength = a1 & 4;
  v17 = DestinationStringLength != 0;
  v18 = (a1 & 2) != 0;
  a10 = DestinationStringLength != 0;
  if ( (_DWORD)a3 == -1 )
  {
    if ( (int)RtlStringCchLengthW(v13, 0x7FFFFFFFLL, &v36) >= 0 )
    {
      v17 = a10;
      v12 = v36 + 1;
      goto LABEL_9;
    }
    return -1073741811;
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
    v23 = DestinationString;
    v24 = 511;
    v25 = DestinationString;
    v26 = 0;
    v27 = 0;
    if ( !DestinationStringLength )
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
        DestinationStringLength = 515;
        result = punycode_encode(v23, a10, v18);
        v12 = DestinationStringLength;
        v21 = 0;
        if ( !DestinationStringLength )
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
              return 0;
            }
            goto LABEL_70;
          }
          if ( DestinationStringLength < 515 )
          {
            v13[DestinationStringLength] = 0;
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
              result = -1073741789;
              goto LABEL_34;
            }
            memmove(v11, v23, 2LL * v27);
          }
          *v14 = v27;
          return 0;
        }
        if ( v27 <= 511 )
        {
          v35 = v27++;
          v23[v35] = 0;
          goto LABEL_65;
        }
LABEL_47:
        result = -1073740010;
        goto LABEL_34;
      }
      DestinationStringLength = v24;
      result = RtlNormalizeString(((v37 ^ 1) << 8) + 13, &v13[v26], v12 - v26, v25, &DestinationStringLength);
      v21 = 0;
      v28 = result == 0;
      if ( result >= 0 )
      {
        if ( DestinationStringLength )
        {
          v27 += DestinationStringLength;
          goto LABEL_30;
        }
        v28 = result == 0;
      }
      if ( v28 || result == -1073741789 || result == -1073740009 )
        goto LABEL_47;
      v34 = DestinationStringLength <= 0;
LABEL_46:
      if ( v34 )
        goto LABEL_34;
      goto LABEL_47;
    }
    EmailAt = FindEmailAt(v13, (unsigned int)v12, v20, DestinationString);
    v36 = EmailAt;
    if ( !EmailAt )
      goto LABEL_47;
    DestinationStringLength = v32;
    result = RtlNormalizeString(1u, v13, EmailAt, v23, &DestinationStringLength);
    v27 = DestinationStringLength;
    v21 = 0;
    v33 = result == 0;
    if ( result >= 0 )
    {
      if ( DestinationStringLength )
      {
        v26 = v36;
        v25 = &v23[DestinationStringLength];
        v24 = 511 - DestinationStringLength;
        goto LABEL_26;
      }
      v33 = result == 0;
    }
    if ( v33 || result == -1073741789 || result == -1073740009 )
      goto LABEL_47;
    v34 = DestinationStringLength <= 0;
    goto LABEL_46;
  }
  if ( v12 )
  {
    if ( !v16 )
      goto LABEL_15;
    goto LABEL_23;
  }
  return -1073740010;
}
