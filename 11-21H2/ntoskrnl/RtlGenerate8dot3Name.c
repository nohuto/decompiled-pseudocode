/*
 * XREFs of RtlGenerate8dot3Name @ 0x1406A9EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406AA3A0 @ 0x1406AA3A0 (sub_1406AA3A0.c)
 *     sub_1406AA47C @ 0x1406AA47C (sub_1406AA47C.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

NTSTATUS __stdcall RtlGenerate8dot3Name(
        PCUNICODE_STRING Name,
        BOOLEAN AllowExtendedCharacters,
        PGENERATE_NAME_CONTEXT Context,
        PUNICODE_STRING Name8dot3)
{
  PCUNICODE_STRING v5; // r15
  bool v6; // di
  char v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG v11; // r11d
  _WORD *v12; // rax
  char v13; // r12
  unsigned int v14; // esi
  __int16 v15; // ax
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int i; // edi
  bool v19; // zf
  __int64 NameLength; // rdx
  int v21; // eax
  WCHAR v22; // ax
  WCHAR v23; // cx
  USHORT v24; // r10
  __int16 v25; // dx
  __int64 v26; // rax
  WCHAR v27; // dx
  unsigned int v28; // edi
  WCHAR v29; // ax
  __int64 v30; // r8
  __int64 v31; // r9
  WCHAR v32; // cx
  __int64 ExtensionLength; // rdx
  int v34; // eax
  WCHAR v35; // ax
  ULONG v36; // r9d
  USHORT v37; // ax
  int v38; // r10d
  USHORT v39; // r11
  __int64 v40; // r8
  WCHAR *v41; // r9
  __int16 v42; // ax
  unsigned __int16 v43; // cx
  unsigned int v44; // edi
  char v45; // r13
  __int64 v46; // rax
  char v47; // cl
  __int16 v48; // r8
  PGENERATE_NAME_CONTEXT v49; // rbx
  PUNICODE_STRING v50; // r15
  unsigned int v51; // ecx
  _WORD *v52; // r14
  unsigned __int16 v53; // ax
  unsigned __int16 v54; // cx
  ULONG v55; // eax
  unsigned int v56; // edx
  unsigned int v57; // ecx
  unsigned int v58; // r8d
  __int64 v59; // r9
  int v60; // eax
  signed __int32 v62[9]; // [rsp+0h] [rbp-60h] BYREF
  ULONG v63; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v64; // [rsp+28h] [rbp-38h]
  unsigned int v65; // [rsp+30h] [rbp-30h] BYREF
  PUNICODE_STRING v66; // [rsp+38h] [rbp-28h]
  PGENERATE_NAME_CONTEXT v67; // [rsp+40h] [rbp-20h]
  _WORD v68[8]; // [rsp+48h] [rbp-18h] BYREF

  v66 = Name8dot3;
  v64 = 0LL;
  v5 = Name;
  v67 = Context;
  LOBYTE(Name) = 1;
  v6 = 0;
  v8 = sub_1407CDA20(Name);
  v11 = 0;
  if ( !v8 )
  {
    _InterlockedOr(v62, 0);
    v12 = sub_140347DB0();
    v6 = v12[570] != (unsigned __int16)v11;
    v64 = *((_QWORD *)v12 + 146);
  }
  if ( !AllowExtendedCharacters || (v13 = 1, !v6) )
    v13 = v11;
  if ( Context->NameLength == (_BYTE)v11 )
  {
    v14 = -1;
    v63 = v11;
    if ( v5->Length <= (unsigned __int16)v11 || (LOBYTE(v9) = 1, *v5->Buffer != 46) )
      LOBYTE(v9) = v11;
    LOBYTE(v10) = AllowExtendedCharacters;
    v15 = sub_1406AA3A0(v5, &v63, v9, v10);
    for ( i = 0; v15; v15 = sub_1406AA3A0(v5, &v63, 0LL, v17) )
    {
      LOBYTE(v17) = AllowExtendedCharacters;
      if ( v15 == 46 )
        v14 = v63;
    }
    v19 = v14 == v5->Length >> 1;
    v63 = 0;
    if ( v19 )
      v14 = -1;
    Context->NameLength = 0;
    v65 = v14;
    while ( 1 )
    {
      LOBYTE(v17) = AllowExtendedCharacters;
      LOBYTE(v16) = 1;
      v22 = sub_1406AA3A0(v5, &v63, v16, v17);
      v11 = 0;
      v23 = v22;
      if ( !v22 )
        break;
      if ( v63 >= v14 )
        break;
      NameLength = Context->NameLength;
      if ( (unsigned __int8)NameLength >= 6u )
        break;
      if ( v13 )
      {
        if ( v22 <= 0x7Fu || (v16 = v64, v21 = 2, !*(_BYTE *)(v64 + 2LL * v23 + 1)) )
          v21 = 1;
        i += v21;
        if ( i > 6 )
          goto LABEL_28;
      }
      Context->NameBuffer[NameLength] = v23;
      ++Context->NameLength;
    }
    if ( !v13 )
      i = Context->NameLength;
LABEL_28:
    if ( i <= 2 )
    {
      v24 = sub_1406AA47C(v5);
      Context->Checksum = v24;
      LODWORD(v16) = v11;
      do
      {
        v25 = 48;
        if ( (v24 & 0xFu) > 9 )
          v25 = 55;
        v26 = (unsigned int)v16 + Context->NameLength;
        v27 = (v24 & 0xF) + v25;
        v24 >>= 4;
        v16 = (unsigned int)(v16 + 1);
        Context->NameBuffer[v26] = v27;
      }
      while ( (unsigned int)v16 < 4 );
      Context->NameLength += 4;
      Context->CheckSumInserted = 1;
    }
    if ( v14 == -1 )
    {
      Context->ExtensionLength = v11;
    }
    else
    {
      Context->ExtensionBuffer[0] = 46;
      LOBYTE(v17) = AllowExtendedCharacters;
      v28 = 1;
      LOBYTE(v16) = 1;
      Context->ExtensionLength = 1;
      v29 = sub_1406AA3A0(v5, &v65, v16, v17);
      LOBYTE(v11) = 0;
      v32 = v29;
      if ( v29 )
      {
        while ( 1 )
        {
          ExtensionLength = Context->ExtensionLength;
          if ( (unsigned int)ExtensionLength >= 4 )
            break;
          if ( !v13 )
            goto LABEL_80;
          if ( v32 <= 0x7Fu || (v30 = v64, v34 = 2, !*(_BYTE *)(v64 + 2LL * v32 + 1)) )
            v34 = 1;
          v28 += v34;
          if ( v28 <= 4 )
          {
LABEL_80:
            Context->ExtensionBuffer[ExtensionLength] = v32;
            LOBYTE(v31) = AllowExtendedCharacters;
            ++Context->ExtensionLength;
            LOBYTE(v30) = 1;
            v35 = sub_1406AA3A0(v5, &v65, v30, v31);
            LOBYTE(v11) = 0;
            v32 = v35;
            if ( v35 )
              continue;
          }
          if ( !v32 )
            goto LABEL_47;
          break;
        }
        if ( byte_140D3B045 )
          Context->ExtensionBuffer[Context->ExtensionLength - 1] = 126;
      }
    }
  }
LABEL_47:
  v36 = Context->LastIndexValue + 1;
  Context->LastIndexValue = v36;
  if ( v36 > 4 && Context->CheckSumInserted == (_BYTE)v11 )
  {
    v37 = sub_1406AA47C(v5);
    Context->Checksum = v37;
    v39 = v37;
    if ( 2 - v38 < (unsigned int)(6 - v38) )
    {
      v40 = 4LL;
      v41 = &Context->NameBuffer[2 - v38];
      do
      {
        v42 = 48;
        v43 = v39 & 0xF;
        if ( v43 > 9u )
          v42 = 55;
        v39 >>= 4;
        *v41++ = v43 + v42;
        --v40;
      }
      while ( v40 );
    }
    Context->LastIndexValue = 1;
    Context->NameLength = 6 - v38;
    v36 = 1;
    Context->CheckSumInserted = 1;
  }
  v44 = 1;
  v45 = 1;
  do
  {
    if ( !v36 )
      break;
    v46 = 8 - v44++;
    v47 = 0;
    v48 = v36 % 0xA + 48;
    v36 /= 0xAu;
    v68[v46] = v48;
    if ( v48 == 57 )
      v47 = v45;
    v45 = v47;
  }
  while ( v44 <= 7 );
  v49 = v67;
  v50 = v66;
  v51 = v67->NameLength;
  v52 = &v68[8 - v44];
  *v52 = 126;
  if ( (unsigned __int8)(v51 - 1) > 0xBu )
  {
    v53 = 0;
  }
  else
  {
    memmove(v50->Buffer, v49->NameBuffer, 2LL * v51);
    v53 = 2 * v49->NameLength;
  }
  v50->Length = v53;
  memmove(&v50->Buffer[(unsigned __int64)v53 >> 1], v52, 2 * v44);
  v54 = v50->Length + 2 * v44;
  v50->Length = v54;
  v55 = v49->ExtensionLength;
  if ( v55 )
  {
    memmove(&v50->Buffer[(unsigned __int64)v54 >> 1], v49->ExtensionBuffer, 2 * v55);
    v50->Length += 2 * LOWORD(v49->ExtensionLength);
  }
  if ( !v45 )
    return 0;
  v56 = v49->NameLength;
  if ( v13 )
  {
    v57 = 0;
    v58 = 0;
    if ( (_BYTE)v56 )
    {
      do
      {
        v59 = v49->NameBuffer[v57];
        if ( (unsigned int)v59 <= 0x7F || (v60 = 2, !*(_BYTE *)(v64 + 2 * v59 + 1)) )
          v60 = 1;
        v58 += v60;
        if ( v58 > 7 - v44 )
          break;
        ++v57;
      }
      while ( v57 < v56 );
    }
  }
  else
  {
    LOBYTE(v57) = v56 - 1;
  }
  v49->NameLength = v57;
  if ( (_BYTE)v57 )
    return 0;
  else
    return -1073740761;
}
