/*
 * XREFs of PsRegisterAltSystemCallHandler @ 0x1409B2180
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall PsRegisterAltSystemCallHandler(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rax

  v2 = (int)a2;
  if ( !a1 || a2 >= 2 )
    KeBugCheckEx(0x1E0u, 2uLL, 0LL, 0LL, 0LL);
  if ( !a2 )
    KeBugCheckEx(0x1E0u, 3uLL, 0LL, 0LL, 0LL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1BDD8, 0LL);
  if ( qword_140D06F48[v2] )
  {
    ExReleasePushLockEx((ULONG_PTR)&qword_140C1BDD8, 0LL);
    KeLeaveCriticalRegion();
    KeBugCheckEx(0x1E0u, 1uLL, qword_140D06F48[v2], 0LL, 0LL);
  }
  qword_140D06F48[v2] = a1;
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1BDD8, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return 0LL;
}
