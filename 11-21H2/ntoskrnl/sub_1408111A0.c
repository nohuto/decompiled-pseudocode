/*
 * XREFs of sub_1408111A0 @ 0x1408111A0
 * Callers:
 *     sub_14039A210 @ 0x14039A210 (sub_14039A210.c)
 *     sub_1403D33C4 @ 0x1403D33C4 (sub_1403D33C4.c)
 *     sub_14080BDD0 @ 0x14080BDD0 (sub_14080BDD0.c)
 *     sub_140819A74 @ 0x140819A74 (sub_140819A74.c)
 *     sub_140819BD0 @ 0x140819BD0 (sub_140819BD0.c)
 *     sub_140989788 @ 0x140989788 (sub_140989788.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1408111A0(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] )
  {
    if ( a1[8] )
      return a1[22] == 2;
  }
  return result;
}
