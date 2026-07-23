/*
 * XREFs of sub_1406373F4 @ 0x1406373F4
 * Callers:
 *     sub_140829F84 @ 0x140829F84 (sub_140829F84.c)
 *     sub_1409DEEDC @ 0x1409DEEDC (sub_1409DEEDC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406373F4(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 392);
  v2 = 5LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}
