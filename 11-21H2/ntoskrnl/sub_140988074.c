/*
 * XREFs of sub_140988074 @ 0x140988074
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 *     sub_140986E88 @ 0x140986E88 (sub_140986E88.c)
 *     sub_140986F94 @ 0x140986F94 (sub_140986F94.c)
 *     sub_140A49250 @ 0x140A49250 (sub_140A49250.c)
 * Callees:
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall sub_140988074(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  PVOID v6; // r14
  PVOID Object[2]; // [rsp+40h] [rbp-28h] BYREF

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4E960, 0LL);
  v5 = 0;
  if ( *(_QWORD *)a1 )
  {
    if ( !a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 80));
    KeResetEvent((PRKEVENT)(a1 + 56));
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    v6 = *(PVOID *)a1;
    ObfReferenceObject(*(PVOID *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E960, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4E960);
    sub_1402AFC00((ULONG_PTR)&qword_140C4E960);
    KeLeaveCriticalRegion();
    Object[0] = (PVOID)(a1 + 56);
    Object[1] = v6;
    KeWaitForMultipleObjects(2u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    ObfDereferenceObject(v6);
    if ( !a2 )
      _InterlockedAdd((volatile signed __int32 *)(a1 + 80), 0xFFFFFFFF);
  }
  else
  {
    v5 = -1073741177;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4E960, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C4E960);
    sub_1402AFC00((ULONG_PTR)&qword_140C4E960);
    KeLeaveCriticalRegion();
  }
  return v5;
}
