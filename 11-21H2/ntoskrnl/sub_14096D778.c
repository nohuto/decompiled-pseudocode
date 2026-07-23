/*
 * XREFs of sub_14096D778 @ 0x14096D778
 * Callers:
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 *     sub_140980B94 @ 0x140980B94 (sub_140980B94.c)
 * Callees:
 *     sub_14030E280 @ 0x14030E280 (sub_14030E280.c)
 *     sub_1406D804C @ 0x1406D804C (sub_1406D804C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14096D778(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v4; // rax
  void *v5; // rbx

  v4 = sub_14030E280(a2, a3);
  v5 = (void *)v4;
  if ( v4 )
  {
    sub_1406D804C(a1, v4);
    ExFreePoolWithTag(v5, 0);
  }
}
