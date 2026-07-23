/*
 * XREFs of MiDereferenceVad @ 0x14028AB20
 * Callers:
 *     MiFinishVadDeletion @ 0x140289FA0 (MiFinishVadDeletion.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14066116C (MiUnlockAndDereferenceNestedVad.c)
 *     NtAreMappedFilesTheSame @ 0x1408718D0 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiDereferenceVad(__int64 a1)
{
  signed __int32 v1; // eax

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 36));
  if ( v1 == -1 )
    __fastfail(0xEu);
  return !v1 && (*(_DWORD *)(a1 + 48) & 4) != 0;
}
