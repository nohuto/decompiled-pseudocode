/*
 * XREFs of sub_1406E6124 @ 0x1406E6124
 * Callers:
 *     sub_14078C5BC @ 0x14078C5BC (sub_14078C5BC.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

__int64 __fastcall sub_1406E6124(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  struct _FAST_MUTEX *v3; // rcx

  v1 = *(_QWORD *)(a1 + 32);
  v2 = 0;
  if ( v1 )
  {
    ExAcquireFastMutex(*(PFAST_MUTEX *)(v1 + 16));
    v3 = *(struct _FAST_MUTEX **)(v1 + 16);
    *(_BYTE *)(v1 + 140) = 0;
    KeReleaseGuardedMutex(v3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
