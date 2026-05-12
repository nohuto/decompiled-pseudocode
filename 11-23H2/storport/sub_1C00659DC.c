/*
 * XREFs of sub_1C00659DC @ 0x1C00659DC
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     sub_1C0008C44 @ 0x1C0008C44 (sub_1C0008C44.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00659DC(__int64 a1)
{
  struct _MDL *v2; // rcx

  v2 = *(struct _MDL **)(a1 + 120);
  if ( v2 )
  {
    MmProtectMdlSystemAddress(v2, 4u);
    MmUnlockPages(*(PMDL *)(a1 + 120));
    IoFreeMdl(*(PMDL *)(a1 + 120));
    *(_QWORD *)(a1 + 120) = 0LL;
  }
}
