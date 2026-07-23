/*
 * XREFs of sub_1407F8750 @ 0x1407F8750
 * Callers:
 *     <none>
 * Callees:
 *     sub_1407F612C @ 0x1407F612C (sub_1407F612C.c)
 *     sub_1407F8780 @ 0x1407F8780 (sub_1407F8780.c)
 */

void __fastcall sub_1407F8750(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    sub_1407F612C(a1);
  if ( *(_DWORD *)(a1 + 88) )
    sub_1407F8780();
}
