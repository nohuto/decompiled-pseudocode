/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x140A6A570
 * Callers:
 *     KeRebootSystemForRecovery @ 0x140578830 (KeRebootSystemForRecovery.c)
 *     MiShutdownSystem @ 0x140A69FD8 (MiShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14030E7C0 (MiObtainReferencedVadEx.c)
 *     MiUnlockAndDereferenceVad @ 0x14032E700 (MiUnlockAndDereferenceVad.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeRemoveEnclavePage @ 0x14056D650 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePages @ 0x140A6A73C (MiDeleteEnclavePages.c)
 */

char MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rsi
  _KPROCESS *v2; // r14
  unsigned __int64 v3; // rbp
  _DWORD *v4; // r9
  bool v5; // zf
  __int64 v6; // rax
  char *v7; // rsi
  $CEA84C04E3712D858E5667A507841A2A *v8; // rax
  int v10; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v11[3]; // [rsp+28h] [rbp-50h] BYREF

  memset(v11, 0, sizeof(v11));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease(&stru_140C53428);
  --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C53420, 0LL);
    v1 = qword_140C53410;
    if ( (__int64 *)qword_140C53410 == &qword_140C53410 )
      break;
    v2 = *(_KPROCESS **)(qword_140C53410 - 8);
    ObfReferenceObject(v2);
    v3 = (*(unsigned int *)(v1 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v1 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C53420);
    KeAbPostRelease((ULONG_PTR)&qword_140C53420);
    v5 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v5 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KiStackAttachProcess(v2, 0LL, (__int64)v11, v4);
    v6 = MiObtainReferencedVadEx(v3, 0, &v10);
    v7 = (char *)v6;
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 48) & 0x6200000) == 0x4200000 && (*(_DWORD *)(v6 + 64) & 1) != 0 )
        MiDeleteEnclavePages(v2, v6);
      MiUnlockAndDereferenceVad(v7);
    }
    KiUnstackDetachProcess((__int64)v11, 0LL);
    ObfDereferenceObject(v2);
    --CurrentThread->SpecialApcDisable;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C53420, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&qword_140C53420);
  LOBYTE(v8) = KeAbPostRelease((ULONG_PTR)&qword_140C53420);
  v5 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v5 )
  {
    v8 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v8->ApcState.ApcListHead[0].Flink != v8 )
      LOBYTE(v8) = KiCheckForKernelApcDelivery();
  }
  if ( qword_140C533F0 )
    LOBYTE(v8) = KeRemoveEnclavePage();
  return (char)v8;
}
