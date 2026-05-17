/*
 * XREFs of LdrpGetDllPath @ 0x180031CCC
 * Callers:
 *     LdrGetDllPath @ 0x180031CA0 (LdrGetDllPath.c)
 *     LdrpComputeLazyDllPath @ 0x18007A914 (LdrpComputeLazyDllPath.c)
 * Callees:
 *     RtlpGetCachedPath @ 0x180031F30 (RtlpGetCachedPath.c)
 *     LdrpLogDllStateEx2 @ 0x18003207C (LdrpLogDllStateEx2.c)
 *     RtlDetermineDosPathNameType_U @ 0x180078C60 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007E704 (LdrpLogRelativePathWithAlteredSearchError.c)
 */

__int64 __fastcall LdrpGetDllPath(__int64 a1, int a2, _QWORD *a3, _QWORD *a4, _DWORD *a5, _OWORD *a6, _QWORD *a7)
{
  int v9; // edx
  bool v11; // bp
  unsigned int v12; // ebx
  char v13; // r12
  __int64 v14; // rsi
  char v15; // al
  __int64 v16; // r9
  __int64 (__fastcall *v17)(); // rdx
  __int64 v18; // r8
  void *v19; // rcx
  __int64 CachedPath; // rax
  __int64 v21; // rcx
  int v23; // eax
  __int64 v24; // rax
  bool v25; // [rsp+68h] [rbp+10h]

  v9 = a2 & 0x2000;
  v11 = 0;
  v12 = a2 & 0xFFFFDFFF;
  v25 = v9 != 0;
  if ( (v12 & 8) != 0 )
  {
    if ( v12 != 8 )
      return 3221225485LL;
    v12 = 0;
    v13 = 1;
  }
  else
  {
    v13 = 0;
    if ( v12 )
      goto LABEL_4;
  }
  v25 = v9 != 0;
  if ( LdrpDefaultDllDirectories )
  {
    if ( v9 || (v25 = 0, (LdrpDefaultDllDirectories & 0x2000) != 0) )
      v25 = 1;
    v12 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_4:
  v14 = 0LL;
  if ( (v12 & 0x100) == 0 && !v13 )
    goto LABEL_6;
  v23 = RtlDetermineDosPathNameType_U(a1);
  if ( (unsigned int)(v23 - 1) > 1 )
  {
    if ( v23 != 6 || *(_WORD *)(a1 + 4) != 63 )
    {
      v11 = 1;
      v14 = a1;
      goto LABEL_23;
    }
    v11 = (unsigned int)RtlDetermineDosPathNameType_U(a1 + 8) != 2;
  }
  v14 = a1;
  if ( !v11 )
  {
LABEL_6:
    v15 = LdrpPolicyBits;
    goto LABEL_7;
  }
LABEL_23:
  if ( !v13 )
    goto LABEL_6;
  LdrpLogRelativePathWithAlteredSearchError(a1);
  v15 = LdrpPolicyBits;
  if ( (LdrpPolicyBits & 0x40) != 0 )
  {
    v13 = 0;
    v11 = (v12 & 0x100) != 0;
  }
LABEL_7:
  if ( v12 )
  {
    if ( !v11 )
    {
      if ( (v12 & 0x1000) != 0 )
      {
        v12 |= 0xA00u;
        if ( (v15 & 4) != 0 )
          v12 |= 0x400u;
      }
      v18 = v12;
      v17 = RtlpComputeDllPathWithOptions;
      LODWORD(v18) = v12 | 0x100;
      v19 = &RtlpDllSearchPathWithOptions;
      v16 = v14;
      if ( !v13 )
        v18 = v12;
      goto LABEL_9;
    }
    return 3221225485LL;
  }
  v16 = 0LL;
  v17 = RtlpComputeDllPath;
  v18 = v14;
  v19 = &RtlpDllSearchPath;
LABEL_9:
  CachedPath = RtlpGetCachedPath(v19, v17, v18, v16);
  v21 = CachedPath;
  if ( CachedPath )
  {
    *a7 = *(_QWORD *)(CachedPath + 104);
    if ( a6 )
    {
      *a6 = *(_OWORD *)CachedPath;
      a6[1] = *(_OWORD *)(CachedPath + 16);
      a6[2] = *(_OWORD *)(CachedPath + 32);
      a6[3] = *(_OWORD *)(CachedPath + 48);
      a6[4] = *(_OWORD *)(CachedPath + 64);
    }
    *a3 = CachedPath + 128;
    if ( a4 )
    {
      if ( v25 )
        v24 = *(_QWORD *)(CachedPath + 120);
      else
        v24 = 0LL;
      *a4 = v24;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(v21 + 112);
    LdrpLogDllStateEx2(v21, a1, *a3, 5313LL);
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    if ( a4 )
      *a4 = 0LL;
    *a7 = 0LL;
    return 3221225495LL;
  }
}
