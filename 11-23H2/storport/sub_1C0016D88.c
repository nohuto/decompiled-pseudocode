/*
 * XREFs of sub_1C0016D88 @ 0x1C0016D88
 * Callers:
 *     sub_1C0016C84 @ 0x1C0016C84 (sub_1C0016C84.c)
 * Callees:
 *     sub_1C0007BA4 @ 0x1C0007BA4 (sub_1C0007BA4.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C00A1604 @ 0x1C00A1604 (sub_1C00A1604.c)
 */

__int64 __fastcall sub_1C0016D88(__int64 *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rax
  void *v5; // rcx
  __int64 v6; // rsi
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rax
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
    sub_1C00A1604(v5);
  }
  else
  {
    v8 = sub_1C0007BA4(*v7, 0, *(_BYTE *)(v3 + 442), 1);
    *(_QWORD *)(a3 + 16) = v8;
    if ( !v8 )
      return 3221225495LL;
  }
  if ( !*(_QWORD *)(a3 + 24) )
  {
    v9 = sub_1C0007CF4(64LL, 18LL, 1314087250LL, *v7);
    *(_QWORD *)(a3 + 24) = v9;
    if ( !v9 )
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
  v12 = sub_1C0007CF4(64LL, v6, 1817338194LL, *v7);
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
