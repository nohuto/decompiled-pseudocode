/*
 * XREFs of sub_1402382D0 @ 0x1402382D0
 * Callers:
 *     sub_140237A0C @ 0x140237A0C (sub_140237A0C.c)
 *     sub_1409D790C @ 0x1409D790C (sub_1409D790C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402382D0(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 16);
  v2 = 2LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}
