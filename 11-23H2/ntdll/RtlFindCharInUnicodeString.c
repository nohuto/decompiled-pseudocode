/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18001DE70
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001B5B0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001CFF8 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18006E06C (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x1800743E4 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  NTSTATUS v4; // r10d
  char v5; // si
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 v7; // ax
  unsigned __int16 Length; // cx
  wchar_t *Buffer; // r12
  wchar_t *v10; // rdi
  unsigned __int16 v11; // r11
  unsigned __int16 v12; // bx
  int v13; // r8d
  _BOOL8 v14; // rbp
  wchar_t v15; // ax
  int v16; // esi
  USHORT v17; // r11
  int v19; // esi
  wchar_t v20; // dx
  unsigned __int16 v21; // cx
  __int64 v22; // r13
  __int64 v23; // rbp
  signed __int64 v24; // r12
  _WORD *v25; // r14
  int v26; // esi
  __int16 v27; // r8
  unsigned __int16 i; // dx
  unsigned __int16 v29; // cx
  __int64 v30; // r13
  int v31; // esi
  __int16 v32; // ax
  unsigned __int16 v33; // r10
  unsigned __int16 v34; // bp
  __int16 v35; // r14
  __int16 v36; // r15
  int v37; // [rsp+24h] [rbp-A4h]
  unsigned __int16 v38; // [rsp+28h] [rbp-A0h]
  USHORT *v39; // [rsp+30h] [rbp-98h]
  _BOOL8 v40; // [rsp+38h] [rbp-90h]
  _WORD v41[32]; // [rsp+40h] [rbp-88h] BYREF

  v4 = 0;
  v39 = NonInclusivePrefixLength;
  v5 = Flags;
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
    v7 = CharSet->MaximumLength;
    if ( (v7 & 1) != 0 || CharSet->Length > v7 || v7 == 0xFFFF || !CharSet->Buffer && (CharSet->Length || v7) )
      return -1073741811;
  }
  Length = StringToSearch->Length;
  Buffer = CharSet->Buffer;
  v10 = StringToSearch->Buffer;
  v11 = StringToSearch->Length >> 1;
  v12 = CharSet->Length >> 1;
  v13 = v5 & 1;
  v38 = StringToSearch->Length;
  v37 = v13;
  if ( (v5 & 1) != 0 )
    v10 = &v10[v11 - 1];
  v14 = !(v5 & 1);
  v40 = v14;
  if ( (v5 & 4) == 0 )
  {
    if ( v12 != 1 )
    {
      if ( v11 )
      {
        v19 = v5 & 2;
        while ( 1 )
        {
          v20 = *v10;
          v21 = 0;
          if ( v19 )
          {
            if ( v12 )
            {
              do
              {
                if ( v20 == Buffer[v21] )
                  break;
                ++v21;
              }
              while ( v21 < v12 );
            }
            if ( v21 == v12 )
              goto LABEL_26;
          }
          else
          {
            if ( v12 )
            {
              do
              {
                if ( v20 == Buffer[v21] )
                  break;
                ++v21;
              }
              while ( v21 < v12 );
            }
            if ( v21 != v12 )
              goto LABEL_26;
          }
          v10 = &v10[2 * v14 - 1];
          if ( !--v11 )
            goto LABEL_26;
        }
      }
      return -1073741275;
    }
    v15 = *Buffer;
    v16 = v5 & 2;
    if ( !v11 )
      return -1073741275;
    if ( v16 )
    {
      while ( *v10 == v15 )
      {
        v10 = &v10[2 * v14 - 1];
        if ( !--v11 )
          return -1073741275;
      }
    }
    else
    {
      while ( *v10 != v15 )
      {
        v10 = &v10[2 * v14 - 1];
        if ( !--v11 )
          return -1073741275;
      }
    }
LABEL_28:
    v17 = 2 * v11 - 2;
    if ( !v13 )
      v17 = Length - v17;
    *NonInclusivePrefixLength = v17;
    return v4;
  }
  if ( v12 <= 0x20u )
  {
    v22 = qword_180184810;
    if ( v12 )
    {
      v23 = v12;
      v24 = (char *)Buffer - (char *)v41;
      v25 = v41;
      do
      {
        *v25 = NLS_DOWNCASE(v22, *(unsigned __int16 *)((char *)v25 + v24));
        ++v25;
        --v23;
      }
      while ( v23 );
      v14 = !(v5 & 1);
    }
    if ( v11 )
    {
      v26 = v5 & 2;
      while ( 1 )
      {
        v27 = NLS_DOWNCASE(v22, *v10);
        if ( v26 )
        {
          for ( i = v4; i < v12; ++i )
          {
            if ( v27 == v41[i] )
              break;
          }
          if ( i == v12 )
            goto LABEL_59;
        }
        else
        {
          v29 = v4;
          if ( (unsigned __int16)v4 < v12 )
          {
            do
            {
              if ( v27 == v41[v29] )
                break;
              ++v29;
            }
            while ( v29 < v12 );
            v14 = v40;
          }
          if ( v29 != v12 )
            goto LABEL_59;
        }
        v10 = &v10[2 * v14 - 1];
        if ( v11 == 1 )
          return -1073741275;
      }
    }
    return -1073741275;
  }
  if ( !v11 )
    return -1073741275;
  v30 = qword_180184810;
  v31 = v5 & 2;
  while ( 1 )
  {
    v32 = NLS_DOWNCASE(v30, *v10);
    v34 = v33;
    if ( !v31 )
      break;
    v35 = v32;
    do
    {
      if ( v35 == (unsigned __int16)NLS_DOWNCASE(v30, Buffer[v34]) )
        break;
      ++v34;
    }
    while ( v34 < v12 );
    if ( v34 == v12 )
      goto LABEL_59;
LABEL_79:
    v10 = &v10[2 * v40 - 1];
    if ( v11 == 1 )
      return -1073741275;
  }
  v36 = v32;
  do
  {
    if ( v36 == (unsigned __int16)NLS_DOWNCASE(v30, Buffer[v34]) )
      break;
    ++v34;
  }
  while ( v34 < v12 );
  if ( v34 == v12 )
    goto LABEL_79;
LABEL_59:
  v13 = v37;
  NonInclusivePrefixLength = v39;
LABEL_26:
  if ( v11 )
  {
    Length = v38;
    goto LABEL_28;
  }
  return -1073741275;
}
