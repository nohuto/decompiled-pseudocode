/*
 * XREFs of sub_140A7C2C4 @ 0x140A7C2C4
 * Callers:
 *     sub_1402DB738 @ 0x1402DB738 (sub_1402DB738.c)
 * Callees:
 *     sub_140A7C18C @ 0x140A7C18C (sub_140A7C18C.c)
 */

void __fastcall sub_140A7C2C4(void **a1)
{
  void **v2; // rcx

  v2 = a1 + 3;
  if ( (*(_DWORD *)v2 & 1) == 0 )
  {
    sub_140A7C18C(v2);
    sub_140A7C18C(a1 + 4);
    sub_140A7C18C(a1 + 5);
  }
}
