/*
 * XREFs of sub_1408153C8 @ 0x1408153C8
 * Callers:
 *     sub_14081538C @ 0x14081538C (sub_14081538C.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1408153C8(int a1)
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
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C5A620, 0LL);
  v4 = dword_140C5A610;
  if ( v2 > dword_140C5A610 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 4096LL, 1934181463LL);
    if ( !Pool2 )
      goto LABEL_3;
    v7 = (_QWORD *)qword_140C5A608;
    if ( *(PVOID **)qword_140C5A608 != &qword_140C5A600 )
      __fastfail(3u);
    Pool2[1] = qword_140C5A608;
    *Pool2 = &qword_140C5A600;
    *v7 = Pool2;
    v4 = 4080;
    qword_140C5A608 = (__int64)Pool2;
    qword_140C5A618 = (__int64)(Pool2 + 2);
  }
  v3 = qword_140C5A618;
  qword_140C5A618 += v2;
  dword_140C5A610 = v4 - v2;
LABEL_3:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C5A620, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
