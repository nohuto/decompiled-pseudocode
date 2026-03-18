/*
 * XREFs of ?Lookup@CPointerHashTable@NSInstrumentation@@QEAA_NPEBXPEAPEAX@Z @ 0x1C00DDC90
 * Callers:
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C00DDC54 (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 * Callees:
 *     ?ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ @ 0x1C00FA4B8 (-ReleaseShared@CPrioritizedWriterLock@NSInstrumentation@@QEAAXXZ.c)
 */

char __fastcall NSInstrumentation::CPointerHashTable::Lookup(
        NSInstrumentation::CPointerHashTable *this,
        unsigned __int64 a2,
        void **a3)
{
  PVOID v3; // rbx
  char v6; // si
  char v7; // di
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned int v10; // r11d
  unsigned __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // r10

  v3 = UmfdAllocation::s_allocationLookup;
  v6 = 1;
  _InterlockedAdd((volatile signed __int32 *)UmfdAllocation::s_allocationLookup + 6, 1u);
  v7 = 0;
  while ( *((_DWORD *)v3 + 7) )
  {
    NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0LL);
    ExReleasePushLockSharedEx(v3, 0LL);
    KeLeaveCriticalRegion();
    _InterlockedAdd((volatile signed __int32 *)v3 + 6, 1u);
  }
  if ( *((_DWORD *)v3 + 12)
    && ((v8 = 0x9E3779B97F34A803uLL * (a2 >> 4), (*((_BYTE *)v3 + 52) & 1) == 0) || *(_QWORD *)a2 == v8) )
  {
    v9 = *((_DWORD *)v3 + 10);
    v10 = 0;
    v11 = v8 >> (64 - *((_BYTE *)v3 + 44));
    while ( 1 )
    {
      v12 = v11;
      if ( (unsigned int)v11 < v9 )
        break;
LABEL_10:
      ++v10;
      v9 = v11;
      LODWORD(v11) = 0;
      if ( v10 >= 2 )
        goto LABEL_11;
    }
    v13 = *((_QWORD *)v3 + 4);
    while ( *(_QWORD *)(v13 + 16LL * v12) != a2 )
    {
      if ( ++v12 >= v9 )
        goto LABEL_10;
    }
    *a3 = *(void **)(v13 + 16LL * v12 + 8);
  }
  else
  {
    v6 = 0;
  }
  v7 = v6;
LABEL_11:
  NSInstrumentation::CPrioritizedWriterLock::ReleaseShared((NSInstrumentation::CPrioritizedWriterLock *)v3);
  return v7;
}
