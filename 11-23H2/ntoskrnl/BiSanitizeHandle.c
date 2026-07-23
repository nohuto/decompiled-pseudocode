/*
 * XREFs of BiSanitizeHandle @ 0x140369B6C
 * Callers:
 *     BiCloseStore @ 0x1408028D8 (BiCloseStore.c)
 *     BiDeleteKey @ 0x140803BA8 (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140803CEC (BiSetRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140803DDC (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x1408040D4 (BiCreateKey.c)
 *     BiOpenKey @ 0x1408053A0 (BiOpenKey.c)
 *     BiGetRegistryValue @ 0x140805714 (BiGetRegistryValue.c)
 *     BiGetKeyName @ 0x140805A94 (BiGetKeyName.c)
 *     BiDeleteRegistryValue @ 0x140807544 (BiDeleteRegistryValue.c)
 *     BcdFlushStore @ 0x140A5C4D8 (BcdFlushStore.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
