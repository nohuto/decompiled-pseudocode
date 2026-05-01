/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x18009C95C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x18009BF68 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180098620 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x180099828 (AslStringXmlSanitize.c)
 *     AslpFileQueryVersionString @ 0x18009CFB8 (AslpFileQueryVersionString.c)
 *     AslpFileVerBlockGetValueOffset @ 0x18009D2CC (AslpFileVerBlockGetValueOffset.c)
 *     AslpFileVerQueryBlock @ 0x18009D334 (AslpFileVerQueryBlock.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int VersionString; // eax
  unsigned __int16 *v8; // rsi
  unsigned int v9; // edi
  const char *v10; // r9
  int v11; // r8d
  unsigned __int64 v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r15
  __int64 v16; // r13
  _WORD *v17; // r13
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+20h] [rbp-20h]
  __int64 v23; // [rsp+28h] [rbp-18h]
  _WORD *v24; // [rsp+30h] [rbp-10h] BYREF
  __int64 v25; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 v26; // [rsp+88h] [rbp+48h] BYREF
  __int64 v27; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  v24 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  if ( !a2 )
  {
    v4 = (_DWORD *)(a1 + 184);
    v5 = 8LL;
    do
    {
      *v4 |= 2u;
      v4 += 8;
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(a1 + 792) |= 2u;
    return 0;
  }
  VersionString = AslpFileVerQueryBlock(a2, L"\\VarFileInfo\\Translation", &v27, &v26);
  v6 = VersionString;
  if ( VersionString == -1073741275 )
  {
    v8 = 0LL;
    v9 = 0;
  }
  else
  {
    if ( VersionString < 0 )
    {
      v10 = "AslpFileVerQueryBlock failed [%x]";
      v11 = 1784;
LABEL_28:
      LODWORD(v22) = VersionString;
      AslLogCallPrintf(1LL, (unsigned int)"AslpFileMakeStringVersionAttributes", v11, (_DWORD)v10, v22);
      return v6;
    }
    v12 = v26;
    v13 = v27;
    v8 = 0LL;
    v9 = 0;
    if ( (int)AslpFileVerBlockGetValueOffset(&v28, v27, v26) >= 0 && v28 < v12 )
    {
      v8 = (unsigned __int16 *)(v28 + v13);
      v9 = v12 - v28;
    }
  }
  v14 = 0LL;
  v15 = (unsigned __int64)v9 >> 2;
  do
  {
    v16 = *(int *)((char *)&unk_1800B46C0 + v14);
    v23 = *(_QWORD *)((char *)&unk_1800B46C0 + v14 + 8);
    LODWORD(v26) = *(_DWORD *)((char *)&unk_1800B46C0 + v14);
    VersionString = AslpFileQueryVersionString((unsigned int)&v24, (unsigned int)&v25, v2, (_DWORD)v8, v15, v23);
    v6 = VersionString;
    if ( VersionString < 0 )
    {
      if ( VersionString != -1073741275 )
      {
        v10 = "AslpFileQueryVersionString failed [%x]";
        v11 = 1839;
        goto LABEL_28;
      }
      *(_DWORD *)(32 * v16 + a1 + 24) |= 2u;
    }
    else
    {
      v17 = v24;
      VersionString = AslStringXmlSanitize(v24);
      v6 = VersionString;
      if ( VersionString < 0 )
      {
        v10 = "AslStringXmlSanitize failed [%x]";
        v11 = 1826;
        goto LABEL_28;
      }
      v18 = 32LL * (int)v26;
      v19 = -1LL;
      *(_DWORD *)(v18 + a1) = 4;
      do
        ++v19;
      while ( v17[v19] );
      *(_DWORD *)(v18 + a1 + 24) |= 1u;
      *(_QWORD *)(v18 + a1 + 8) = v19;
      *(_QWORD *)(v18 + a1 + 16) = v17;
    }
    v14 += 16LL;
  }
  while ( v14 < 0x80 );
  if ( v8 && v15 == 1 )
  {
    *(_DWORD *)(a1 + 768) = 2;
    *(_QWORD *)(a1 + 776) = 4LL;
    v20 = *v8;
    *(_DWORD *)(a1 + 792) |= 1u;
    *(_QWORD *)(a1 + 784) = v20;
  }
  else
  {
    *(_DWORD *)(a1 + 792) |= 2u;
  }
  return 0;
}
