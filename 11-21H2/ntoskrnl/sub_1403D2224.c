/*
 * XREFs of sub_1403D2224 @ 0x1403D2224
 * Callers:
 *     sub_14084DCF8 @ 0x14084DCF8 (sub_14084DCF8.c)
 *     sub_140B10B2C @ 0x140B10B2C (sub_140B10B2C.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403D2224(PVOID *P, unsigned int a2)
{
  PVOID *v3; // rbx
  __int64 v4; // rsi

  if ( P )
  {
    if ( a2 )
    {
      v3 = P + 1;
      v4 = a2;
      do
      {
        if ( *v3 )
          ExFreePoolWithTag(*v3, 0);
        v3 += 2;
        --v4;
      }
      while ( v4 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
