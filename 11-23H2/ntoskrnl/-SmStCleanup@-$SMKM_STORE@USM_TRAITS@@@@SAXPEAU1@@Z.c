/*
 * XREFs of ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140343068
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140342E50 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     SmProcessCreateRequest @ 0x1407B795C (SmProcessCreateRequest.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D710 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022DAD0 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14030FAB0 (KiCheckForKernelApcDelivery.c)
 *     SmKmStoreHelperCleanup @ 0x1403432F4 (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperCheckWaitCommand @ 0x1403433AC (SmKmStoreHelperCheckWaitCommand.c)
 *     SmAcquireReleaseCharges @ 0x140343C8C (SmAcquireReleaseCharges.c)
 *     SmFpCleanup @ 0x1403445A8 (SmFpCleanup.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140345520 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403457FC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DED20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     SmKmFileInfoCleanup @ 0x1409D8B80 (SmKmFileInfoCleanup.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStCleanup(__int64 a1)
{
  bool v2; // zf
  void *v3; // rcx
  _KPROCESS *v4; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v6; // rax
  char v7; // al
  char v8; // cl
  void *v9; // rbx
  void *v10; // rcx
  __int64 result; // rax
  void **v12; // rbx
  $115DCDF994C6370D29323EAB0E0C9502 v13; // [rsp+30h] [rbp-58h] BYREF

  *(_BYTE *)(a1 + 6021) |= 1u;
  v2 = *(_QWORD *)(a1 + 6200) == 0LL;
  memset(&v13, 0, sizeof(v13));
  if ( !v2 )
  {
    KeSetEvent((PRKEVENT)(a1 + 6152), 0, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 6200), Executive, 0, 0, 0LL);
  }
  v3 = *(void **)(a1 + 6200);
  if ( v3 )
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  SmKmStoreHelperCheckWaitCommand(a1 + 6232, 1LL);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( *(_QWORD *)(a1 + 6488) )
    {
      KeSetEvent((PRKEVENT)(a1 + 6496), 0, 0);
      KeWaitForSingleObject(*(PVOID *)(a1 + 6488), Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 6488), 0x746C6644u);
    }
    if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    {
      v4 = *(_KPROCESS **)(a1 + 6584);
      if ( v4 )
        KiStackAttachProcess(v4, 0, (__int64)&v13);
      if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 && *(_QWORD *)(a1 + 6568) )
      {
        v12 = *(void ***)(a1 + 6568);
        if ( *v12 )
          SC_ENV::Free(*v12);
        ExFreePoolWithTag(v12, 0);
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(a1);
  ST_STORE<SM_TRAITS>::StCleanup(a1);
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 6024));
    KeAbPostRelease(a1 + 6024);
    v6 = KeGetCurrentThread();
    v2 = v6->SpecialApcDisable++ == -1;
    if ( v2 && ($C71981A45BEB2B45F82C232A7085991E *)v6->ApcState.ApcListHead[0].Flink != &v6->152 )
      KiCheckForKernelApcDelivery();
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v7 = *(_BYTE *)(a1 + 6021);
  if ( (v7 & 4) != 0 && *(_QWORD *)(a1 + 6584) )
  {
    KiUnstackDetachProcess(&v13);
    v7 = *(_BYTE *)(a1 + 6021);
  }
  v8 = *(_BYTE *)(a1 + 6020);
  if ( v8 )
  {
    if ( v8 == 1 )
      SmKmFileInfoCleanup(a1 + 6216);
  }
  else
  {
    v9 = *(void **)(a1 + 6216);
    if ( (v7 & 4) != 0 )
    {
      v10 = *(void **)(a1 + 6224);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      SmKmStoreHelperCleanup(a1 + 6232);
      SmKmStoreHelperCleanup(a1 + 6360);
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  result = SmFpCleanup(a1 + 6608);
  if ( (*(_BYTE *)(a1 + 6021) & 0x10) != 0 )
    return SmAcquireReleaseCharges(*(_QWORD *)(a1 + 6728), *(unsigned int *)(a1 + 6208), 1LL, 1LL);
  return result;
}
