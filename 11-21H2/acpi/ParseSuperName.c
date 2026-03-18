/*
 * XREFs of ParseSuperName @ 0x1C0015500
 * Callers:
 *     ParseArg @ 0x1C000B10C (ParseArg.c)
 *     ParseTerm @ 0x1C0013680 (ParseTerm.c)
 * Callees:
 *     GetBaseData @ 0x1C000A844 (GetBaseData.c)
 *     ParseNameTail @ 0x1C000D580 (ParseNameTail.c)
 *     GetNameSpaceObjectNoLock @ 0x1C0015310 (GetNameSpaceObjectNoLock.c)
 *     PushTerm @ 0x1C0016BE8 (PushTerm.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     RtlStringCchCopyA @ 0x1C0027100 (RtlStringCchCopyA.c)
 *     ConPrintf @ 0x1C00290CC (ConPrintf.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0047CA8 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0067B14 (LogError.c)
 *     PrintDebugMessage @ 0x1C00682B8 (PrintDebugMessage.c)
 */

__int64 __fastcall ParseSuperName(__int64 a1, __int64 a2, char a3, int a4)
{
  unsigned int v4; // edi
  char *v7; // rdx
  __int64 v8; // rbx
  __int64 v10; // rcx
  __int64 v11; // r9
  int v12; // eax
  int NameSpaceObjectNoLock; // r14d
  __int64 v14; // rcx
  char v15; // al
  int v16; // r15d
  unsigned __int64 v17; // r11
  char *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r9
  char v22; // al
  size_t v23; // rbx
  _BYTE *Pool2; // r15
  KIRQL v25; // bl
  __int64 j; // rcx
  char v27; // al
  __int64 v28; // rcx
  __int64 v30; // rbx
  __int64 v31; // r11
  char *p_Src; // rcx
  char v33; // al
  unsigned int v34; // eax
  __int64 v35; // rbx
  char *v36; // rcx
  _BYTE *v37; // rax
  unsigned int i; // r15d
  _BYTE *v39; // rdx
  int v40; // r10d
  __int64 v41; // rcx
  __int64 v43; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+40h] [rbp-C0h]
  char Src; // [rsp+50h] [rbp-B0h] BYREF
  char v46; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE P[128]; // [rsp+150h] [rbp+50h] BYREF

  v4 = 0;
  v7 = *(char **)(a1 + 120);
  v8 = 0LL;
  v43 = 0LL;
  v10 = (unsigned __int8)*v7;
  if ( !(_BYTE)v10 )
  {
    *(_QWORD *)(a1 + 120) = v7 + 1;
    return v4;
  }
  if ( (_BYTE)v10 == 91 && v7[1] == 49 )
  {
    *(_QWORD *)(a1 + 120) = v7 + 2;
    *(_WORD *)(a2 + 2) = 16;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("Debug");
    return v4;
  }
  v11 = (__int64)*(&OpcodeTable + v10);
  if ( !v11 )
    goto LABEL_94;
  v12 = *(_DWORD *)(v11 + 28);
  if ( (v12 & 0x20) == 0 )
  {
    if ( (v12 & 2) != 0 )
    {
      *(_QWORD *)(a1 + 120) = v7 + 1;
      v35 = (unsigned int)(v10 - 104);
      if ( (unsigned int)v35 >= *(_DWORD *)(*(_QWORD *)(a1 + 96) + 60LL) )
      {
        LogError(3222536197LL);
        AcpiDiagTraceAmlError(a1, 3222536197LL);
        PrintDebugMessage(142, v35, 0, 0, 0LL);
        return (unsigned int)-1072431099;
      }
      else
      {
        if ( (gDebugger & 0xD0) != 0 )
          ConPrintf("Arg%d");
        *(_WORD *)(a2 + 2) = 129;
        *(_QWORD *)(a2 + 16) = GetBaseData(*(_QWORD *)(*(_QWORD *)(a1 + 96) + 64LL) + 40 * v35);
      }
      return v4;
    }
    if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)(a1 + 120) = v7 + 1;
      v30 = (unsigned int)(v10 - 96);
      if ( (gDebugger & 0xD0) != 0 )
        ConPrintf("Local%d");
      *(_WORD *)(a2 + 2) = 129;
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 96) + 8 * (v30 + 4 * v30 + 9);
      return v4;
    }
    if ( (v12 & 0x80u) != 0 )
    {
      v34 = PushTerm(a1, (_DWORD)v7, a4, v11, a2);
      ++*(_QWORD *)(a1 + 120);
      return v34;
    }
