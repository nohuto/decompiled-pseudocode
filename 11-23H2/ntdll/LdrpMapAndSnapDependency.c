/*
 * XREFs of LdrpMapAndSnapDependency @ 0x180024A58
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18002C7AC (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x180011138 (LdrpFreeUnicodeString.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x180021B00 (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpSnapModule @ 0x180023EA0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleA @ 0x180024D30 (LdrpLoadDependentModuleA.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18002B270 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpFindDllActivationContext @ 0x180071BB0 (LdrpFindDllActivationContext.c)
 *     LdrpQueueWork @ 0x180073560 (LdrpQueueWork.c)
 *     LdrpGetImportDescriptorForSnap @ 0x18007648C (LdrpGetImportDescriptorForSnap.c)
 *     LdrpQueryCurrentPatch @ 0x1800D9F80 (LdrpQueryCurrentPatch.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB554 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLoadDependentModuleW @ 0x1800E13B0 (LdrpLoadDependentModuleW.c)
 */

_DWORD *__fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // r14
  bool v2; // zf
  char v4; // r15
  int DllActivationContext; // edi
  int v6; // esi
  __int64 ImportDescriptorForSnap; // rax
  unsigned int v8; // r12d
  __int64 v9; // r13
  _DWORD *v10; // rsi
  unsigned int *v11; // r8
  int v12; // r9d
  unsigned int v13; // eax
  int v14; // edx
  PVOID Heap; // rax
  int v16; // r9d
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  _DWORD *result; // rax
  __int64 v25; // rcx
  int DependentModuleW; // eax
  __int128 v27; // [rsp+30h] [rbp-20h] BYREF
  ANSI_STRING SourceString; // [rsp+40h] [rbp-10h] BYREF
  int v29; // [rsp+90h] [rbp+40h]
  PVOID BaseAddress; // [rsp+98h] [rbp+48h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v4 = 0;
  v27 = 0LL;
  if ( v2 && *(_DWORD *)(v1 + 268) != 9 )
  {
    DllActivationContext = LdrpFindDllActivationContext(v1);
    if ( DllActivationContext < 0 )
      goto LABEL_41;
  }
  DllActivationContext = LdrpPrepareImportAddressTableForSnap(a1);
  if ( DllActivationContext < 0 )
    goto LABEL_41;
  v6 = 0;
  v29 = 0;
  if ( LdrpIsHotPatchingEnabled )
  {
    v25 = *(_QWORD *)(a1 + 56);
    if ( v25 )
    {
      DllActivationContext = LdrpQueryCurrentPatch(*(unsigned int *)(v25 + 288), *(unsigned int *)(v25 + 128), &v27);
      if ( DllActivationContext < 0 )
        goto LABEL_41;
      if ( (_WORD)v27 )
        v4 = 1;
    }
  }
  if ( *(_QWORD *)(a1 + 112) || v4 )
  {
    if ( LdrpShouldModuleImportBeRedirected(v1) )
      *(_DWORD *)(a1 + 32) |= 0x2000000u;
    ImportDescriptorForSnap = LdrpGetImportDescriptorForSnap(a1);
    v8 = 0;
    v9 = ImportDescriptorForSnap;
    v10 = (_DWORD *)(ImportDescriptorForSnap + 16);
    if ( ImportDescriptorForSnap )
    {
      v11 = (unsigned int *)(ImportDescriptorForSnap + 16);
      v12 = 0;
      do
      {
        if ( !*(v11 - 1) )
          break;
        v13 = *v11;
        if ( !*v11 )
          break;
        v14 = v12 + 1;
        v11 += 5;
        ++v8;
        if ( !*(_QWORD *)(v13 + *(_QWORD *)(v1 + 48)) )
          v14 = v12;
        v12 = v14;
      }
      while ( v11 != (unsigned int *)16 );
      v29 = v12;
      if ( v12 )
        goto LABEL_17;
    }
    if ( v4 )
    {
LABEL_17:
      Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v8);
      *(_QWORD *)(a1 + 88) = Heap;
      if ( Heap )
      {
        *(_DWORD *)(a1 + 104) = v8;
        *(_QWORD *)(a1 + 136) = v9;
        *(_DWORD *)(a1 + 108) = v29 + 1;
        if ( v4 )
          *(_DWORD *)(a1 + 108) = v29 + 2;
        BaseAddress = 0LL;
        v17 = 0LL;
        if ( v9 )
        {
          while ( *(v10 - 1) && *v10 )
          {
            v18 = *(_QWORD *)(v1 + 48);
            if ( *(_QWORD *)((unsigned int)*v10 + v18) )
            {
              v19 = (unsigned int)*(v10 - 1);
              v2 = v18 + v19 == 0;
              v20 = (char *)(v18 + v19);
              *(_QWORD *)&SourceString.Length = 0LL;
              SourceString.Buffer = v20;
              if ( !v2 )
              {
                v21 = -1LL;
                do
                  ++v21;
                while ( v20[v21] );
                if ( v21 > 0xFFFE )
                {
                  DllActivationContext = -1073741562;
                  break;
                }
                SourceString.Length = v21;
                SourceString.MaximumLength = v21 + 1;
              }
              DllActivationContext = LdrpLoadDependentModuleA(
                                       &SourceString,
                                       *(_QWORD *)(a1 + 88) + 8 * v17,
                                       (__int64)&BaseAddress);
              if ( DllActivationContext < 0 )
                break;
            }
            v10 += 5;
            v17 = (unsigned int)(v17 + 1);
            if ( v10 == (_DWORD *)16 )
              break;
          }
        }
        if ( v4 )
        {
          DependentModuleW = LdrpLoadDependentModuleW((unsigned int)&v27, a1, v1, v16, a1 + 96, (__int64)&BaseAddress);
          DllActivationContext = DependentModuleW;
          if ( DependentModuleW < 0 )
            LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, v1, (unsigned int)&v27, DependentModuleW, 5);
        }
        if ( BaseAddress )
          RtlFreeHeap(LdrpHeap, 0, BaseAddress);
        if ( DllActivationContext >= 0 )
        {
          RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
          v6 = --*(_DWORD *)(a1 + 108);
          RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
          goto LABEL_36;
        }
      }
      else
      {
        DllActivationContext = -1073741801;
      }
    }
    v6 = v29;
  }
LABEL_36:
  v22 = *(_QWORD *)(a1 + 112);
  if ( v22 || !v4 )
  {
    if ( v6 )
      goto LABEL_41;
    v23 = *(_QWORD *)(v1 + 152);
    if ( v22 )
    {
      *(_DWORD *)(v23 + 56) = 4;
      if ( *(_QWORD *)(a1 + 48) )
        LdrpQueueWork(a1);
      else
        DllActivationContext = LdrpSnapModule(a1);
      goto LABEL_41;
    }
  }
  else
  {
    v23 = *(_QWORD *)(v1 + 152);
  }
  *(_DWORD *)(v23 + 56) = 5;
LABEL_41:
  result = (_DWORD *)LdrpFreeUnicodeString((__int64)&v27);
  if ( DllActivationContext < 0 )
  {
    result = *(_DWORD **)(a1 + 40);
    *result = DllActivationContext;
  }
  return result;
}
