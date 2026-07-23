/*
 * XREFs of sub_140933A9C @ 0x140933A9C
 * Callers:
 *     ntoskrnl_30 @ 0x140938B40 (ntoskrnl_30.c)
 * Callees:
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_1405570D0 @ 0x1405570D0 (sub_1405570D0.c)
 */

__int64 __fastcall sub_140933A9C(void *a1, ULONG a2, __int64 a3, __int64 a4, struct _MDL **a5, _QWORD *a6)
{
  unsigned int v6; // edi
  struct _MDL *Mdl; // rax
  struct _MDL *v8; // rbx
  PVOID MappedSystemVa; // rax

  v6 = 0;
  Mdl = IoAllocateMdl(a1, a2, 0, 0, 0LL);
  v8 = Mdl;
  if ( Mdl )
  {
    MmProbeAndLockPages(Mdl, 0, IoWriteAccess);
    if ( a6 )
    {
      if ( (v8->MdlFlags & 5) != 0 )
        MappedSystemVa = v8->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000010u);
      *a6 = MappedSystemVa;
    }
    *a5 = v8;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
