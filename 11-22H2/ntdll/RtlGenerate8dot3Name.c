/*
 * XREFs of RtlGenerate8dot3Name @ 0x180108E80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     GetNextWchar @ 0x180108D24 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x180108E10 (RtlComputeLfnChecksum.c)
 */

NTSTATUS __cdecl RtlGenerate8dot3Name(
        PUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  NTSTATUS v4; // ebx
  bool v8; // cl
  __int64 v9; // r8
  char v10; // r12
  unsigned int v11; // ebp
  char v12; // r8
  __int16 NextWchar; // ax
  unsigned int NameLength; // esi
  bool v15; // zf
  unsigned __int16 v16; // ax
  __int64 v17; // rcx
  int v18; // eax
  USHORT v19; // ax
  USHORT v20; // r10
  unsigned int i; // r8d
  __int16 v22; // dx
  __int64 v23; // rax
  WCHAR v24; // dx
  unsigned int v25; // esi
  unsigned __int16 v26; // ax
  __int64 v27; // rcx
  __int64 ExtensionLength; // rdx
  int v29; // eax
  ULONG v30; // r9d
  USHORT v31; // ax
  int v32; // r10d
  USHORT v33; // r11
  __int64 v34; // r8
  WCHAR *v35; // r9
  __int16 v36; // ax
  unsigned __int16 v37; // cx
  unsigned int v38; // esi
  char v39; // r13
  __int64 v40; // rax
  char v41; // cl
  __int16 v42; // r8
  PUNICODE_STRING v43; // r15
  _WORD *v44; // r14
  unsigned __int16 v45; // cx
  unsigned __int16 v46; // cx
  ULONG v47; // eax
  unsigned int v48; // edx
  unsigned int v49; // ecx
  unsigned int v50; // r8d
  int v51; // eax
  signed __int32 v53[9]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v54; // [rsp+24h] [rbp-74h] BYREF
  _BYTE *WideCharTable; // [rsp+28h] [rbp-70h]
  unsigned int v56; // [rsp+30h] [rbp-68h] BYREF
  PUNICODE_STRING v57; // [rsp+38h] [rbp-60h]
  _WORD v58[8]; // [rsp+40h] [rbp-58h] BYREF

  v4 = 0;
  v57 = Name8dot3;
  WideCharTable = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v53, 0);
    v8 = CodePageTable.DBCSCodePage != 0;
    WideCharTable = CodePageTable.WideCharTable;
  }
  if ( !AllowExtendedCharacters || (v10 = 1, !v8) )
    v10 = 0;
  if ( !*(_BYTE *)(v9 + 3) )
  {
    v11 = -1;
    v54 = 0;
    if ( !Name->Length || (v12 = 1, *Name->Buffer != 46) )
      v12 = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(&Name->Length, &v54, v12, AllowExtendedCharacters);
      if ( !NextWchar )
        break;
      v12 = 0;
      if ( NextWchar == 46 )
        v11 = v54;
    }
    NameLength = 0;
    v15 = v11 == Name->Length >> 1;
    v54 = 0;
    Context->NameLength = 0;
    if ( v15 )
      v11 = -1;
    v56 = v11;
    while ( 1 )
    {
      v16 = GetNextWchar(&Name->Length, &v54, 1, AllowExtendedCharacters);
      v17 = v16;
      if ( !v16 || v54 >= v11 || Context->NameLength >= 6u )
        break;
      if ( v10 )
      {
        if ( v16 <= 0x7Fu || (v18 = 2, !WideCharTable[2 * v17 + 1]) )
          v18 = 1;
        NameLength += v18;
        if ( NameLength > 6 )
          goto LABEL_27;
      }
      Context->NameBuffer[Context->NameLength++] = v17;
    }
    if ( !v10 )
      NameLength = Context->NameLength;
