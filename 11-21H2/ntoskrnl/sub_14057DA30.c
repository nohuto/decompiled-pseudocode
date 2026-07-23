/*
 * XREFs of sub_14057DA30 @ 0x14057DA30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14057DA30(char *P)
{
  if ( P )
  {
    sub_14075CDC4(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2A1A4);
  }
}
