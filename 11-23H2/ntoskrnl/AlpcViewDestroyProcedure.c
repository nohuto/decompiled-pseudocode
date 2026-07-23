/*
 * XREFs of AlpcViewDestroyProcedure @ 0x14071EEE0
 * Callers:
 *     <none>
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140213780 (MiRemoveFromSystemSpace.c)
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1406B0290 (MmUnsecureVirtualMemory.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcpRemoveResourcePort @ 0x14071EE60 (AlpcpRemoveResourcePort.c)
 *     MiUnmapViewOfSection @ 0x14071F1C0 (MiUnmapViewOfSection.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A024 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14073BE30 (AlpcpUnlockBlob.c)
 *     AlpcpRestoreWriteAccess @ 0x1407C31E0 (AlpcpRestoreWriteAccess.c)
 */

__int64 __fastcall AlpcViewDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rsi
  ULONG_PTR v3; // rdi
  _KPROCESS *Process; // rbp
  int v5; // ecx
  int v6; // eax
  ULONG_PTR *v7; // rdi
  _KPROCESS *v8; // rcx
  void *v9; // rcx
  volatile signed __int64 *v10; // rbx
  $115DCDF994C6370D29323EAB0E0C9502 v12; // [rsp+20h] [rbp-48h] BYREF

  v1 = 0LL;
  memset(&v12, 0, sizeof(v12));
  v3 = *(_QWORD *)(a1 + 16);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(a1 + 16));
    **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
    v5 = *(_DWORD *)(v3 + 52) - 1;
    *(_DWORD *)(v3 + 52) = v5;
    if ( (*(_DWORD *)(a1 + 72) & 4) == 0 )
    {
      v6 = *(_DWORD *)(v3 + 48);
      if ( (v6 & 1) != 0 )
      {
        *(_QWORD *)(v3 + 80) = 0LL;
        v1 = *(_QWORD *)(v3 + 72);
        if ( v1 )
        {
          AlpcpRestoreWriteAccess(*(_QWORD *)(v3 + 72));
        }
        else if ( !v5 )
        {
          *(_DWORD *)(v3 + 48) = v6 & 0xFFFFFFFE;
        }
      }
    }
    AlpcpUnlockBlob(v3);
    AlpcpRemoveResourcePort(*(_QWORD *)(a1 + 24), a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
    if ( (*(_DWORD *)(a1 + 72) & 8) != 0 )
    {
      MiRemoveFromSystemSpace(*(_QWORD *)(a1 + 40), 1);
      v7 = (ULONG_PTR *)(a1 + 32);
    }
    else
    {
      v7 = (ULONG_PTR *)(a1 + 32);
      v8 = *(_KPROCESS **)(a1 + 32);
      if ( Process != v8 )
        KiStackAttachProcess(v8, 0, (__int64)&v12);
      v9 = *(void **)(a1 + 56);
      if ( v9 )
        MmUnsecureVirtualMemory(v9);
      MiUnmapViewOfSection(*v7);
      if ( Process != (_KPROCESS *)*v7 )
        KiUnstackDetachProcess(&v12);
    }
    if ( v1 )
      AlpcpDereferenceBlobEx(v1, 1);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16), 1);
    ExAcquirePushLockExclusiveEx(*v7 + 2048, 0LL);
    **(_QWORD **)(a1 + 88) = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL) = *(_QWORD *)(a1 + 88);
    v10 = (volatile signed __int64 *)(*v7 + 2048);
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    ObfDereferenceObjectWithTag((PVOID)*v7, 0x63706C41u);
  }
  return 0LL;
}
