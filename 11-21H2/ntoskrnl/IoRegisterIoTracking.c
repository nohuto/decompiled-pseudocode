/*
 * XREFs of IoRegisterIoTracking @ 0x140937E50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140556DE0 @ 0x140556DE0 (sub_140556DE0.c)
 *     sub_1405594BC @ 0x1405594BC (sub_1405594BC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoRegisterIoTracking(__int64 a1, _QWORD *a2)
{
  _QWORD *Pool2; // rdi
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rax
  struct _KTHREAD *v8; // rax

  *a2 = 0LL;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1918136137LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[2] = *(_QWORD *)(a1 + 8);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C46F90, 0LL);
  v7 = (_QWORD *)qword_140C46FB8;
  if ( *(__int64 **)qword_140C46FB8 != &qword_140C46FB0 )
    __fastfail(3u);
  *Pool2 = &qword_140C46FB0;
  Pool2[1] = v7;
  *v7 = Pool2;
  qword_140C46FB8 = (__int64)Pool2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C46F90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C46F90);
  sub_1402AFC00((ULONG_PTR)&qword_140C46F90);
  v8 = KeGetCurrentThread();
  if ( (*((_WORD *)v8 + 243))++ == 0xFFFF && *((struct _KTHREAD **)v8 + 19) != (struct _KTHREAD *)((char *)v8 + 152) )
    KiCheckForKernelApcDelivery();
  sub_140556DE0(2, 1);
  sub_1405594BC(2);
  result = 0LL;
  *a2 = Pool2;
  return result;
}
