/*
 * XREFs of CmpIsShutdownRundownActive @ 0x140AF5080
 * Callers:
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14070EF24 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14070FFEC (CmDeleteKey.c)
 *     CmRestoreKey @ 0x140A0AC44 (CmRestoreKey.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140A159B4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15EE8 (CmSetLastWriteTimeKey.c)
 * Callees:
 *     <none>
 */

char CmpIsShutdownRundownActive()
{
  return CmpShutdownRundown.Count & 1;
}
