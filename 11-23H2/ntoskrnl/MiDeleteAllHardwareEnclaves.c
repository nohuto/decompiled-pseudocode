/*
 * XREFs of MiDeleteAllHardwareEnclaves @ 0x140AAD0B0
 * Callers:
 *     KeRebootSystemForRecovery @ 0x14057A89C (KeRebootSystemForRecovery.c)
 *     MiShutdownSystem @ 0x140AAB9E0 (MiShutdownSystem.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     MiUnlockAndDereferenceVad @ 0x140274D20 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x140274F40 (MiObtainReferencedVadEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A5D0 (ExWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KeRemoveEnclavePage @ 0x140570BE0 (KeRemoveEnclavePage.c)
 *     MiDeleteEnclavePages @ 0x140AAD2D8 (MiDeleteEnclavePages.c)
 */

char MiDeleteAllHardwareEnclaves()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rax
  signed __int8 v2; // cf
  __int64 v3; // rbx
  __int64 v4; // rsi
  _KPROCESS *v5; // r14
  unsigned __int64 v6; // rbp
  bool v7; // zf
  __int64 *v8; // rax
  char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  $C71981A45BEB2B45F82C232A7085991E *v12; // rax
  int v14; // [rsp+20h] [rbp-58h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v15; // [rsp+28h] [rbp-50h] BYREF

  memset(&v15, 0, sizeof(v15));
  CurrentThread = KeGetCurrentThread();
  ExWaitForRundownProtectionRelease(&stru_140C698C8);
  --CurrentThread->SpecialApcDisable;
  v1 = KeAbPreAcquire((__int64)&qword_140C698C0, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C698C0, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&qword_140C698C0, v1, (__int64)&qword_140C698C0);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  while ( 1 )
  {
    v4 = qword_140C698B0;
    if ( (__int64 *)qword_140C698B0 == &qword_140C698B0 )
      break;
    v5 = *(_KPROCESS **)(qword_140C698B0 - 8);
    ObfReferenceObject(v5);
    v6 = (*(unsigned int *)(v4 - 96) | ((unsigned __int64)*(unsigned __int8 *)(v4 - 88) << 32)) << 12;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C698C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C698C0);
    KeAbPostRelease((ULONG_PTR)&qword_140C698C0);
    v7 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KiStackAttachProcess(v5, 0, (__int64)&v15);
    v8 = MiObtainReferencedVadEx(v6, 0, &v14);
    v9 = (char *)v8;
    if ( v8 )
    {
      if ( (v8[6] & 0x6200000) == 0x4200000 && (v8[8] & 1) != 0 )
        MiDeleteEnclavePages(v5, v8);
      MiUnlockAndDereferenceVad(v9);
    }
    KiUnstackDetachProcess(&v15);
    ObfDereferenceObject(v5);
    --CurrentThread->SpecialApcDisable;
    v10 = KeAbPreAcquire((__int64)&qword_140C698C0, 0LL);
    v2 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140C698C0, 0LL);
    v11 = v10;
    if ( v2 )
      ExfAcquirePushLockExclusiveEx(&qword_140C698C0, v10, (__int64)&qword_140C698C0);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C698C0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C698C0);
  LOBYTE(v12) = KeAbPostRelease((ULONG_PTR)&qword_140C698C0);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 )
  {
    v12 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  if ( qword_140C69890 )
    LOBYTE(v12) = KeRemoveEnclavePage();
  return (char)v12;
}
