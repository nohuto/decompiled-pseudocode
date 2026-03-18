/*
 * XREFs of MiGetFirstVad @ 0x14032A44C
 * Callers:
 *     MiUnlockVadRange @ 0x1406AFF64 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1406B0034 (MiLockVadRange.c)
 *     MmCleanProcessAddressSpace @ 0x14071FA58 (MmCleanProcessAddressSpace.c)
 *     MiCommitInitialVadMetadataBits @ 0x1407A3E5C (MiCommitInitialVadMetadataBits.c)
 *     MiHotPatchProcess @ 0x140A374C4 (MiHotPatchProcess.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiGetFirstVad(__int64 a1)
{
  _QWORD *v1; // rdx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 2008);
  if ( !v1 )
    return 0LL;
  do
  {
    result = v1;
    v1 = (_QWORD *)*v1;
  }
  while ( v1 );
  return result;
}