LABEL_27:
    if ( NameLength <= 2 )
    {
      v19 = RtlComputeLfnChecksum(&Name->Length);
      Context->Checksum = v19;
      v20 = v19;
      for ( i = 0; i < 4; ++i )
      {
        v22 = 48;
        if ( (v20 & 0xFu) > 9 )
          v22 = 55;
        v23 = i + Context->NameLength;
        v24 = (v20 & 0xF) + v22;
        v20 >>= 4;
        Context->NameBuffer[v23] = v24;
      }
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v11 == -1 )
    {
      Context->ExtensionLength = 0;
    }
    else
    {
      Context->ExtensionBuffer[0] = 46;
      v25 = 1;
      for ( Context->ExtensionLength = 1; ; ++Context->ExtensionLength )
      {
        v26 = GetNextWchar(&Name->Length, &v56, 1, AllowExtendedCharacters);
        v27 = v26;
        if ( !v26 )
          break;
        ExtensionLength = Context->ExtensionLength;
        if ( (unsigned int)ExtensionLength >= 4 )
          goto LABEL_43;
        if ( v10 )
        {
          if ( v26 <= 0x7Fu || (v29 = 2, !WideCharTable[2 * v27 + 1]) )
            v29 = 1;
          v25 += v29;
          if ( v25 > 4 )
          {
LABEL_43:
            Context->ExtensionBuffer[(unsigned int)(ExtensionLength - 1)] = 126;
            break;
          }
        }
        Context->ExtensionBuffer[ExtensionLength] = v27;
      }
    }
  }
  v30 = Context->LastIndexValue + 1;
  Context->LastIndexValue = v30;
  if ( v30 > 4 && !Context->CheckSumInserted )
  {
    v31 = RtlComputeLfnChecksum(&Name->Length);
    Context->Checksum = v31;
    v33 = v31;
    if ( 2 - v32 < (unsigned int)(6 - v32) )
    {
      v34 = 4LL;
      v35 = &Context->NameBuffer[2 - v32];
      do
      {
        v36 = 48;
        v37 = v33 & 0xF;
        if ( v37 > 9u )
          v36 = 55;
        v33 >>= 4;
        *v35++ = v37 + v36;
        --v34;
      }
      while ( v34 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v32;
    v30 = 1;
    Context->CheckSumInserted = 1;
  }
  v38 = 1;
  v39 = 1;
  do
  {
    if ( !v30 )
      break;
    v40 = 8 - v38++;
    v41 = 0;
    v42 = v30 % 0xA + 48;
    v30 /= 0xAu;
    v58[v40] = v42;
    if ( v42 == 57 )
      v41 = v39;
    v39 = v41;
  }
  while ( v38 <= 7 );
  v43 = v57;
  v44 = &v58[8 - v38];
  *v44 = 126;
  if ( (unsigned __int8)(Context->NameLength - 1) > 0xBu )
  {
    v45 = 0;
  }
  else
  {
    memmove(v43->Buffer, Context->NameBuffer, 2LL * Context->NameLength);
    v45 = 2 * Context->NameLength;
  }
  v43->Length = v45;
  memmove(&v43->Buffer[(unsigned __int64)v45 >> 1], v44, 2 * v38);
  v46 = v43->Length + 2 * v38;
  v43->Length = v46;
  v47 = Context->ExtensionLength;
  if ( v47 )
  {
    memmove(&v43->Buffer[(unsigned __int64)v46 >> 1], Context->ExtensionBuffer, 2 * v47);
    v43->Length += 2 * LOWORD(Context->ExtensionLength);
  }
  if ( !v39 )
    return 0;
  v48 = Context->NameLength;
  if ( v10 )
  {
    v49 = 0;
    v50 = 0;
    if ( (_BYTE)v48 )
    {
      do
      {
        if ( Context->NameBuffer[v49] <= 0x7Fu || (v51 = 2, !WideCharTable[2 * Context->NameBuffer[v49] + 1]) )
          v51 = 1;
        v50 += v51;
        if ( v50 > 7 - v38 )
          break;
        ++v49;
      }
      while ( v49 < v48 );
    }
  }
  else
  {
    LOBYTE(v49) = v48 - 1;
  }
  Context->NameLength = v49;
  if ( !(_BYTE)v49 )
    return -1073740761;
  return v4;
}
