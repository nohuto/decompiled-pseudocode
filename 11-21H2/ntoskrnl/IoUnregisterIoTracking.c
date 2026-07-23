/*
 * XREFs of IoUnregisterIoTracking @ 0x140937F70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140556DE0 @ 0x140556DE0 (sub_140556DE0.c)
 *     sub_1405595B8 @ 0x1405595B8 (sub_1405595B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall IoUnregisterIoTracking(_QWORD *P)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rdx
  PVOID *v4; // rax
  struct _KTHREAD *v5; // rax
  bool v6; // zf

  sub_1405595B8(2);
  sub_140556DE0(2, 0);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C46F90, 0LL);
  v3 = (_QWORD *)*P;
  if ( *(_QWORD **)(*P + 8LL) != P || (v4 = (PVOID *)P[1], *v4 != P) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C46F90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C46F90);
  sub_1402AFC00((ULONG_PTR)&qword_140C46F90);
  v5 = KeGetCurrentThread();
  v6 = (*((_WORD *)v5 + 243))++ == 0xFFFF;
  if ( v6 && *((struct _KTHREAD **)v5 + 19) != (struct _KTHREAD *)((char *)v5 + 152) )
    KiCheckForKernelApcDelivery();
  ExFreePoolWithTag(P, 0x72546F49u);
}
