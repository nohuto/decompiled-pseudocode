/*
 * XREFs of sub_1403D2BC0 @ 0x1403D2BC0
 * Callers:
 *     WheaAddErrorSource @ 0x14084E510 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x140A08880 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1403D2BC0(signed int a1)
{
  bool result; // al
  int v2; // eax

  result = 0;
  if ( a1 > 3 )
  {
    if ( (unsigned int)a1 > 0xB )
      return 1;
    v2 = 3776;
    if ( !_bittest(&v2, a1) )
      return 1;
  }
  return result;
}
