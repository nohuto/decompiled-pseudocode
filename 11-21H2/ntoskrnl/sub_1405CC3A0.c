/*
 * XREFs of sub_1405CC3A0 @ 0x1405CC3A0
 * Callers:
 *     sub_1405DDD88 @ 0x1405DDD88 (sub_1405DDD88.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_1405CC3A0(__int64 *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  __int64 *i; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741810;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C23B98, 0LL);
  for ( i = (__int64 *)qword_140C23BA0; i != &qword_140C23BA0; i = (__int64 *)*i )
  {
    if ( i - 25 == a1 )
    {
      v3 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(i + 9), (PVOID)0x66466F50, &File, 1u, 0x20u);
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C23B98, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C23B98);
  sub_1402AFC00((ULONG_PTR)&qword_140C23B98);
  KeLeaveCriticalRegion();
  return v3;
}
