/*
 * XREFs of sub_14085E448 @ 0x14085E448
 * Callers:
 *     sub_14084AA8C @ 0x14084AA8C (sub_14084AA8C.c)
 *     sub_14085E334 @ 0x14085E334 (sub_14085E334.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1406ED344 @ 0x1406ED344 (sub_1406ED344.c)
 */

__int64 sub_14085E448()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // edi
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140D321F8, 0LL);
  if ( dword_140D321F0 == -1 )
  {
    v1 = sub_1406ED344(
           (__int64)&unk_140D31A00,
           (unsigned int)(*(_QWORD *)(*(_QWORD *)qword_140C51F48 + 16720LL) >> 8) >> 1,
           0,
           &v3);
    if ( v1 >= 0 )
      dword_140D321F0 = v3;
  }
  else
  {
    v1 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140D321F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140D321F8);
  sub_1402AFC00((ULONG_PTR)&qword_140D321F8);
  KeLeaveCriticalRegion();
  return (unsigned int)v1;
}
