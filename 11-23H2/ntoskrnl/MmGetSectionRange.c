/*
 * XREFs of MmGetSectionRange @ 0x140A30928
 * Callers:
 *     PoSetHiberRange @ 0x14058ED90 (PoSetHiberRange.c)
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     RtlImageNtHeader @ 0x140214B30 (RtlImageNtHeader.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D750 (ExAcquireResourceSharedLite.c)
 */

__int64 __fastcall MmGetSectionRange(unsigned __int64 a1, unsigned __int64 *a2, unsigned int *a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v7; // ebx
  _QWORD *v8; // rax
  _QWORD *v9; // rbp
  void *v10; // rcx
  unsigned __int64 v11; // rdi
  PIMAGE_NT_HEADERS v12; // rax
  int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int v15; // r8d
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rdx

  CurrentThread = KeGetCurrentThread();
  v7 = -1073741275;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v8 = MiLookupDataTableEntry(a1, 0);
  v9 = v8;
  if ( v8 )
  {
    v10 = (void *)v8[6];
    v11 = a1 - (_QWORD)v10;
    v12 = RtlImageNtHeader(v10);
    v13 = 0;
    if ( v12->FileHeader.NumberOfSections )
    {
      v14 = (unsigned int *)((char *)&v12->OptionalHeader.SizeOfInitializedData + v12->FileHeader.SizeOfOptionalHeader);
      while ( 1 )
      {
        v15 = v14[2];
        v16 = v14[1];
        if ( v15 < *v14 )
          v15 = *v14;
        if ( v11 >= v16 && v11 < v15 + (unsigned int)v16 )
          break;
        v14 += 10;
        if ( ++v13 >= (unsigned int)v12->FileHeader.NumberOfSections )
          goto LABEL_11;
      }
      v17 = v16 + v9[6];
      *a3 = v15;
      *a2 = v17;
      v7 = 0;
    }
  }
LABEL_11:
  ExReleaseResourceLite(&PsLoadedModuleResource);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v7;
}
