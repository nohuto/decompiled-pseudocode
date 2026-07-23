/*
 * XREFs of MiFreeSessionId @ 0x140A32724
 * Callers:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706EEC (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiSessionCreate @ 0x1407A91FC (MiSessionCreate.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall MiFreeSessionId(unsigned int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 v2; // rsi
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi
  $C71981A45BEB2B45F82C232A7085991E *v6; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  --CurrentThread->SpecialApcDisable;
  v3 = KeAbPreAcquire((__int64)&qword_140C659D0, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C659D0, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_140C659D0, v3, (__int64)&qword_140C659D0);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  *((_BYTE *)qword_140C69910->Buffer + (v2 >> 3)) &= ~(1 << (v2 & 7));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C659D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C659D0);
  LOBYTE(v6) = KeAbPostRelease((ULONG_PTR)&qword_140C659D0);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v6 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != v6 )
      LOBYTE(v6) = KiCheckForKernelApcDelivery();
  }
  return (char)v6;
}
