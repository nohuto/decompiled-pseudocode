/*
 * XREFs of RaidBusEnumeratorAllocateReportLunsResources @ 0x1C001634C
 * Callers:
 *     RaidBusEnumeratorIssueReportLuns @ 0x1C0016248 (RaidBusEnumeratorIssueReportLuns.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidPrepareSrbForReuse @ 0x1C00A0450 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorAllocateReportLunsResources(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  void *v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rdi
  __int64 Srb; // rax
  __int64 Pool; // rax
  PIRP Irp; // rax
  void *v11; // rcx
  __int64 v12; // rax
  struct _MDL *v13; // rcx
  PMDL Mdl; // rax

  v3 = *a1;
  v5 = *(void **)(a3 + 16);
  v6 = a2;
  v7 = (__int64 *)(v3 + 8);
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
  }
  else
  {
    Srb = RaidAllocateSrb(*v7, 0, *(_BYTE *)(v3 + 442), 1);
    *(_QWORD *)(a3 + 16) = Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a3 + 24) )
  {
    Pool = RaidAllocatePool(64LL, 18LL, 1314087250LL, *v7);
    *(_QWORD *)(a3 + 24) = Pool;
    if ( !Pool )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)a3 )
  {
    Irp = IoAllocateIrp(1, 0);
    *(_QWORD *)a3 = Irp;
    if ( Irp )
      goto LABEL_7;
    return 3221225495LL;
  }
  IoReuseIrp(*(PIRP *)a3, -1073741823);
LABEL_7:
  v11 = *(void **)(a3 + 32);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x6C526152u);
  v12 = RaidAllocatePool(64LL, v6, 1817338194LL, *v7);
  *(_QWORD *)(a3 + 32) = v12;
  if ( !v12 )
    return 3221225495LL;
  v13 = *(struct _MDL **)(a3 + 8);
  *(_DWORD *)(a3 + 40) = v6;
  if ( v13 )
    IoFreeMdl(v13);
  Mdl = IoAllocateMdl(*(PVOID *)(a3 + 32), *(_DWORD *)(a3 + 40), 0, 0, 0LL);
  *(_QWORD *)(a3 + 8) = Mdl;
  return Mdl == 0LL ? 0xC0000017 : 0;
}
