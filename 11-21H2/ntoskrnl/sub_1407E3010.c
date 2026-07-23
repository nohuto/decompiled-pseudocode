/*
 * XREFs of sub_1407E3010 @ 0x1407E3010
 * Callers:
 *     sub_1406D5B38 @ 0x1406D5B38 (sub_1406D5B38.c)
 *     sub_1406DD6DC @ 0x1406DD6DC (sub_1406DD6DC.c)
 *     sub_1406E0214 @ 0x1406E0214 (sub_1406E0214.c)
 *     sub_1406E158C @ 0x1406E158C (sub_1406E158C.c)
 *     sub_1406E1A90 @ 0x1406E1A90 (sub_1406E1A90.c)
 *     sub_1406E73B0 @ 0x1406E73B0 (sub_1406E73B0.c)
 *     sub_1407E20B8 @ 0x1407E20B8 (sub_1407E20B8.c)
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 *     sub_1407E2B70 @ 0x1407E2B70 (sub_1407E2B70.c)
 *     sub_140A0F140 @ 0x140A0F140 (sub_140A0F140.c)
 *     sub_140A0FC24 @ 0x140A0FC24 (sub_140A0FC24.c)
 *     sub_140A10548 @ 0x140A10548 (sub_140A10548.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407E3010(unsigned int a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  void *Pool2; // rax

  v2 = 0;
  Pool2 = 0LL;
  if ( a1 && (Pool2 = (void *)ExAllocatePool2(256LL, a1, 1112686935LL)) == 0LL )
  {
    return (unsigned int)-1073741801;
  }
  else if ( a2 )
  {
    *a2 = Pool2;
  }
  else if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
  }
  return v2;
}
