/*
 * XREFs of sub_14053A460 @ 0x14053A460
 * Callers:
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     sub_14032A7D0 @ 0x14032A7D0 (sub_14032A7D0.c)
 * Callees:
 *     FsRtlIsNtstatusExpected @ 0x140247160 (FsRtlIsNtstatusExpected.c)
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 */

PVOID __fastcall sub_14053A460(void *a1, PMDL *a2, ULONG a3, int a4, int *a5)
{
  PVOID MappedSystemVa; // rsi
  PMDL Mdl; // rax
  PMDL v9; // rbx
  int v10; // ecx

  MappedSystemVa = 0LL;
  *a5 = 0;
  Mdl = IoAllocateMdl(a1, a3, 0, 0, 0LL);
  v9 = Mdl;
  if ( !Mdl )
  {
    *a5 = -1073741670;
LABEL_10:
    if ( v9 )
    {
      MmUnlockPages(v9);
      IoFreeMdl(v9);
      v9 = 0LL;
    }
    goto LABEL_12;
  }
  sub_14029C5B0(Mdl, 0, a4 != 0);
  v10 = *a5;
  if ( *a5 < 0 )
    goto LABEL_10;
  if ( (v9->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = v9->MappedSystemVa;
  }
  else
  {
    MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000000u);
    v10 = *a5;
  }
  if ( !MappedSystemVa )
  {
    v10 = -1073741670;
    *a5 = -1073741670;
  }
  if ( v10 < 0 )
    goto LABEL_10;
LABEL_12:
  *a2 = v9;
  return MappedSystemVa;
}
