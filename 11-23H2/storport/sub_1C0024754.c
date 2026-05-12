/*
 * XREFs of sub_1C0024754 @ 0x1C0024754
 * Callers:
 *     sub_1C00A0400 @ 0x1C00A0400 (sub_1C00A0400.c)
 *     sub_1C00AC730 @ 0x1C00AC730 (sub_1C00AC730.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C0024754(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 3464);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x494E6152u);
    *(_QWORD *)(a1 + 3464) = 0LL;
  }
  v3 = *(void **)(a1 + 3472);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x494E6152u);
    *(_QWORD *)(a1 + 3472) = 0LL;
  }
}