LABEL_94:
    LogError(3222536199LL);
    AcpiDiagTraceAmlError(a1, 3222536199LL);
    PrintDebugMessage(141, **(unsigned __int8 **)(a1 + 120), *(_QWORD *)(a1 + 120), 0, 0LL);
    return (unsigned int)-1072431097;
  }
  v44 = *(_QWORD *)(a1 + 80);
  if ( (_BYTE)v10 == 92 )
  {
    v31 = 256LL;
    p_Src = &Src;
    do
    {
      if ( v31 == -2147483390 )
        goto LABEL_52;
      v33 = p_Src["\\" - &Src];
      if ( !v33 )
        goto LABEL_52;
      *p_Src++ = v33;
      --v31;
    }
    while ( v31 );
    --p_Src;
LABEL_52:
    ++*(_QWORD *)(a1 + 120);
    *p_Src = 0;
LABEL_53:
    NameSpaceObjectNoLock = ParseNameTail(a1, (char **)(a1 + 120), (__int64)&Src);
    goto LABEL_25;
  }
  if ( (_BYTE)v10 == 94 )
  {
    RtlStringCchCopyA(&Src, 0x100uLL, "^");
    ++*(_QWORD *)(a1 + 120);
    v36 = &v46;
    v37 = *(_BYTE **)(a1 + 120);
    for ( i = 1; i < 0xFF; ++i )
    {
      v39 = v37;
      if ( *v37 != 94 )
        break;
      ++v37;
      *v36++ = 94;
      *(_QWORD *)(a1 + 120) = v37;
      v39 = v37;
    }
    *(&Src + i) = 0;
    if ( *v39 == 94 )
    {
      LogError(3221225734LL);
      AcpiDiagTraceAmlError(a1, 3221225734LL);
      PrintDebugMessage(129, (unsigned int)&Src, 0, 0, 0LL);
      return (unsigned int)-1073741562;
    }
    goto LABEL_53;
  }
  Src = 0;
  NameSpaceObjectNoLock = 0;
  v14 = -1LL;
  do
    ++v14;
  while ( *(&Src + v14) );
  v15 = *v7;
  if ( !*v7 )
  {
    *(_QWORD *)(a1 + 120) = v7 + 1;
    goto LABEL_25;
  }
  if ( v15 == 47 )
  {
    *(_QWORD *)(a1 + 120) = v7 + 1;
    v16 = (unsigned __int8)v7[1];
    *(_QWORD *)(a1 + 120) = v7 + 2;
    if ( !v16 )
      goto LABEL_25;
  }
  else if ( v15 == 46 )
  {
    v16 = 2;
    *(_QWORD *)(a1 + 120) = v7 + 1;
  }
  else
  {
    v16 = 1;
  }
  v17 = 256LL;
  while ( (unsigned __int64)(unsigned int)v14 + 4 < v17 )
  {
    v18 = &Src + (unsigned int)v14;
    v19 = (unsigned int)(v17 - v14);
    if ( (unsigned __int64)(v19 - 1) <= 0x7FFFFFFE )
    {
      v20 = 4 - v19;
      v21 = *(_QWORD *)(a1 + 120) - (_QWORD)v18;
      while ( v20 + v19 )
      {
        v22 = v18[v21];
        if ( !v22 )
        {
          if ( v19 )
            break;
LABEL_76:
          --v18;
          break;
        }
        *v18++ = v22;
        if ( !--v19 )
          goto LABEL_76;
      }
LABEL_23:
      *v18 = 0;
      goto LABEL_24;
    }
    if ( (_DWORD)v17 != (_DWORD)v14 )
      goto LABEL_23;
LABEL_24:
    *(_QWORD *)(a1 + 120) += 4LL;
    LODWORD(v14) = v14 + 4;
    if ( !--v16 )
      goto LABEL_25;
    if ( (int)v14 + 1 < (unsigned int)v17 )
    {
      RtlStringCchCopyA(&Src + (unsigned int)v14, (unsigned int)(v17 - v14), ".");
      LODWORD(v14) = v40;
    }
  }
  NameSpaceObjectNoLock = -1073741562;
  LogError(3221225734LL);
  AcpiDiagTraceAmlError(a1, 3221225734LL);
  PrintDebugMessage(130, (unsigned int)&Src, 0, 0, 0LL);
LABEL_25:
  if ( NameSpaceObjectNoLock )
  {
LABEL_36:
    v4 = NameSpaceObjectNoLock;
    if ( !NameSpaceObjectNoLock && v8 )
    {
      *(_WORD *)(a2 + 2) = 128;
      for ( j = v8; *(_WORD *)(j + 66) == 128; j = *(_QWORD *)(j + 80) )
        ;
      if ( (gdwfAMLI & 4) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(j + 112));
        v8 = v43;
      }
      v27 = gdwfAMLI;
      *(_QWORD *)(a2 + 16) = j;
      if ( (v27 & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 112), 0xFFFFFFFF) == 1 )
      {
        v41 = v43;
        *(_WORD *)(v43 + 64) |= 4u;
        if ( (*(_WORD *)(v41 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v41);
      }
      v28 = *(_QWORD *)(a2 + 16);
      if ( (gdwfAMLI & 4) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 112), 0xFFFFFFFF) == 1 )
      {
        *(_WORD *)(v28 + 64) |= 4u;
        if ( (*(_WORD *)(v28 + 64) & 0x40) == 0 )
          FreeNameSpaceObjects(v28);
      }
    }
  }
  else
  {
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("%s");
    v23 = -1LL;
    do
      ++v23;
    while ( *(&Src + v23) );
    if ( v23 + 1 < 0x80 )
    {
      Pool2 = P;
      goto LABEL_32;
    }
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, v23 + 1, 1768973121LL);
    if ( !Pool2 )
      return (unsigned int)-1073741670;
LABEL_32:
    memmove(Pool2, &Src, v23);
    Pool2[v23] = 0;
    v25 = ExAcquireSpinLockShared(&ACPINamespaceLock);
    NameSpaceObjectNoLock = GetNameSpaceObjectNoLock(Pool2, v44, &v43, 0);
    ExReleaseSpinLockShared(&ACPINamespaceLock, v25);
    if ( P != Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    if ( NameSpaceObjectNoLock != -1073741772 )
    {
      v8 = v43;
      goto LABEL_36;
    }
    if ( !a3 )
    {
      LogError(3221225524LL);
      AcpiDiagTraceAmlError(a1, 3221225524LL);
      PrintDebugMessage(120, (unsigned int)&Src, 0, 0, 0LL);
      return (unsigned int)-1073741772;
    }
  }
  return v4;
}
