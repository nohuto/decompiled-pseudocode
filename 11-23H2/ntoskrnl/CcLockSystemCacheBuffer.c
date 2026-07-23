/*
 * XREFs of CcLockSystemCacheBuffer @ 0x140537CB0
 * Callers:
 *     CcCopyBytesToUserBuffer @ 0x140262440 (CcCopyBytesToUserBuffer.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14027D1F0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x1402AD270 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CADA0 (MmUnlockPages.c)
 *     IopAllocateMdl @ 0x1402FC37C (IopAllocateMdl.c)
 *     MiProbeAndLockPages @ 0x1402FC500 (MiProbeAndLockPages.c)
 *     FsRtlIsNtstatusExpected @ 0x140359EA0 (FsRtlIsNtstatusExpected.c)
 */

PVOID __fastcall CcLockSystemCacheBuffer(__int64 a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5)
{
  int v5; // r14d
  PVOID v7; // rsi
  __int64 Mdl; // rax
  __int64 v9; // rbx
  int v10; // ecx

  v5 = a4;
  v7 = 0LL;
  *a5 = 0;
  Mdl = IopAllocateMdl(a1, a3, 0, a4, 0LL, 0);
  v9 = Mdl;
  if ( !Mdl )
    goto LABEL_7;
  MiProbeAndLockPages(Mdl, 0, v5 != 0);
  v10 = *a5;
  if ( *a5 >= 0 )
  {
    if ( (*(_BYTE *)(v9 + 10) & 5) != 0 )
    {
      v7 = *(PVOID *)(v9 + 24);
    }
    else
    {
      v7 = MmMapLockedPagesSpecifyCache((PMDL)v9, 0, MmCached, 0LL, 0, 0x40000000u);
      v10 = *a5;
    }
    if ( v7 )
    {
LABEL_8:
      if ( v10 >= 0 )
        goto LABEL_11;
      goto LABEL_9;
    }
LABEL_7:
    v10 = -1073741670;
    *a5 = -1073741670;
    goto LABEL_8;
  }
LABEL_9:
  if ( v9 )
  {
    MmUnlockPages((PMDL)v9);
    IoFreeMdl((PMDL)v9);
    v9 = 0LL;
  }
LABEL_11:
  *a2 = v9;
  return v7;
}
