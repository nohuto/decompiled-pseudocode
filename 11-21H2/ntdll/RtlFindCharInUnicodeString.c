/*
 * XREFs of RtlFindCharInUnicodeString @ 0x180047A60
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800452F0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800458B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180073684 (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x18000E3E4 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  NTSTATUS v4; // r10d
  PUSHORT v5; // r12
  char v6; // di
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 v8; // ax
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // r15
  unsigned __int16 *v11; // rbx
  unsigned __int16 v12; // r9
  unsigned __int16 v13; // r11
  int v14; // r8d
  _BOOL8 v15; // rbp
  wchar_t v16; // ax
  int v17; // edi
  USHORT v18; // r9
  int v20; // edi
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // cx
  __int64 v23; // r12
  __int64 v24; // rbp
  signed __int64 v25; // r15
  unsigned __int16 *v26; // rsi
  int v27; // edi
  unsigned __int16 v28; // r8
  unsigned __int16 v29; // r11
  unsigned __int16 v30; // dx
  unsigned __int16 v31; // cx
  __int64 v32; // r12
  int v33; // edi
  unsigned __int16 v34; // r13
  unsigned __int16 v35; // r10
  unsigned __int16 v36; // bp
  unsigned __int16 v37; // r11
  unsigned __int16 v38; // r11
  unsigned __int16 v39; // [rsp+20h] [rbp-A8h]
  int v40; // [rsp+24h] [rbp-A4h]
  _BOOL8 v42; // [rsp+30h] [rbp-98h]
  _WORD v43[32]; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v5 = NonInclusivePrefixLength;
  v6 = Flags;
  if ( NonInclusivePrefixLength )
    *NonInclusivePrefixLength = 0;
  if ( (Flags & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( !NonInclusivePrefixLength )
    return -1073741811;
  if ( StringToSearch )
  {
    if ( (StringToSearch->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = StringToSearch->MaximumLength;
    if ( (MaximumLength & 1) != 0
      || StringToSearch->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringToSearch->Buffer && (StringToSearch->Length || MaximumLength) )
    {
      return -1073741811;
    }
  }
  if ( CharSet )
  {
    if ( (CharSet->Length & 1) != 0 )
      return -1073741811;
    v8 = CharSet->MaximumLength;
    if ( (v8 & 1) != 0 || CharSet->Length > v8 || v8 == 0xFFFF || !CharSet->Buffer && (CharSet->Length || v8) )
      return -1073741811;
  }
  Length = StringToSearch->Length;
  Buffer = CharSet->Buffer;
  v11 = StringToSearch->Buffer;
  v12 = StringToSearch->Length >> 1;
  v13 = CharSet->Length >> 1;
  v14 = v6 & 1;
  v39 = StringToSearch->Length;
  v40 = v14;
  if ( (v6 & 1) != 0 )
    v11 = &v11[v12 - 1];
  v15 = !(v6 & 1);
  v42 = v15;
  if ( (v6 & 4) != 0 )
  {
    if ( v13 > 0x20u )
    {
      if ( v12 )
      {
        v32 = qword_180177700;
        v33 = v6 & 2;
        while ( 1 )
        {
          v34 = NLS_DOWNCASE(v32, *v11);
          v36 = v35;
          if ( v33 )
          {
            do
            {
              if ( v34 == NLS_DOWNCASE(v32, Buffer[v36]) )
                goto LABEL_77;
              ++v36;
            }
            while ( v36 < v37 );
            if ( v36 == v37 )
              goto LABEL_60;
          }
          else
          {
            do
            {
              if ( v34 == NLS_DOWNCASE(v32, Buffer[v36]) )
                goto LABEL_60;
              ++v36;
            }
            while ( v36 < v38 );
            if ( v36 != v38 )
              goto LABEL_60;
          }
LABEL_77:
          v11 = &v11[2 * v42 - 1];
          if ( !--v12 )
            goto LABEL_60;
        }
      }
    }
    else
    {
      v23 = qword_180177700;
      if ( v13 )
      {
        v24 = v13;
        v25 = (char *)Buffer - (char *)v43;
        v26 = v43;
        do
        {
          *v26 = NLS_DOWNCASE(v23, *(unsigned __int16 *)((char *)v26 + v25));
          ++v26;
          --v24;
        }
        while ( v24 );
        v15 = !(v6 & 1);
      }
      if ( v12 )
      {
        v27 = v6 & 2;
        while ( 1 )
        {
          v28 = NLS_DOWNCASE(v23, *v11);
          if ( v27 )
          {
            v30 = v4;
            if ( (unsigned __int16)v4 >= v29 )
            {
LABEL_59:
              if ( v30 == v29 )
                goto LABEL_60;
            }
            else
            {
              while ( v28 != v43[v30] )
              {
                if ( ++v30 >= v29 )
                  goto LABEL_59;
              }
            }
          }
          else
          {
            v31 = v4;
            if ( (unsigned __int16)v4 < v29 )
            {
              while ( v28 != v43[v31] )
              {
                if ( ++v31 >= v29 )
                  goto LABEL_64;
              }
LABEL_60:
              v14 = v40;
              v5 = NonInclusivePrefixLength;
              goto LABEL_26;
            }
LABEL_64:
            if ( v31 != v29 )
              goto LABEL_60;
          }
          v11 = &v11[2 * v15 - 1];
          if ( !--v12 )
            goto LABEL_60;
        }
      }
    }
    return -1073741275;
  }
  if ( v13 == 1 )
  {
    v16 = *Buffer;
    v17 = v6 & 2;
    if ( v12 )
    {
      if ( v17 )
      {
        while ( *v11 == v16 )
        {
          v11 = &v11[2 * v15 - 1];
          if ( !--v12 )
            goto LABEL_27;
        }
      }
      else
      {
        while ( *v11 != v16 )
        {
          v11 = &v11[2 * v15 - 1];
          if ( !--v12 )
            goto LABEL_27;
        }
      }
      goto LABEL_28;
    }
    return -1073741275;
  }
  if ( !v12 )
    return -1073741275;
  v20 = v6 & 2;
  while ( 1 )
  {
    v21 = *v11;
    v22 = 0;
    if ( !v20 )
      break;
    if ( v13 )
    {
      while ( v21 != Buffer[v22] )
      {
        if ( ++v22 >= v13 )
          goto LABEL_85;
      }
    }
    else
    {
LABEL_85:
      if ( v22 == v13 )
        goto LABEL_26;
    }
LABEL_40:
    v11 = &v11[2 * v15 - 1];
    if ( !--v12 )
      goto LABEL_26;
  }
  if ( !v13 )
  {
LABEL_39:
    if ( v22 != v13 )
      goto LABEL_26;
    goto LABEL_40;
  }
  while ( v21 != Buffer[v22] )
  {
    if ( ++v22 >= v13 )
      goto LABEL_39;
  }
LABEL_26:
  Length = v39;
LABEL_27:
  if ( !v12 )
    return -1073741275;
LABEL_28:
  v18 = 2 * v12 - 2;
  if ( !v14 )
    v18 = Length - v18;
  *v5 = v18;
  return v4;
}
