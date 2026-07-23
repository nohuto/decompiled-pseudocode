/*
 * XREFs of MiSectionDelete @ 0x140721DC0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     RtlAvlRemoveNode @ 0x14028B1E0 (RtlAvlRemoveNode.c)
 *     MiSectionControlArea @ 0x14029FB10 (MiSectionControlArea.c)
 *     MiDereferenceControlAreaBySection @ 0x14029FB3C (MiDereferenceControlAreaBySection.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiDereferencePerSessionProtos @ 0x1407B5E98 (MiDereferencePerSessionProtos.c)
 *     MiLogSectionObjectEvent @ 0x140A2FA2C (MiLogSectionObjectEvent.c)
 */

__int64 __fastcall MiSectionDelete(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rbp
  bool v11; // zf

  v1 = *(_WORD *)(a1 + 58) & 1;
  v4 = MiSectionControlArea(a1);
  if ( *(_QWORD *)(v3 + 24) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v8 = KeAbPreAcquire((__int64)&qword_140C65550, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65550, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&qword_140C65550, v8, (__int64)&qword_140C65550);
    if ( v10 )
      *(_BYTE *)(v10 + 18) = 1;
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C65548, (unsigned __int64 *)a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65550, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65550);
    KeAbPostRelease((ULONG_PTR)&qword_140C65550);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  v5 = *(_QWORD *)(a1 + 40);
  if ( (v5 & 3) != 0 )
    ObfDereferenceObject((PVOID)(v5 & 0xFFFFFFFFFFFFFFFCuLL));
  if ( (*(_BYTE *)(v4 + 56) & 0x20) == 0 && (*(_DWORD *)(a1 + 56) & 0x10000000) != 0 && *(_QWORD *)(v4 + 64) )
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 92));
  if ( (*(_DWORD *)(v4 + 56) & 0x8000000) != 0 )
    MiDereferencePerSessionProtos(v4);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x400001) != 0 && !*(_QWORD *)(v4 + 64) )
    MiLogSectionObjectEvent(a1, 0LL);
  return MiDereferenceControlAreaBySection(v4, v1);
}
