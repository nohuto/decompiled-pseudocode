/*
 * XREFs of MiDereferencePerSessionProtos @ 0x1407B5E98
 * Callers:
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x140213D10 (MiInsertInSystemSpace.c)
 *     MiMapSystemImage @ 0x140695E88 (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 *     MiValidateSectionCreate @ 0x1406ABE8C (MiValidateSectionCreate.c)
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 *     MiDeleteVad @ 0x1406FA630 (MiDeleteVad.c)
 *     MiSectionDelete @ 0x140721DC0 (MiSectionDelete.c)
 *     MiFinishCreateSection @ 0x140722F30 (MiFinishCreateSection.c)
 *     MiInitializeImageExtents @ 0x140A3413C (MiInitializeImageExtents.c)
 *     MiDeletePartialCloneVads @ 0x140A490DC (MiDeletePartialCloneVads.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     MiDereferenceSubsectionProtos @ 0x1407B5F78 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x1407B6354 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  unsigned __int64 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  _QWORD *i; // rdi
  bool v10; // zf
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = *a1;
  v12 = 0LL;
  v6 = (unsigned __int64 *)(v4 + 40);
  --CurrentThread->SpecialApcDisable;
  v7 = KeAbPreAcquire((__int64)v6, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (__int64)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &v12);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return MiFreeSubsectionProtos(&v12);
}
