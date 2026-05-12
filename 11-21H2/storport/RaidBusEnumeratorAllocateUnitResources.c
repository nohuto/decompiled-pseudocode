/*
 * XREFs of RaidBusEnumeratorAllocateUnitResources @ 0x1C001BD80
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C001B154 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C001B614 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C000F74C (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     RaidPrepareSrbForReuse @ 0x1C00869B4 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorAllocateUnitResources(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  void *v5; // rcx
  char v7; // bp
  void *v8; // rax
  ULONG *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rax
  void *v12; // rcx
  unsigned int v14; // eax
  __int64 Srb; // rax
  __int64 Pool; // rax
  PIRP Irp; // rax
  PMDL Mdl; // rax
  void *MappedSystemVa; // rcx
  struct _MDL *v20; // rdx

  v3 = *a1;
  v5 = *(void **)(a2 + 16);
  v7 = 1;
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
  }
  else
  {
    Srb = RaidAllocateSrb(*(_QWORD *)(v3 + 8), 0, *(_BYTE *)(v3 + 442), 1);
    *(_QWORD *)(a2 + 16) = Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    Pool = RaidAllocatePool(64LL, 18LL, 1314087250LL, *(_QWORD *)(v3 + 8));
    *(_QWORD *)(a2 + 24) = Pool;
    if ( !Pool )
      return 3221225495LL;
    v7 = 0;
  }
  if ( *(_QWORD *)a2 )
  {
    IoReuseIrp(*(PIRP *)a2, -1073741823);
  }
  else
  {
    Irp = IoAllocateIrp(1, 0);
    *(_QWORD *)a2 = Irp;
    if ( !Irp )
      return 3221225495LL;
  }
  v8 = *(void **)(a2 + 32);
  v9 = (ULONG *)(a2 + 40);
  if ( v8 )
  {
    if ( *v9 >= a3 )
      goto LABEL_8;
    ExFreePoolWithTag(*(PVOID *)(a2 + 32), 0x32316152u);
  }
  v14 = 512;
  if ( a3 >= 0x200 )
    v14 = a3;
  *v9 = v14;
  v8 = (void *)RaidAllocatePool(64LL, v14, 842096978LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = v8;
  if ( !v8 )
  {
    *v9 = 0;
    return 3221225495LL;
  }
LABEL_8:
  v10 = *(_QWORD *)(a2 + 8);
  if ( v10 )
  {
    if ( (*(_BYTE *)(v10 + 10) & 0x20) == 0 )
      goto LABEL_10;
    v20 = *(struct _MDL **)(a2 + 8);
    MappedSystemVa = *(void **)(v10 + 24);
    goto LABEL_31;
  }
  Mdl = IoAllocateMdl(v8, *v9, 0, 0, 0LL);
  *(_QWORD *)(a2 + 8) = Mdl;
  if ( !Mdl )
    return 3221225495LL;
  if ( (Mdl->MdlFlags & 0x20) == 0 )
    goto LABEL_10;
  MappedSystemVa = Mdl->MappedSystemVa;
  v20 = Mdl;
LABEL_31:
  MmUnmapLockedPages(MappedSystemVa, v20);
LABEL_10:
  v11 = *(_QWORD *)(a2 + 24);
  if ( v11 && v7 )
  {
    *(_OWORD *)v11 = 0LL;
    *(_WORD *)(v11 + 16) = 0;
  }
  v12 = *(void **)(a2 + 32);
  if ( v12 )
    memset(v12, 0, *v9);
  return 0LL;
}
