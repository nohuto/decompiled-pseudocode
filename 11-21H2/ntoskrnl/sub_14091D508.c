/*
 * XREFs of sub_14091D508 @ 0x14091D508
 * Callers:
 *     sub_14068F7C4 @ 0x14068F7C4 (sub_14068F7C4.c)
 * Callees:
 *     sub_140AB41B0 @ 0x140AB41B0 (sub_140AB41B0.c)
 */

bool __fastcall sub_14091D508(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ecx
  int v5; // eax
  __int64 v6; // r9
  bool result; // al

  result = 0;
  if ( *a1 == 1718052210 && !a1[7] && a1[5] <= 1u && (unsigned int)(a1[6] - 3) <= 3 && a1[8] == 1 )
  {
    v4 = a1[10];
    if ( v4 )
    {
      if ( (v4 & 0xFFF) == 0 && v4 <= 0x7FFFE000 )
      {
        v5 = sub_140AB41B0(a1, a2, a3);
        if ( v5 == *(_DWORD *)(v6 + 508) )
          return 1;
      }
    }
  }
  return result;
}
