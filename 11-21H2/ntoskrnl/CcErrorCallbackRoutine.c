/*
 * XREFs of CcErrorCallbackRoutine @ 0x14053A0B0
 * Callers:
 *     <none>
 * Callees:
 *     CcCrossPartitionDrainSectionDeletion @ 0x140538B34 (CcCrossPartitionDrainSectionDeletion.c)
 */

__int64 __fastcall CcErrorCallbackRoutine(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 4) == -1073700856 )
    CcCrossPartitionDrainSectionDeletion();
  return 0LL;
}
