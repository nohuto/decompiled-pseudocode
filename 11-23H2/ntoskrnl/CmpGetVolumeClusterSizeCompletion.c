/*
 * XREFs of CmpGetVolumeClusterSizeCompletion @ 0x1407E4200
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14023C5E0 (KeSetEvent.c)
 */

__int64 __fastcall CmpGetVolumeClusterSizeCompletion(__int64 a1, __int64 a2, struct _KEVENT *a3)
{
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
