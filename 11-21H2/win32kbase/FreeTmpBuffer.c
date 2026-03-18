/*
 * XREFs of FreeTmpBuffer @ 0x1C0030FE0
 * Callers:
 *     NtGdiExtCreateRegion @ 0x1C0030EC0 (NtGdiExtCreateRegion.c)
 *     NtGdiOpenDCW @ 0x1C0071250 (NtGdiOpenDCW.c)
 *     NtGdiGetRegionData @ 0x1C008B350 (NtGdiGetRegionData.c)
 *     NtGdiPolyPolyDraw @ 0x1C00949C0 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     ?LookUpAndRemove@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z @ 0x1C017A3C0 (-LookUpAndRemove@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAXPEAPEAX@Z.c)
 *     ?Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C017B0D8 (-Remove@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z.c)
 *     ?Remove@?$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBackTrace@2@@NSInstrumentation@@QEAA_NQEBVCBackTraceStorageUnit@2@@Z @ 0x1C017BA3C (-Remove@-$CSharedStorage@VCBackTraceBucket@NSInstrumentation@@$$CCJVCBackTraceStorageUnit@2@VCBa.c)
 */

void __fastcall FreeTmpBuffer(char *a1)
{
  char *v1; // rbx
  __int64 v2; // rax
  char **v3; // rcx
  NSInstrumentation::CPrioritizedWriterLock **v4; // rdi
  NSInstrumentation::CPointerHashTable *v5; // rcx
  NSInstrumentation::CPrioritizedWriterLock *v6; // rcx
  char *v7; // rcx
  struct NSInstrumentation::CBackTraceStorageUnit *v8; // [rsp+30h] [rbp+8h] BYREF
  char *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 == gpTmpGlobal )
  {
    *(_QWORD *)gpTmpGlobalFree = a1;
  }
  else
  {
    v1 = a1 - 32;
    if ( a1 != (char *)32 )
    {
      KeEnterCriticalRegion();
      v2 = *(_QWORD *)v1;
      if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v3 = (char **)*((_QWORD *)v1 + 1), *v3 != v1) )
        __fastfail(3u);
      *v3 = (char *)v2;
      *(_QWORD *)(v2 + 8) = v3;
      *((_QWORD *)v1 + 1) = v1;
      *(_QWORD *)v1 = v1;
      KeLeaveCriticalRegion();
      v4 = (NSInstrumentation::CPrioritizedWriterLock **)gpLeakTrackingAllocator;
      v9 = v1;
      v8 = 0LL;
      v5 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)gpLeakTrackingAllocator + 6);
      if ( v5
        && ((unsigned __int16)v1 & 0xFFFu) >= 0x10uLL
        && NSInstrumentation::CPointerHashTable::Remove(v5, v1 - 16, (void **)&v8) )
      {
        NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
          v4[8],
          v8);
        v7 = v1 - 16;
      }
      else
      {
        v6 = v4[7];
        if ( v6 )
        {
          if ( (unsigned __int8)NSInstrumentation::CSortedVector<void *,void *>::LookUpAndRemove(v6, &v9, &v8) )
            NSInstrumentation::CSharedStorage<NSInstrumentation::CBackTraceBucket,long volatile,NSInstrumentation::CBackTraceStorageUnit,NSInstrumentation::CBackTrace>::Remove(
              v4[8],
              v8);
        }
        v7 = v1;
      }
      ExFreePoolWithTag(v7, 0);
    }
  }
}
