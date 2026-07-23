/*
 * XREFs of IopInterlockedRemoveHeadList @ 0x14035B350
 * Callers:
 *     IopCallDriverReinitializationRoutines @ 0x1407CF244 (IopCallDriverReinitializationRoutines.c)
 *     IoShutdownSystem @ 0x140A999A4 (IoShutdownSystem.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x140B6D2E0 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 */

_QWORD *__fastcall IopInterlockedRemoveHeadList(_QWORD **a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *a1;
  if ( *a1 == a1 )
  {
    v3 = 0LL;
  }
  else
  {
    v5 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
