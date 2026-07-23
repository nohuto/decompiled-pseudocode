/*
 * XREFs of sub_140A7C18C @ 0x140A7C18C
 * Callers:
 *     sub_140A7C024 @ 0x140A7C024 (sub_140A7C024.c)
 *     sub_140A7C0B8 @ 0x140A7C0B8 (sub_140A7C0B8.c)
 *     sub_140A7C2C4 @ 0x140A7C2C4 (sub_140A7C2C4.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A7C18C(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x54496656u);
    *a1 = 0LL;
  }
}
