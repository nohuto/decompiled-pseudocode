/*
 * XREFs of RtlGenerate8dot3Name @ 0x180108E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x18000E12C (RtlpIsUtf8Process.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     GetNextWchar @ 0x180108D04 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x180108DF0 (RtlComputeLfnChecksum.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  bool v7; // cl
  __int64 v8; // r8
  unsigned int v9; // r11d
  char v10; // r12
  unsigned int v11; // esi
  char v12; // r8
  __int16 NextWchar; // ax
  unsigned int i; // edi
  bool v15; // zf
  int v16; // eax
  WCHAR v17; // ax
  WCHAR v18; // cx
  USHORT v19; // r10
  unsigned int v20; // r8d
  __int16 v21; // dx
  __int64 v22; // rax
  WCHAR v23; // dx
  unsigned int v24; // edi
  WCHAR v25; // ax
  WCHAR v26; // cx
  int v27; // eax
  WCHAR v28; // ax
  ULONG v29; // r9d
  USHORT v30; // ax
  int v31; // r10d
  USHORT v32; // r11
  __int64 v33; // r8
  WCHAR *v34; // r9
  __int16 v35; // ax
  unsigned __int16 v36; // cx
  unsigned int v37; // edi
  char v38; // r13
  __int64 v39; // rax
  char v40; // cl
  __int16 v41; // r8
  PGENERATE_NAME_CONTEXT v42; // rbx
  PUNICODE_STRING v43; // r15
  _WORD *v44; // r14
  unsigned __int16 v45; // ax
  unsigned __int16 v46; // cx
  ULONG ExtensionLength; // eax
  unsigned int NameLength; // edx
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  int v51; // eax
  signed __int32 v53[9]; // [rsp+0h] [rbp-60h] BYREF
  unsigned int v54; // [rsp+24h] [rbp-3Ch] BYREF
  _BYTE *WideCharTable; // [rsp+28h] [rbp-38h]
  unsigned int v56; // [rsp+30h] [rbp-30h] BYREF
  PUNICODE_STRING v57; // [rsp+38h] [rbp-28h]
  PGENERATE_NAME_CONTEXT v58; // [rsp+40h] [rbp-20h]
  _WORD v59[8]; // [rsp+48h] [rbp-18h] BYREF

  v57 = Name8dot3;
  WideCharTable = 0LL;
  v58 = Context;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v53, v9);
    v7 = CodePageTable.DBCSCodePage != (unsigned __int16)v9;
    WideCharTable = CodePageTable.WideCharTable;
  }
  if ( !AllowExtendedCharacters || (v10 = 1, !v7) )
    v10 = v9;
  if ( *(_BYTE *)(v8 + 3) == (_BYTE)v9 )
  {
    v11 = -1;
    v54 = v9;
    if ( Name->Length <= (unsigned __int16)v9 || (v12 = 1, *Name->Buffer != 46) )
      v12 = v9;
    NextWchar = GetNextWchar(&Name->Length, &v54, v12, AllowExtendedCharacters);
    for ( i = 0; NextWchar; NextWchar = GetNextWchar(&Name->Length, &v54, 0, AllowExtendedCharacters) )
    {
      if ( NextWchar == 46 )
        v11 = v54;
    }
    v15 = v11 == Name->Length >> 1;
    v54 = 0;
    if ( v15 )
      v11 = -1;
    Context->NameLength = 0;
    v56 = v11;
    while ( 1 )
    {
      v17 = GetNextWchar(&Name->Length, &v54, 1, AllowExtendedCharacters);
      v9 = 0;
      v18 = v17;
      if ( !v17 || v54 >= v11 || Context->NameLength >= 6u )
        break;
      if ( v10 )
      {
        if ( v17 <= 0x7Fu || (v16 = 2, !WideCharTable[2 * v18 + 1]) )
          v16 = 1;
        i += v16;
        if ( i > 6 )
          goto LABEL_28;
      }
      Context->NameBuffer[Context->NameLength++] = v18;
    }
    if ( !v10 )
      i = Context->NameLength;
LABEL_28:
    if ( i <= 2 )
    {
      v19 = RtlComputeLfnChecksum(&Name->Length);
      Context->Checksum = v19;
      v20 = v9;
      do
      {
        v21 = 48;
        if ( (v19 & 0xFu) > 9 )
          v21 = 55;
        v22 = v20 + Context->NameLength;
        v23 = (v19 & 0xF) + v21;
        v19 >>= 4;
        ++v20;
        Context->NameBuffer[v22] = v23;
      }
      while ( v20 < 4 );
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v11 == -1 )
    {
      Context->ExtensionLength = v9;
    }
    else
    {
      Context->ExtensionBuffer[0] = 46;
      v24 = 1;
      Context->ExtensionLength = 1;
      v25 = GetNextWchar(&Name->Length, &v56, 1, AllowExtendedCharacters);
      LOBYTE(v9) = 0;
      v26 = v25;
      if ( v25 )
      {
        while ( Context->ExtensionLength < 4 )
        {
          if ( !v10 )
            goto LABEL_80;
          if ( v26 <= 0x7Fu || (v27 = 2, !WideCharTable[2 * v26 + 1]) )
            v27 = 1;
          v24 += v27;
          if ( v24 <= 4 )
          {
LABEL_80:
            Context->ExtensionBuffer[Context->ExtensionLength++] = v26;
            v28 = GetNextWchar(&Name->Length, &v56, 1, AllowExtendedCharacters);
            LOBYTE(v9) = 0;
            v26 = v28;
            if ( v28 )
              continue;
          }
          if ( !v26 )
            goto LABEL_45;
          break;
        }
        Context->ExtensionBuffer[Context->ExtensionLength - 1] = 126;
      }
    }
  }
LABEL_45:
  v29 = Context->LastIndexValue + 1;
  Context->LastIndexValue = v29;
  if ( v29 > 4 && Context->CheckSumInserted == (_BYTE)v9 )
  {
    v30 = RtlComputeLfnChecksum(&Name->Length);
    Context->Checksum = v30;
    v32 = v30;
    if ( 2 - v31 < (unsigned int)(6 - v31) )
    {
      v33 = 4LL;
      v34 = &Context->NameBuffer[2 - v31];
      do
      {
        v35 = 48;
        v36 = v32 & 0xF;
        if ( v36 > 9u )
          v35 = 55;
        v32 >>= 4;
        *v34++ = v36 + v35;
        --v33;
      }
      while ( v33 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v31;
    v29 = 1;
    Context->CheckSumInserted = 1;
  }
  v37 = 1;
  v38 = 1;
  do
  {
    if ( !v29 )
      break;
    v39 = 8 - v37++;
    v40 = 0;
    v41 = v29 % 0xA + 48;
    v29 /= 0xAu;
    v59[v39] = v41;
    if ( v41 == 57 )
      v40 = v38;
    v38 = v40;
  }
  while ( v37 <= 7 );
  v42 = v58;
  v43 = v57;
  v44 = &v59[8 - v37];
  *v44 = 126;
  if ( (unsigned __int8)(v42->NameLength - 1) > 0xBu )
  {
    v45 = 0;
  }
  else
  {
    memmove(v43->Buffer, v42->NameBuffer, 2LL * v42->NameLength);
    v45 = 2 * v42->NameLength;
  }
  v43->Length = v45;
  memmove(&v43->Buffer[(unsigned __int64)v45 >> 1], v44, 2 * v37);
  v46 = v43->Length + 2 * v37;
  v43->Length = v46;
  ExtensionLength = v42->ExtensionLength;
  if ( ExtensionLength )
  {
    memmove(&v43->Buffer[(unsigned __int64)v46 >> 1], v42->ExtensionBuffer, 2 * ExtensionLength);
    v43->Length += 2 * LOWORD(v42->ExtensionLength);
  }
  if ( !v38 )
    return 0;
  NameLength = v42->NameLength;
  if ( v10 )
  {
    v49 = 0;
    v50 = 0;
    if ( (_BYTE)NameLength )
    {
      do
      {
        if ( v42->NameBuffer[v49] <= 0x7Fu || (v51 = 2, !WideCharTable[2 * v42->NameBuffer[v49] + 1]) )
          v51 = 1;
        v50 += v51;
        if ( v50 > 7 - v37 )
          break;
        ++v49;
      }
      while ( v49 < NameLength );
    }
  }
  else
  {
    LOBYTE(v49) = NameLength - 1;
  }
  v42->NameLength = v49;
  if ( (_BYTE)v49 )
    return 0;
  else
    return -1073740761;
}
