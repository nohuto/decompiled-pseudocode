/*
 * XREFs of sub_1C00174D0 @ 0x1C00174D0
 * Callers:
 *     sub_1C0016EE0 @ 0x1C0016EE0 (sub_1C0016EE0.c)
 *     sub_1C00173C4 @ 0x1C00173C4 (sub_1C00173C4.c)
 * Callees:
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C00A1604 @ 0x1C00A1604 (sub_1C00A1604.c)
 */

__int64 __fastcall sub_1C00174D0(__int64 *a1, __int64 a2, unsigned int a3)
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
  __int64 v16; // rax
  __int64 v17; // rax
  PIRP Irp; // rax
  PMDL Mdl; // rax
  PVOID MappedSystemVa; // rcx
  struct _MDL *v21; // rdx

  v3 = *a1;
  v5 = *(void **)(a2 + 16);
  v7 = 1;
  v8 = (__int64 *)(v3 + 8);
  if ( v5 )
  {
    sub_1C00A1604(v5);
  }
  else
  {
    v16 = sub_1C0007BA4(*v8, 0, *(_BYTE *)(v3 + 442), 1);
    *(_QWORD *)(a2 + 16) = v16;
    if ( !v16 )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v17 = sub_1C0007CF4(64LL, 18LL, 1314087250LL, *v8);
    *(_QWORD *)(a2 + 24) = v17;
    if ( !v17 )
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
  v9 = (void *)sub_1C0007CF4(64LL, v15, 842096978LL, *v8);
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
    MappedSystemVa = *(PVOID *)(v11 + 24);
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
