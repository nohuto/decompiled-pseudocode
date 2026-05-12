/*
 * XREFs of RaidBusEnumeratorAllocateReportLunsResources @ 0x1C001C2D8
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C001B058 (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     RaidPrepareSrbForReuse @ 0x1C00869B4 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorAllocateReportLunsResources(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  void *v5; // rcx
  __int64 v6; // rdi
  __int64 Srb; // rax
  __int64 Pool; // rax
  PIRP Irp; // rax
  void *v10; // rcx
  void *v11; // rax
  struct _MDL *v12; // rcx
  PMDL Mdl; // rax

  v3 = *a1;
  v5 = *(void **)(a3 + 16);
  v6 = a2;
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
  }
  else
  {
    Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0, *(_BYTE *)(v3 + 442), 1);
    *(_QWORD *)(a3 + 16) = Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a3 + 24) )
  {
    Pool = RaidAllocatePool(64LL, 18LL, 1314087250LL, *(_QWORD *)(v3 + 8));
    *(_QWORD *)(a3 + 24) = Pool;
    if ( !Pool )
      return 3221225495LL;
  }
  if ( *(_QWORD *)a3 )
  {
    IoReuseIrp(*(PIRP *)a3, -1073741823);
  }
  else
  {
    Irp = IoAllocateIrp(1, 0);
    *(_QWORD *)a3 = Irp;
    if ( !Irp )
      return 3221225495LL;
  }
  v10 = *(void **)(a3 + 32);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x6C526152u);
  v11 = (void *)RaidAllocatePool(64LL, v6, 1817338194LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a3 + 32) = v11;
  if ( v11 )
  {
    v12 = *(struct _MDL **)(a3 + 8);
    *(_DWORD *)(a3 + 40) = v6;
    if ( v12 )
    {
      IoFreeMdl(v12);
      v11 = *(void **)(a3 + 32);
      LODWORD(v6) = *(_DWORD *)(a3 + 40);
    }
    Mdl = IoAllocateMdl(v11, v6, 0, 0, 0LL);
    *(_QWORD *)(a3 + 8) = Mdl;
    if ( Mdl )
      return 0LL;
  }
  return 3221225495LL;
}
