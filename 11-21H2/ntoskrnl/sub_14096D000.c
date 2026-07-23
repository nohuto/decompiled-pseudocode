/*
 * XREFs of sub_14096D000 @ 0x14096D000
 * Callers:
 *     sub_14079D7A8 @ 0x14079D7A8 (sub_14079D7A8.c)
 *     sub_14097ECFC @ 0x14097ECFC (sub_14097ECFC.c)
 * Callees:
 *     sub_14030E280 @ 0x14030E280 (sub_14030E280.c)
 *     sub_1406EB238 @ 0x1406EB238 (sub_1406EB238.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14096D000(__int64 a1)
{
  unsigned __int64 v1; // rax
  void *v2; // rbx

  v1 = sub_14030E280(a1, 8);
  v2 = (void *)v1;
  if ( v1 )
  {
    sub_1406EB238(v1);
    ExFreePoolWithTag(v2, 0);
  }
}
