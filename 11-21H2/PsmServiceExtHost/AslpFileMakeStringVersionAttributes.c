/*
 * XREFs of AslpFileMakeStringVersionAttributes @ 0x1800A1F4C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x1800A156C (AslpFileGetVersionAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x18009EE10 (AslStringXmlSanitize.c)
 *     AslpFileQueryVersionString @ 0x1800A25A8 (AslpFileQueryVersionString.c)
 *     AslpFileVerBlockGetValueOffset @ 0x1800A28BC (AslpFileVerBlockGetValueOffset.c)
 *     AslpFileVerQueryBlock @ 0x1800A2924 (AslpFileVerQueryBlock.c)
 */

__int64 __fastcall AslpFileMakeStringVersionAttributes(__int64 a1, __int64 a2)
{
  int v2; // r12d
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int v6; // edi
  int v7; // eax
  unsigned __int16 *v8; // rsi
  unsigned int v9; // edi
  unsigned __int64 v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  __int64 v14; // r13
  int VersionString; // eax
  _WORD *v16; // r13
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v21; // [rsp+28h] [rbp-18h]
  _WORD *v22; // [rsp+30h] [rbp-10h] BYREF
  __int64 v23; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp+48h] BYREF
  __int64 v25; // [rsp+90h] [rbp+50h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp+58h] BYREF

  v2 = a2;
  v22 = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  v26 = 0LL;
  if ( a2 )
  {
    v7 = AslpFileVerQueryBlock(a2, L"\\VarFileInfo\\Translation", &v25, &v24);
    v6 = v7;
    if ( v7 == -1073741275 )
    {
      v8 = 0LL;
      v9 = 0;
    }
    else
    {
      if ( v7 < 0 )
      {
LABEL_26:
        AslLogCallPrintf(1LL);
        return (unsigned int)v6;
      }
      v10 = v24;
      v11 = v25;
      v8 = 0LL;
      v9 = 0;
      if ( (int)AslpFileVerBlockGetValueOffset(&v26, v25, v24) >= 0 && v26 < v10 )
      {
        v8 = (unsigned __int16 *)(v26 + v11);
        v9 = v10 - v26;
      }
    }
    v12 = 0LL;
    v13 = (unsigned __int64)v9 >> 2;
    do
    {
      v14 = *(int *)((char *)&unk_1800B5DD0 + v12);
      v21 = *(_QWORD *)((char *)&unk_1800B5DD0 + v12 + 8);
      LODWORD(v24) = *(_DWORD *)((char *)&unk_1800B5DD0 + v12);
      VersionString = AslpFileQueryVersionString((unsigned int)&v22, (unsigned int)&v23, v2, (_DWORD)v8, v13, v21);
      v6 = VersionString;
      if ( VersionString < 0 )
      {
        if ( VersionString != -1073741275 )
          goto LABEL_26;
        *(_DWORD *)(32 * v14 + a1 + 24) |= 2u;
      }
      else
      {
        v16 = v22;
        v6 = AslStringXmlSanitize(v22);
        if ( v6 < 0 )
          goto LABEL_26;
        v17 = 32LL * (int)v24;
        v18 = -1LL;
        *(_DWORD *)(v17 + a1) = 4;
        do
          ++v18;
        while ( v16[v18] );
        *(_DWORD *)(v17 + a1 + 24) |= 1u;
        *(_QWORD *)(v17 + a1 + 8) = v18;
        *(_QWORD *)(v17 + a1 + 16) = v16;
      }
      v12 += 16LL;
    }
    while ( v12 < 0x80 );
    if ( v8 && v13 == 1 )
    {
      *(_DWORD *)(a1 + 768) = 2;
      *(_QWORD *)(a1 + 776) = 4LL;
      v19 = *v8;
      *(_DWORD *)(a1 + 792) |= 1u;
      *(_QWORD *)(a1 + 784) = v19;
    }
    else
    {
      *(_DWORD *)(a1 + 792) |= 2u;
    }
    return 0;
  }
  else
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
}
