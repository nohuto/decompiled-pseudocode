/*
 * XREFs of RtlCreateProcessParametersInternal @ 0x180057F70
 * Callers:
 *     RtlCreateProcessParametersEx @ 0x180057DC0 (RtlCreateProcessParametersEx.c)
 *     RtlCreateProcessParametersWithTemplate @ 0x180057E40 (RtlCreateProcessParametersWithTemplate.c)
 *     RtlCreateProcessParameters @ 0x1800E1890 (RtlCreateProcessParameters.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800271F0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpCopyProcString @ 0x180058480 (RtlpCopyProcString.c)
 *     ValidateStringParameter @ 0x180058520 (ValidateStringParameter.c)
 *     RtlpGetBlockSizeEx @ 0x180058810 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlDeNormalizeProcessParams @ 0x1800E1900 (RtlDeNormalizeProcessParams.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateProcessParametersInternal(
        PRTL_USER_PROCESS_PARAMETERS *a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        void *Src,
        unsigned __int16 *a7,
        unsigned __int16 *a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12)
{
  int v14; // eax
  __int64 v15; // r8
  unsigned __int16 *v16; // r9
  _WORD *v17; // r10
  unsigned __int16 *v18; // r11
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r13
  _WORD *v21; // rdx
  unsigned __int16 *v22; // rax
  unsigned __int16 *v23; // r9
  unsigned __int16 *v24; // rdi
  unsigned __int16 *v25; // rbx
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  size_t BlockSize; // rsi
  unsigned __int64 i; // r14
  _RTL_USER_PROCESS_PARAMETERS *Heap; // rax
  PRTL_USER_PROCESS_PARAMETERS v31; // rbx
  size_t v32; // r8
  char *v33; // rsi
  _RTL_USER_PROCESS_PARAMETERS *v34; // rsi
  int v35; // eax
  __int64 v36; // r9
  __int64 v38; // r9
  char v39; // [rsp+20h] [rbp-40h]
  unsigned __int64 v40; // [rsp+28h] [rbp-38h] BYREF
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // [rsp+30h] [rbp-30h]
  unsigned __int16 *v42; // [rsp+38h] [rbp-28h]
  unsigned __int16 *v43; // [rsp+40h] [rbp-20h]
  unsigned __int16 *v44; // [rsp+48h] [rbp-18h]
  unsigned __int16 *v45; // [rsp+50h] [rbp-10h]
  _WORD *v46; // [rsp+58h] [rbp-8h]

  if ( (a12 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v14 = ValidateStringParameter(a2);
  v19 = 0LL;
  if ( v14 < 0 || a3 && (int)ValidateStringParameter(a3) < 0 )
    return 3221225485LL;
  v39 = v19;
  v20 = v19;
  if ( !v16 )
    goto LABEL_6;
  v20 = (unsigned __int64)*v16 >> 1;
  if ( (int)ValidateStringParameter(v16) < 0 || !v20 )
    return 3221225485LL;
  if ( *(_WORD *)(*(_QWORD *)(v38 + 8) + 2 * v20 - 2) == 92 )
    goto LABEL_6;
  if ( v20 > 0x103 )
    return 3221225485LL;
  v39 = 1;
LABEL_6:
  if ( a5 && (int)ValidateStringParameter(a5) < 0
    || a7 && (int)ValidateStringParameter(a7) < 0
    || a8 && (int)ValidateStringParameter(a8) < 0
    || v18 && (int)ValidateStringParameter(v18) < 0
    || v17 && (int)ValidateStringParameter(v17) < 0
    || a11 && (int)ValidateStringParameter(a11) < 0 )
  {
    return 3221225485LL;
  }
  v21 = &RtlpNullString;
  v22 = (unsigned __int16 *)&RtlpNullString;
  v23 = a2;
  if ( a5 )
    v23 = a5;
  v42 = v23;
  if ( a7 )
    v22 = a7;
  v43 = v22;
  v24 = (unsigned __int16 *)&RtlpNullString;
  if ( a8 )
    v24 = a8;
  v25 = (unsigned __int16 *)&RtlpNullString;
  v44 = v24;
  v26 = v22[1];
  if ( v18 )
    v25 = v18;
  v45 = v25;
  if ( v17 )
    v21 = v17;
  v46 = v21;
  v27 = ((v24[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*v23 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v25[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL)
      + ((*a2 + 9LL) & 0xFFFFFFFFFFFFFFF8uLL)
      + 1616;
  if ( *v21 )
    v27 += ((unsigned __int16)v21[1] + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a3 )
    v27 += (*(unsigned __int16 *)(a3 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( a11 )
    v27 += (*(unsigned __int16 *)(a11 + 2) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( Src )
    BlockSize = RtlpGetBlockSizeEx(Src, 1LL);
  else
    BlockSize = *(_QWORD *)(v15 + 1008);
  for ( i = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL; ; i = v40 )
  {
    if ( i < BlockSize || i + v27 < v27 )
      return 3221225621LL;
    Heap = (_RTL_USER_PROCESS_PARAMETERS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, i + v27);
    v31 = Heap;
    if ( !Heap )
      return 3221225626LL;
    if ( Src )
      break;
    RtlEnterCriticalSection(&FastPebLock);
    BlockSize = ProcessParameters->EnvironmentSize;
    v40 = (BlockSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( BlockSize <= i )
    {
      v32 = BlockSize;
      v33 = (char *)v31 + v27;
      memmove((char *)v31 + v27, ProcessParameters->Environment, v32);
      RtlLeaveCriticalSection(&FastPebLock);
      i = v40;
      goto LABEL_42;
    }
    RtlLeaveCriticalSection(&FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v31);
  }
  memmove((char *)Heap + v27, Src, BlockSize);
  v33 = (char *)v31 + v27;
LABEL_42:
  memset_thunk_772440563353939046(v31, 0, 0x448uLL);
  v31->Environment = v33;
  v34 = ProcessParameters;
  v31->MaximumLength = v27;
  v31->Length = v27;
  v31->EnvironmentSize = i;
  v40 = (unsigned __int64)&v31[1];
  v31->Flags = 1;
  v31->ConsoleFlags = v34->ConsoleFlags & 1;
  if ( a4 )
  {
    RtlpCopyProcString(&v40, &v31->CurrentDirectory, a4, 520LL);
    if ( v39 )
    {
      v31->CurrentDirectory.DosPath.Buffer[v20] = 92;
      v31->CurrentDirectory.DosPath.Length += 2;
    }
  }
  else
  {
    RtlEnterCriticalSection(&FastPebLock);
    RtlpCopyProcString(&v40, &v31->CurrentDirectory, &v34->CurrentDirectory, 520LL);
    RtlLeaveCriticalSection(&FastPebLock);
  }
  if ( a3 )
    RtlpCopyProcString(&v40, &v31->DllPath, a3, *(unsigned __int16 *)(a3 + 2));
  if ( a11 )
    RtlpCopyProcString(&v40, &v31->RedirectionDllName, a11, *(unsigned __int16 *)(a11 + 2));
  RtlpCopyProcString(&v40, &v31->ImagePathName, a2, (unsigned int)*a2 + 2);
  v35 = *v42;
  if ( (_WORD)v35 == v42[1] )
    v36 = v42[1];
  else
    v36 = (unsigned int)(v35 + 2);
  RtlpCopyProcString(&v40, &v31->CommandLine, v42, v36);
  RtlpCopyProcString(&v40, &v31->WindowTitle, v43, v43[1]);
  RtlpCopyProcString(&v40, &v31->DesktopInfo, v44, v44[1]);
  RtlpCopyProcString(&v40, &v31->ShellInfo, v45, v45[1]);
  if ( *v46 )
    RtlpCopyProcString(&v40, &v31->RuntimeData, v46, (unsigned __int16)v46[1]);
  if ( (a12 & 1) == 0 )
    v31 = RtlDeNormalizeProcessParams(v31);
  *a1 = v31;
  return 0LL;
}
