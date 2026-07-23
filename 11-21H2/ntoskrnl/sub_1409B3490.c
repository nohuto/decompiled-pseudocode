/*
 * XREFs of sub_1409B3490 @ 0x1409B3490
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14058DDC0 @ 0x14058DDC0 (sub_14058DDC0.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_1409B137C @ 0x1409B137C (sub_1409B137C.c)
 *     sub_140A01F78 @ 0x140A01F78 (sub_140A01F78.c)
 */

LONG_PTR __fastcall sub_1409B3490(char *Object)
{
  unsigned __int16 *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // r15
  _DWORD *v6; // rbp
  void *v7; // r12
  PVOID v8; // rax

  if ( Object == qword_140D06C40 )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v2 = *(unsigned __int16 **)Object;
  if ( v2 )
  {
    sub_14058DDC0(v2);
    *(_QWORD *)Object = 0LL;
  }
  v3 = (void *)*((_QWORD *)Object + 2);
  if ( v3 )
  {
    sub_140A01F78(v3);
    *((_QWORD *)Object + 2) = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(Object + 96), 0LL);
  v5 = *((_QWORD *)Object + 7);
  v6 = (_DWORD *)*((_QWORD *)Object + 13);
  v7 = (void *)*((_QWORD *)Object + 14);
  *((_QWORD *)Object + 7) = MmBadPointer;
  v8 = MmBadPointer;
  *((_QWORD *)Object + 14) = 0LL;
  *((_QWORD *)Object + 13) = v8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Object + 96);
  sub_1402AFC00((ULONG_PTR)(Object + 96));
  KeLeaveCriticalRegion();
  if ( v6 )
  {
    sub_1409B137C(v6, 0);
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    ObfDereferenceObject(v6);
    ObCloseHandle(v7, 0);
  }
  sub_1403606C4(v5);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
