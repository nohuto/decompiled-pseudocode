/*
 * XREFs of SdbpCheckMatchingDir @ 0x180099B40
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x180098EE4 (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800991D4 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x18009BC38 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009C078 (SdbpResolveMatchingFile.c)
 *     AslLogCallPrintf @ 0x18009DC20 (AslLogCallPrintf.c)
 *     AslDoesDirectoryExistNtPath @ 0x18009DCA8 (AslDoesDirectoryExistNtPath.c)
 */

__int64 __fastcall SdbpCheckMatchingDir(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, WCHAR *P)
{
  unsigned int v7; // ebx
  int DoesDirectoryExistNtPath; // r13d
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned __int16 *v11; // r15
  const char *v12; // r9
  int v13; // r8d
  __int64 v14; // r14
  WCHAR *v15; // rsi
  int *v16; // r12
  int v17; // ebp
  unsigned __int64 v18; // rax
  __int64 v19; // rcx

  v7 = 0;
  DoesDirectoryExistNtPath = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    v11 = (unsigned __int16 *)StringTagPtr;
    if ( !StringTagPtr )
    {
      v12 = "Failed to get the string from the database";
      v13 = 2545;
LABEL_4:
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDir", v13, (_DWORD)v12);
      goto LABEL_20;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(StringTagPtr + 2 * v14) );
    v15 = P;
    if ( (*(_BYTE *)P & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(P) )
    {
      v12 = "Failed to initialize SEARCHDBCONTEXT";
      v13 = 2558;
      goto LABEL_4;
    }
    v16 = (int *)*((_QWORD *)v15 + 9);
    v17 = 0;
    if ( *v16 > 0 )
    {
      while ( 1 )
      {
        P = 0LL;
        if ( !(unsigned int)SdbpResolveMatchingFile(a2, v15, v11, (unsigned int)v14, &v16[12 * v17 + 2], &P) )
        {
          v12 = "Failed to resolve matching dir";
          v13 = 2582;
          goto LABEL_4;
        }
        DoesDirectoryExistNtPath = AslDoesDirectoryExistNtPath(P);
        if ( P )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
        if ( DoesDirectoryExistNtPath )
          break;
        if ( ++v17 >= *v16 )
          goto LABEL_16;
      }
      if ( v17 > 0 )
        *((_DWORD *)v15 + 20) = 1;
    }
LABEL_16:
    v18 = *v11;
    LOWORD(v18) = v18 - 37;
    if ( (unsigned __int16)v18 <= 0x37u )
    {
      v19 = 0x80000000000201LL;
      if ( _bittest64(&v19, v18) )
        *((_DWORD *)v15 + 20) = 1;
    }
    v7 = 1;
  }
LABEL_20:
  *a1 = DoesDirectoryExistNtPath;
  return v7;
}
