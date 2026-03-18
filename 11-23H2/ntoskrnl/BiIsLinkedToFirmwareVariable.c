/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x140803FF0
 * Callers:
 *     BcdDeleteObject @ 0x140802D00 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x140802D5C (BcdCreateObject.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140804030 (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x1408040B8 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
