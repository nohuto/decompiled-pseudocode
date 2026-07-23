/*
 * XREFs of WdipSemAllocatePool @ 0x140831DD4
 * Callers:
 *     WdipSemFastAllocate @ 0x140831A8C (WdipSemFastAllocate.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // ecx
  _QWORD *Pool2; // rax
  _QWORD *v7; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  v3 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C6B370, 0LL);
  v4 = dword_140C6B360;
  if ( v2 > dword_140C6B360 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 4096LL, 1934181463LL);
    if ( !Pool2 )
      goto LABEL_3;
    v7 = (_QWORD *)qword_140C6B358;
    if ( *(PVOID **)qword_140C6B358 != &WdipSemPool )
      __fastfail(3u);
    Pool2[1] = qword_140C6B358;
    *Pool2 = &WdipSemPool;
    *v7 = Pool2;
    v4 = 4080;
    qword_140C6B358 = (__int64)Pool2;
    qword_140C6B368 = (__int64)(Pool2 + 2);
  }
  v3 = qword_140C6B368;
  qword_140C6B368 += v2;
  dword_140C6B360 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((__int64 *)&qword_140C6B370, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
