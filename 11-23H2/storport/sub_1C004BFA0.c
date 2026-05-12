/*
 * XREFs of sub_1C004BFA0 @ 0x1C004BFA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C0011BE0 @ 0x1C0011BE0 (sub_1C0011BE0.c)
 */

void __fastcall sub_1C004BFA0(__int64 a1)
{
  __int64 v1; // rdx
  IRP *v2; // rcx

  v1 = *(_QWORD *)(a1 + 216);
  v2 = *(IRP **)(a1 + 160);
  *(_BYTE *)(v1 + 4496) = 0;
  sub_1C0011BE0(v2, v1);
}
