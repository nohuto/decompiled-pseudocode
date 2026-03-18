/*
 * XREFs of MI_IS_PTE_SHADOW_STACK @ 0x140645730
 * Callers:
 *     MiValidFault @ 0x1403334E0 (MiValidFault.c)
 *     MiInitializeShadowPageTable @ 0x14081DF00 (MiInitializeShadowPageTable.c)
 * Callees:
 *     <none>
 */

bool __fastcall MI_IS_PTE_SHADOW_STACK(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( (MiFlags & 0x1000000) != 0 )
    return (*a1 & 0x42) == 64;
  return result;
}
