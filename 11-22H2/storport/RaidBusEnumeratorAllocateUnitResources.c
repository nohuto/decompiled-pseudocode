/*
 * XREFs of RaidBusEnumeratorAllocateUnitResources @ 0x1C0016A94
 * Callers:
 *     RaidBusEnumeratorGetUnit @ 0x1C00164A4 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0016988 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidAllocateSrb @ 0x1C00079E4 (RaidAllocateSrb.c)
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     RaidPrepareSrbForReuse @ 0x1C00A0450 (RaidPrepareSrbForReuse.c)
 */

__int64 __fastcall RaidBusEnumeratorAllocateUnitResources(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  void *v5; // rcx
  char v7; // bp
  __int64 *v8; // rsi
  void *v9; // rax
  ULONG *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  unsigned int v15; // eax
  __int64 Srb; // rax
  __int64 Pool; // rax
  PIRP Irp; // rax
  PMDL Mdl; // rax
  void *MappedSystemVa; // rcx
  struct _MDL *v21; // rdx

  v3 = *a1;
  v5 = *(void **)(a2 + 16);
  v7 = 1;
  v8 = (__int64 *)(v3 + 8);
  if ( v5 )
  {
    RaidPrepareSrbForReuse(v5);
  }
  else
  {
    Srb = RaidAllocateSrb(*v8, 0, *(_BYTE *)(v3 + 442), 1);
    *(_QWORD *)(a2 + 16) = Srb;
    if ( !Srb )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    Pool = RaidAllocatePool(64LL, 18LL, 1314087250LL, *v8);
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
  v9 = *(void **)(a2 + 32);
  v10 = (ULONG *)(a2 + 40);
  if ( v9 )
  {
    if ( *v10 >= a3 )
      goto LABEL_8;
    ExFreePoolWithTag(*(PVOID *)(a2 + 32), 0x32316152u);
  }
  v15 = 512;
  if ( a3 >= 0x200 )
    v15 = a3;
  *v10 = v15;
  v9 = (void *)RaidAllocatePool(64LL, v15, 842096978LL, *v8);
  *(_QWORD *)(a2 + 32) = v9;
  if ( !v9 )
  {
    *v10 = 0;
    return 3221225495LL;
  }
LABEL_8:
  v11 = *(_QWORD *)(a2 + 8);
  if ( v11 )
  {
    if ( (*(_BYTE *)(v11 + 10) & 0x20) == 0 )
      goto LABEL_10;
    v21 = *(struct _MDL **)(a2 + 8);
    MappedSystemVa = *(void **)(v11 + 24);
    goto LABEL_31;
  }
  Mdl = IoAllocateMdl(v9, *v10, 0, 0, 0LL);
  *(_QWORD *)(a2 + 8) = Mdl;
  if ( !Mdl )
    return 3221225495LL;
  if ( (Mdl->MdlFlags & 0x20) == 0 )
    goto LABEL_10;
  MappedSystemVa = Mdl->MappedSystemVa;
  v21 = Mdl;
LABEL_31:
  MmUnmapLockedPages(MappedSystemVa, v21);
LABEL_10:
  v12 = *(_QWORD *)(a2 + 24);
  if ( v12 && v7 )
  {
    *(_OWORD *)v12 = 0LL;
    *(_WORD *)(v12 + 16) = 0;
  }
  v13 = *(void **)(a2 + 32);
  if ( v13 )
    memset_0(v13, 0, *v10);
  return 0LL;
}
