/*
 * XREFs of sub_14078AE7C @ 0x14078AE7C
 * Callers:
 *     sub_14078ACE0 @ 0x14078ACE0 (sub_14078ACE0.c)
 *     sub_14078AE24 @ 0x14078AE24 (sub_14078AE24.c)
 *     sub_14078B2D4 @ 0x14078B2D4 (sub_14078B2D4.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14078AEE0 @ 0x14078AEE0 (sub_14078AEE0.c)
 */

__int64 __fastcall sub_14078AE7C(PVOID P)
{
  unsigned int v2; // edi

  ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
  v2 = --*((_DWORD *)P + 14);
  if ( *((_BYTE *)P + 68) && v2 == 1 )
    KeSetEvent(*((PRKEVENT *)P + 3), 0, 0);
  KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
  if ( !v2 )
    sub_14078AEE0(P);
  return v2;
}
