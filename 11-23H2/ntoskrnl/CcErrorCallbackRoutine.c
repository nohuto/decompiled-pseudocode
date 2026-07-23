/*
 * XREFs of CcErrorCallbackRoutine @ 0x140537C60
 * Callers:
 *     <none>
 * Callees:
 *     CcCrossPartitionDrainSectionDeletion @ 0x140535C24 (CcCrossPartitionDrainSectionDeletion.c)
 */

__int64 __fastcall CcErrorCallbackRoutine(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) == -1073700856 )
    CcCrossPartitionDrainSectionDeletion();
  return 0LL;
}
