/*
 * XREFs of IoGetShadowFileInformation @ 0x140557120
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x14030192C (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetShadowFileInformation(__int64 a1)
{
  return IopGetFileObjectExtension(a1, 9, 0LL);
}
