/*
 * XREFs of sub_140419E5C @ 0x140419E5C
 * Callers:
 *     sub_140659AD4 @ 0x140659AD4 (sub_140659AD4.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_1406599CC @ 0x1406599CC (sub_1406599CC.c)
 */

__int64 __fastcall sub_140419E5C(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140D3CB70, 0LL);
  v5 = sub_1406599CC(a1, a2);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D3CB70, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140D3CB70);
  sub_1402AFC00((ULONG_PTR)&qword_140D3CB70);
  KeLeaveCriticalRegion();
  return v5;
}
