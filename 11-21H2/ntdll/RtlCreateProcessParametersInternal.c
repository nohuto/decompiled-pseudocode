/*
 * XREFs of RtlCreateProcessParametersInternal @ 0x18000C6F0
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x18000C1D0 (RtlCreateProcessParametersEx.c)
 *     RtlCreateProcessParametersWithTemplate @ 0x18000C5C0 (RtlCreateProcessParametersWithTemplate.c)
 *     RtlCreateProcessParameters @ 0x1800E2C20 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlpCopyProcString @ 0x18000CBF0 (RtlpCopyProcString.c)
 *     ValidateStringParameter @ 0x18000CC90 (ValidateStringParameter.c)
 *     RtlpGetBlockSizeEx @ 0x18000DB10 (RtlpGetBlockSizeEx.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlDeNormalizeProcessParams @ 0x1800E2C90 (RtlDeNormalizeProcessParams.c)
 */

__int64 __fastcall RtlCreateProcessParametersInternal(
        PRTL_USER_PROCESS_PARAMETERS *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        void *Src,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v15; // r8
  unsigned __int16 *v16; // r9
  unsigned __int64 v17; // r15
  __int16 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 v23; // r8
  _WORD *v24; // rdx
  unsigned __int16 *v25; // r14
  unsigned __int16 *v26; // rax
  unsigned __int16 *v27; // r11
  unsigned __int16 *v28; // r10
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  size_t BlockSize; // rsi
  unsigned __int64 i; // r14
  _RTL_USER_PROCESS_PARAMETERS *Heap; // rax
  PRTL_USER_PROCESS_PARAMETERS v34; // rbx
  char *v35; // rsi
  _RTL_USER_PROCESS_PARAMETERS *v36; // rsi
  int v37; // eax
  __int64 v38; // r9
  size_t v40; // r8
  char v41; // [rsp+20h] [rbp-40h]
  unsigned __int64 v42; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *v43; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v44; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v45; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v46; // [rsp+48h] [rbp-18h]
  unsigned __int16 *v47; // [rsp+50h] [rbp-10h]
  _WORD *v48; // [rsp+58h] [rbp-8h]

  if ( (a12 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v43 = ProcessParameters;
  if ( (int)ValidateStringParameter(a2) < 0 || v15 && (int)ValidateStringParameter(v15) < 0 )
    return 3221225485LL;
  v41 = 0;
  v17 = 0LL;
  if ( !v16 )
    goto LABEL_11;
  v17 = (unsigned __int64)*v16 >> 1;
  if ( (int)ValidateStringParameter(v16) < 0 || !v17 )
    return 3221225485LL;
  if ( *(_WORD *)(*(_QWORD *)(v19 + 8) + 2 * v17 - 2) == v18 )
    goto LABEL_11;
  if ( v17 > 0x103 )
    return 3221225485LL;
  v41 = 1;
LABEL_11:
  if ( a5 && (int)ValidateStringParameter(a5) < 0 )
    return 3221225485LL;
  v20 = a7;
  if ( a7 )
  {
    if ( (int)ValidateStringParameter(a7) < 0 )
      return 3221225485LL;
  }
  v21 = a8;
  if ( a8 )
  {
    if ( (int)ValidateStringParameter(a8) < 0 )
      return 3221225485LL;
  }
  v22 = a9;
  if ( a9 )
  {
    if ( (int)ValidateStringParameter(a9) < 0 )
      return 3221225485LL;
  }
  v23 = a10;
  if ( a10 )
  {
    if ( (int)ValidateStringParameter(a10) < 0 )
      return 3221225485LL;
  }
  if ( a11 && (int)ValidateStringParameter(a11) < 0 )
    return 3221225485LL;
  v24 = &RtlpNullString;
  v25 = a2;
  v26 = (unsigned __int16 *)&RtlpNullString;
  if ( a5 )
    v25 = a5;
  v44 = v25;
  if ( v20 )
    v26 = (unsigned __int16 *)v20;
  v45 = v26;
  v27 = (unsigned __int16 *)&RtlpNullString;
  if ( v21 )
    v27 = (unsigned __int16 *)v21;
  v28 = (unsigned __int16 *)&RtlpNullString;
  v46 = v27;
  v29 = v26[1];
  if ( v22 )
    v28 = (unsigned __int16 *)v22;
  v47 = v28;
  if ( v23 )
    v24 = (_WORD *)v23;
  v48 = v24;
  v30 = ((v27[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v28[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v29 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*v25 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1608;
  if ( *v24 )
    v30 += ((unsigned __int16)v24[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a3 )
    v30 += (*(unsigned __int16 *)(a3 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a11 )
    v30 += (*(unsigned __int16 *)(a11 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Src )
    BlockSize = RtlpGetBlockSizeEx(Src, 1LL);
  else
    BlockSize = ProcessParameters->EnvironmentSize;
  for ( i = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL; ; i = v42 )
  {
    if ( i < BlockSize || i + v30 < v30 )
      return 3221225621LL;
    Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, i + v30);
    v34 = Heap;
    if ( !Heap )
      return 3221225626LL;
    if ( Src )
    {
      memmove((char *)Heap + v30, Src, BlockSize);
      v35 = (char *)v34 + v30;
      goto LABEL_46;
    }
    RtlEnterCriticalSection(&FastPebLock);
    BlockSize = v43->EnvironmentSize;
    v42 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( BlockSize <= i )
      break;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v34);
  }
  v40 = BlockSize;
  v35 = (char *)v34 + v30;
  memmove((char *)v34 + v30, v43->Environment, v40);
  RtlLeaveCriticalSection(&FastPebLock);
  i = v42;
LABEL_46:
  memset(v34, 0, sizeof(_RTL_USER_PROCESS_PARAMETERS));
  v34->Environment = v35;
  v36 = v43;
  v34->MaximumLength = v30;
  v34->Length = v30;
  v34->EnvironmentSize = i;
  v42 = (unsigned __int64)&v34[1];
  v34->Flags = 1;
  v34->ConsoleFlags = v36->ConsoleFlags & 1;
  if ( a4 )
  {
    RtlpCopyProcString(&v42, &v34->CurrentDirectory, a4, 520LL);
    if ( v41 )
    {
      v34->CurrentDirectory.DosPath.Buffer[v17] = 92;
      v34->CurrentDirectory.DosPath.Length += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection(&FastPebLock);
    RtlpCopyProcString(&v42, &v34->CurrentDirectory, &v36->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection(&FastPebLock);
  }
  if ( a3 )
    RtlpCopyProcString(&v42, &v34->DllPath, a3, *(unsigned __int16 *)(a3 + 2));
  if ( a11 )
    RtlpCopyProcString(&v42, &v34->RedirectionDllName, a11, *(unsigned __int16 *)(a11 + 2));
  RtlpCopyProcString(&v42, &v34->ImagePathName, a2, (unsigned int)*a2 + 2);
  v37 = *v44;
  if ( (_WORD)v37 == v44[1] )
    v38 = v44[1];
  else
    v38 = (unsigned int)(v37 + 2);
  RtlpCopyProcString(&v42, &v34->CommandLine, v44, v38);
  RtlpCopyProcString(&v42, &v34->WindowTitle, v45, v45[1]);
  RtlpCopyProcString(&v42, &v34->DesktopInfo, v46, v46[1]);
  RtlpCopyProcString(&v42, &v34->ShellInfo, v47, v47[1]);
  if ( *v48 )
    RtlpCopyProcString(&v42, &v34->RuntimeData, v48, (unsigned __int16)v48[1]);
  if ( (a12 & 1) == 0 )
    v34 = RtlDeNormalizeProcessParams(v34);
  *a1 = v34;
  return 0LL;
}
