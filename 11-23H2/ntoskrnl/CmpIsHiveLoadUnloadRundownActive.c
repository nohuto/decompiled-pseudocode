/*
 * XREFs of CmpIsHiveLoadUnloadRundownActive @ 0x140AF506C
 * Callers:
 *     CmpTryToRundownHive @ 0x1402092DC (CmpTryToRundownHive.c)
 *     CmpInitHiveFromFile @ 0x14068B418 (CmpInitHiveFromFile.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140826B80 (CmpLoadHiveThread.c)
 * Callees:
 *     <none>
 */

char CmpIsHiveLoadUnloadRundownActive()
{
  return CmpHiveLoadUnloadRundown.Count & 1;
}
