/*
 * XREFs of BiIsOfflineHandle @ 0x140373F70
 * Callers:
 *     BcdQueryObject @ 0x1408021C8 (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x140802FD0 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x14080302C (BcdCreateObject.c)
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14080394C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x1408043E8 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804F8C (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1408051D0 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140805214 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A5C4D8 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C540 (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5C620 (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A5C6E0 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
