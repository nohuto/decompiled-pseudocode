/*
 * XREFs of MI_IS_PTE_SHADOW_STACK @ 0x140645C80
 * Callers:
 *     MiValidFault @ 0x140333770 (MiValidFault.c)
 *     MiInitializeShadowPageTable @ 0x14081E1D0 (MiInitializeShadowPageTable.c)
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
