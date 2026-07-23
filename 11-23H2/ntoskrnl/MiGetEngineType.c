/*
 * XREFs of MiGetEngineType @ 0x14039973C
 * Callers:
 *     MiInitializeDpcGroupAffinity @ 0x140221C20 (MiInitializeDpcGroupAffinity.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5EFB4 (MiComputeMemoryNodeProcessorAssignments.c)
 *     MiFindProcessorsForMemoryOnlyNode @ 0x140B9A10C (MiFindProcessorsForMemoryOnlyNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetEngineType(__int64 a1)
{
  int v1; // eax
  char v2; // dl

  v1 = 0;
  if ( KeHeteroSystem )
    v2 = *(_BYTE *)(a1 + 34056);
  else
    v2 = *(_BYTE *)(a1 + 34059);
  LOBYTE(v1) = v2 != 1;
  return (unsigned int)(v1 + 1);
}
