/*
 * XREFs of sub_1402376C4 @ 0x1402376C4
 * Callers:
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_140261354 @ 0x140261354 (sub_140261354.c)
 *     sub_1403D735C @ 0x1403D735C (sub_1403D735C.c)
 *     sub_1405F71B0 @ 0x1405F71B0 (sub_1405F71B0.c)
 * Callees:
 *     sub_140262ED4 @ 0x140262ED4 (sub_140262ED4.c)
 *     sub_14037DC94 @ 0x14037DC94 (sub_14037DC94.c)
 *     MmFreeMappingAddress @ 0x1407FA560 (MmFreeMappingAddress.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1402376C4(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned __int16 *v2; // rbp
  void **v3; // rsi
  void **v4; // rdi

  v1 = 0;
  v2 = (unsigned __int16 *)(a1 + 88);
  v3 = (void **)(a1 + 32);
  do
  {
    while ( 1 )
    {
      v4 = (void **)*v3;
      if ( !*v3 )
        break;
      *v3 = *v4;
      if ( v1 < 5 )
      {
        if ( v1 == 2 )
        {
          sub_14037DC94(v4[1]);
        }
        else if ( v1 == 3 )
        {
          sub_140262ED4((unsigned __int64)*v2 << 12, 1LL, 1LL);
        }
        else
        {
          ExFreePoolWithTag(v4[1], 0);
        }
      }
      else
      {
        MmFreeMappingAddress(v4[1], 0x6D526D73u);
      }
      ExFreePoolWithTag(v4, 0);
    }
    ++v1;
    ++v3;
    ++v2;
  }
  while ( v1 < 6 );
}
