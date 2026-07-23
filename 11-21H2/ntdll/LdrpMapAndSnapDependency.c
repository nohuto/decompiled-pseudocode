/*
 * XREFs of LdrpMapAndSnapDependency @ 0x18003D014
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18004CD54 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180034354 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpShouldModuleImportBeRedirected @ 0x18003B720 (LdrpShouldModuleImportBeRedirected.c)
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpLoadDependentModuleA @ 0x18003D360 (LdrpLoadDependentModuleA.c)
 *     LdrpFreeUnicodeString @ 0x180051B14 (LdrpFreeUnicodeString.c)
 *     LdrpQueueWork @ 0x1800559C0 (LdrpQueueWork.c)
 *     LdrpFindDllActivationContext @ 0x180077370 (LdrpFindDllActivationContext.c)
 *     LdrpGetImportDescriptorForSnap @ 0x18007B978 (LdrpGetImportDescriptorForSnap.c)
 *     LdrpQueryCurrentPatch @ 0x1800DA4E0 (LdrpQueryCurrentPatch.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB68C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLoadDependentModuleW @ 0x1800E1870 (LdrpLoadDependentModuleW.c)
 */

int *__fastcall LdrpMapAndSnapDependency(__int64 a1)
{
  __int64 v1; // r14
  bool v2; // zf
  char v4; // si
  int DllActivationContext; // edi
  __int64 v6; // rdx
  unsigned int *v7; // r8
  unsigned int v8; // r13d
  __int64 v9; // rcx
  __int64 ImportDescriptorForSnap; // rax
  __int64 v11; // r15
  unsigned int v12; // r12d
  unsigned int v13; // eax
  PVOID Heap; // rax
  unsigned int v15; // r12d
  _DWORD *v16; // r15
  __int64 v17; // rcx
  char *v18; // rcx
  unsigned __int64 v19; // rax
  int DependentModuleW; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  int *result; // rax
  __int128 v24; // [rsp+30h] [rbp-20h] BYREF
  ANSI_STRING SourceString; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp+30h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v2 = (*(_DWORD *)(a1 + 32) & 0x800000) == 0;
  v4 = 0;
  v24 = 0LL;
  if ( !v2
    || *(_DWORD *)(v1 + 268) == 9
    || (DllActivationContext = LdrpFindDllActivationContext(v1), DllActivationContext >= 0) )
  {
    DllActivationContext = LdrpPrepareImportAddressTableForSnap(a1);
    if ( DllActivationContext >= 0 )
    {
      v8 = 0;
      if ( LdrpIsHotPatchingEnabled )
      {
        v9 = *(_QWORD *)(a1 + 56);
        if ( v9 )
        {
          DllActivationContext = LdrpQueryCurrentPatch(*(unsigned int *)(v9 + 288), *(unsigned int *)(v9 + 128), &v24);
          if ( DllActivationContext < 0 )
            goto LABEL_52;
          if ( (_WORD)v24 )
            v4 = 1;
        }
      }
      if ( *(_QWORD *)(a1 + 112) || v4 )
      {
        if ( LdrpShouldModuleImportBeRedirected(v1) )
          *(_DWORD *)(a1 + 32) |= 0x2000000u;
        ImportDescriptorForSnap = LdrpGetImportDescriptorForSnap(a1);
        v11 = ImportDescriptorForSnap;
        v12 = 0;
        if ( ImportDescriptorForSnap )
        {
          v7 = (unsigned int *)(ImportDescriptorForSnap + 16);
          do
          {
            if ( !*(v7 - 1) )
              break;
            v13 = *v7;
            if ( !*v7 )
              break;
            v6 = v8 + 1;
            v7 += 5;
            ++v12;
            if ( !*(_QWORD *)(v13 + *(_QWORD *)(v1 + 48)) )
              v6 = v8;
            v8 = v6;
          }
          while ( v7 != (unsigned int *)16 );
          if ( v8 )
            goto LABEL_23;
        }
        if ( v4 )
        {
LABEL_23:
          Heap = RtlAllocateHeap(LdrpHeap, (NtdllBaseTag + 1572864) | 8, 8LL * v12);
          *(_QWORD *)(a1 + 88) = Heap;
          if ( Heap )
          {
            *(_DWORD *)(a1 + 104) = v12;
            *(_DWORD *)(a1 + 108) = v8 + 1;
            *(_QWORD *)(a1 + 136) = v11;
            if ( v4 )
              *(_DWORD *)(a1 + 108) = v8 + 2;
            BaseAddress = 0LL;
            v15 = 0;
            if ( v11 )
            {
              v16 = (_DWORD *)(v11 + 16);
              while ( *(v16 - 1) && *v16 )
              {
                v6 = *(_QWORD *)(v1 + 48);
                if ( *(_QWORD *)((unsigned int)*v16 + v6) )
                {
                  v17 = (unsigned int)*(v16 - 1);
                  v2 = v6 + v17 == 0;
                  v18 = (char *)(v6 + v17);
                  *(_QWORD *)&SourceString.Length = 0LL;
                  SourceString.Buffer = v18;
                  if ( !v2 )
                  {
                    v19 = -1LL;
                    do
                      ++v19;
                    while ( v18[v19] );
                    if ( v19 > 0xFFFE )
                    {
                      DllActivationContext = -1073741562;
                      break;
                    }
                    SourceString.Length = v19;
                    SourceString.MaximumLength = v19 + 1;
                  }
                  DllActivationContext = LdrpLoadDependentModuleA(
                                           &SourceString,
                                           *(_QWORD *)(a1 + 88) + 8LL * v15,
                                           (__int64)&BaseAddress);
                  if ( DllActivationContext < 0 )
                    break;
                }
                v16 += 5;
                ++v15;
                if ( v16 == (_DWORD *)16 )
                  break;
              }
            }
            if ( v4 )
            {
              DependentModuleW = LdrpLoadDependentModuleW((unsigned int)&v24, a1, v1, 0, a1 + 96, (__int64)&BaseAddress);
              DllActivationContext = DependentModuleW;
              if ( DependentModuleW < 0 )
                LdrpLogEtwHotPatchStatus(LdrpImageEntry + 88, v1, (unsigned int)&v24, DependentModuleW, 5);
            }
            v7 = (unsigned int *)BaseAddress;
            if ( BaseAddress )
              RtlFreeHeap(LdrpHeap, 0, BaseAddress);
            if ( DllActivationContext >= 0 )
            {
              RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
              v8 = --*(_DWORD *)(a1 + 108);
              RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
            }
          }
          else
          {
            DllActivationContext = -1073741801;
          }
        }
      }
      v21 = *(_QWORD *)(a1 + 112);
      if ( !v21 && v4 )
      {
        v22 = *(_QWORD *)(v1 + 152);
LABEL_51:
        *(_DWORD *)(v22 + 56) = 5;
        goto LABEL_52;
      }
      if ( !v8 )
      {
        v22 = *(_QWORD *)(v1 + 152);
        if ( v21 )
        {
          *(_DWORD *)(v22 + 56) = 4;
          if ( *(_QWORD *)(a1 + 48) )
            LdrpQueueWork(a1, v6, v7, 0LL);
          else
            DllActivationContext = LdrpSnapModule(a1);
          goto LABEL_52;
        }
        goto LABEL_51;
      }
    }
  }
LABEL_52:
  result = (int *)LdrpFreeUnicodeString(&v24);
  if ( DllActivationContext < 0 )
  {
    result = *(int **)(a1 + 40);
    *result = DllActivationContext;
  }
  return result;
}
