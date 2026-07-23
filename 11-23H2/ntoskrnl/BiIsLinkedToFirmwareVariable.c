/*
 * XREFs of BiIsLinkedToFirmwareVariable @ 0x1408042C0
 * Callers:
 *     BcdDeleteObject @ 0x140802FD0 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x14080302C (BcdCreateObject.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140804300 (BiGetFirmwareType.c)
 *     BiIsLinkedToEfiVariable @ 0x140804388 (BiIsLinkedToEfiVariable.c)
 */

char __fastcall BiIsLinkedToFirmwareVariable(__int64 a1, __int64 a2)
{
  if ( (unsigned int)BiGetFirmwareType() == 2 )
    return BiIsLinkedToEfiVariable(a1, a2);
  else
    return 0;
}
