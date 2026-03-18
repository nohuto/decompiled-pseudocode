/*
 * XREFs of BiIsOfflineHandle @ 0x140373DD0
 * Callers:
 *     BcdQueryObject @ 0x140801EF8 (BcdQueryObject.c)
 *     BcdDeleteObject @ 0x140802D00 (BcdDeleteObject.c)
 *     BcdCreateObject @ 0x140802D5C (BcdCreateObject.c)
 *     BcdCloseStore @ 0x140802DF4 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14080367C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140804118 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140804CBC (BcdGetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x140804F00 (BcdCloseObject.c)
 *     BcdOpenObject @ 0x140804F44 (BcdOpenObject.c)
 *     BcdFlushStore @ 0x140A5C228 (BcdFlushStore.c)
 *     BcdForciblyUnloadStore @ 0x140A5C290 (BcdForciblyUnloadStore.c)
 *     BcdSetSystemStore @ 0x140A5C370 (BcdSetSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A5C430 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
