/*
 * XREFs of sub_140247800 @ 0x140247800
 * Callers:
 *     sub_140247300 @ 0x140247300 (sub_140247300.c)
 *     sub_1402853B0 @ 0x1402853B0 (sub_1402853B0.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_14053B060 @ 0x14053B060 (sub_14053B060.c)
 *     sub_14053B22C @ 0x14053B22C (sub_14053B22C.c)
 *     sub_14053B55C @ 0x14053B55C (sub_14053B55C.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 */

void __fastcall sub_140247800(int a1, struct _FAST_MUTEX *a2)
{
  ExReleasePushLockEx((ULONG_PTR)&a2[1].OldIrql, 0LL);
  if ( a1 )
    KeReleaseGuardedMutex(a2 + 5);
}
