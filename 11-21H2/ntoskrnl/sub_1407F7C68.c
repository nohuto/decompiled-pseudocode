/*
 * XREFs of sub_1407F7C68 @ 0x1407F7C68
 * Callers:
 *     sub_14074DB0C @ 0x14074DB0C (sub_14074DB0C.c)
 *     sub_1407D5A10 @ 0x1407D5A10 (sub_1407D5A10.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     sub_1407F7CC4 @ 0x1407F7CC4 (sub_1407F7CC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1407F7C68(__int64 a1)
{
  PMDL *v1; // rbx

  v1 = *(PMDL **)(a1 + 360);
  MmUnlockPages(v1[4]);
  IoFreeMdl(v1[4]);
  sub_1407F7CC4(v1);
  ExFreePoolWithTag(v1, 0);
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_DWORD *)(a1 + 416) &= ~0x4000u;
}
