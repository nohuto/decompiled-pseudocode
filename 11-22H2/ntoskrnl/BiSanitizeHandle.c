/*
 * XREFs of BiSanitizeHandle @ 0x14036937C
 * Callers:
 *     BiCloseStore @ 0x140804B8C (BiCloseStore.c)
 *     BiDeleteKey @ 0x140805E5C (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140805FA0 (BiSetRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140806090 (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140806388 (BiCreateKey.c)
 *     BiOpenKey @ 0x140807650 (BiOpenKey.c)
 *     BiGetRegistryValue @ 0x1408079C4 (BiGetRegistryValue.c)
 *     BiGetKeyName @ 0x140807D44 (BiGetKeyName.c)
 *     BiDeleteRegistryValue @ 0x1408097F4 (BiDeleteRegistryValue.c)
 *     BcdFlushStore @ 0x140A5C298 (BcdFlushStore.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
