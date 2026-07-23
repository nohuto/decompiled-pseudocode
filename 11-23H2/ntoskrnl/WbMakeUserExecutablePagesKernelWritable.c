/*
 * XREFs of WbMakeUserExecutablePagesKernelWritable @ 0x140765084
 * Callers:
 *     sub_140764B50 @ 0x140764B50 (sub_140764B50.c)
 *     WbAllocateMemoryBlock @ 0x1407A532C (WbAllocateMemoryBlock.c)
 * Callees:
 *     IoAllocateMdl @ 0x14022E3B0 (IoAllocateMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x1402FC188 (MmProbeAndLockPagesPrivate.c)
 */

__int64 __fastcall WbMakeUserExecutablePagesKernelWritable(void *a1, ULONG a2, PMDL *a3, _QWORD *a4)
{
  int v6; // esi
  unsigned int v7; // edi
  PMDL Mdl; // rax
  __int64 v9; // rdx
  PMDL v10; // rbx
  PVOID MappedSystemVa; // rax

  v6 = 0;
  v7 = 0;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v10 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPagesPrivate((__int64)Mdl, v9);
    v6 = 1;
    if ( (v10->MdlFlags & 5) != 0 )
      MappedSystemVa = v10->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(v10, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( MappedSystemVa )
    {
      if ( a4 )
        *a4 = MappedSystemVa;
      if ( a3 )
      {
        *a3 = v10;
        v10 = 0LL;
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741801;
  }
  if ( v10 )
  {
    if ( v6 )
      MmUnlockPages(v10);
    IoFreeMdl(v10);
  }
  return v7;
}
