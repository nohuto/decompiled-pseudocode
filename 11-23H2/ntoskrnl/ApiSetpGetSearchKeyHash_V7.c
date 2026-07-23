/*
 * XREFs of ApiSetpGetSearchKeyHash_V7 @ 0x1404182A0
 * Callers:
 *     ApiSetpSearchForSectionIndex_V7 @ 0x14041847C (ApiSetpSearchForSectionIndex_V7.c)
 *     ApiSetpInsertHashEntry_V7 @ 0x1404197FC (ApiSetpInsertHashEntry_V7.c)
 *     ApiSetpPopulateHashes_V7 @ 0x1404199A0 (ApiSetpPopulateHashes_V7.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetpGetSearchKeyHash_V7(unsigned __int8 *a1, unsigned int a2, char a3, int a4)
{
  unsigned int v4; // r10d
  __int64 v7; // r9
  __int64 v8; // r8
  unsigned __int8 v9; // al
  unsigned __int8 v10; // cl

  v4 = 0;
  if ( a2 )
  {
    v7 = a2;
    v8 = (a3 != 0) + 1LL;
    do
    {
      v9 = *a1;
      v10 = *a1;
      if ( *a1 >= 0x41u && v9 <= 0x5Au )
        v10 = v9 + 32;
      a1 += v8;
      v4 = v10 + a4 * v4;
      --v7;
    }
    while ( v7 );
  }
  return v4;
}
