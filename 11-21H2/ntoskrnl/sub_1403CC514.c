/*
 * XREFs of sub_1403CC514 @ 0x1403CC514
 * Callers:
 *     sub_14064B24C @ 0x14064B24C (sub_14064B24C.c)
 *     sub_140844C0C @ 0x140844C0C (sub_140844C0C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403CC514(_BYTE *a1, PVOID *a2, unsigned int a3)
{
  __int64 v4; // rsi

  if ( a3 )
  {
    v4 = a3;
    do
    {
      if ( *a1 )
        ExFreePoolWithTag(*a2, 0);
      ++a1;
      a2 += 2;
      --v4;
    }
    while ( v4 );
  }
}
