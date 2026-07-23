/*
 * XREFs of sub_140A9E8F0 @ 0x140A9E8F0
 * Callers:
 *     <none>
 * Callees:
 *     IoReleaseRemoveLockEx @ 0x1402332A0 (IoReleaseRemoveLockEx.c)
 */

__int64 __fastcall sub_140A9E8F0(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(*(_QWORD *)(a1 + 64) + 32LL), (PVOID)a2, 0x20u);
  return 0LL;
}
