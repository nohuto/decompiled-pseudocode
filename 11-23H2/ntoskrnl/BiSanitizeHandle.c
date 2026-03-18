/*
 * XREFs of BiSanitizeHandle @ 0x1403699CC
 * Callers:
 *     BiCloseStore @ 0x140802608 (BiCloseStore.c)
 *     BiDeleteKey @ 0x1408038D8 (BiDeleteKey.c)
 *     BiSetRegistryValue @ 0x140803A1C (BiSetRegistryValue.c)
 *     BiEnumerateSubKeys @ 0x140803B0C (BiEnumerateSubKeys.c)
 *     BiCreateKey @ 0x140803E04 (BiCreateKey.c)
 *     BiOpenKey @ 0x1408050D0 (BiOpenKey.c)
 *     BiGetRegistryValue @ 0x140805444 (BiGetRegistryValue.c)
 *     BiGetKeyName @ 0x1408057C4 (BiGetKeyName.c)
 *     BiDeleteRegistryValue @ 0x140807274 (BiDeleteRegistryValue.c)
 *     BcdFlushStore @ 0x140A5C228 (BcdFlushStore.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall BiSanitizeHandle(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFFFDuLL;
}
