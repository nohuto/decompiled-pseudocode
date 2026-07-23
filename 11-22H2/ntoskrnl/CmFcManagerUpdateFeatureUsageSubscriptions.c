/*
 * XREFs of CmFcManagerUpdateFeatureUsageSubscriptions @ 0x140A277C8
 * Callers:
 *     CmUpdateFeatureUsageSubscription @ 0x140A121EC (CmUpdateFeatureUsageSubscription.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140212E84 (_tlgKeywordOn.c)
 *     MiRemoveFromSystemSpace @ 0x1402137A0 (MiRemoveFromSystemSpace.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402F6B24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x14035CBB8 (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x14035CC4C (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x140374D10 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memset @ 0x140435400 (memset.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140810214 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpMapSection @ 0x1408103BC (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x140810490 (CmFcpManagerCreateSection.c)
 *     RtlpFcUpdateUsageTriggers @ 0x1409C83F4 (RtlpFcUpdateUsageTriggers.c)
 *     RtlpFcValidateFeatureUsageSubscriptionBuffer @ 0x1409C86B8 (RtlpFcValidateFeatureUsageSubscriptionBuffer.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27D04 (CmFcpManagerPublishChangeNotifications.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureUsageSubscriptions(__int64 a1, int *a2, unsigned int a3)
{
  size_t v3; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  signed __int8 v7; // cf
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rsi
  _DWORD *v12; // rcx
  size_t v13; // r13
  NTSTATUS updated; // eax
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  void *v19; // rcx
  ULONG_PTR *v20; // rbx
  int v22; // [rsp+30h] [rbp-A9h]
  __int64 v23; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v24; // [rsp+40h] [rbp-99h] BYREF
  PVOID Object; // [rsp+48h] [rbp-91h]
  __int64 v26; // [rsp+50h] [rbp-89h]
  __int64 v27; // [rsp+58h] [rbp-81h] BYREF
  LARGE_INTEGER v28; // [rsp+60h] [rbp-79h] BYREF
  __int64 v29; // [rsp+68h] [rbp-71h] BYREF
  _QWORD v30[10]; // [rsp+70h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+C0h] [rbp-19h] BYREF
  __int64 *v32; // [rsp+E0h] [rbp+7h]
  int v33; // [rsp+E8h] [rbp+Fh]
  int v34; // [rsp+ECh] [rbp+13h]

  v3 = a3;
  v27 = 0LL;
  v23 = 0LL;
  Object = 0LL;
  v26 = 0LL;
  memset(v30, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((__int64)&stru_140C14030, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140C14030, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140C14030, v6, (__int64)&stru_140C14030);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C14090, (__int64)&v27, &v23);
  v10 = v23;
  v11 = v27 + 1;
  v28.QuadPart = 0LL;
  if ( v27 == -1 )
    v11 = 1LL;
  v24 = v11;
  v12 = *(_DWORD **)(v23 + 56);
  v13 = v3;
  v30[6] = v11;
  updated = RtlpFcUpdateUsageTriggers(v12, v9, a2, v3, 0LL, (unsigned __int64 *)&v28.QuadPart);
  v22 = updated;
  v15 = 3LL;
  if ( updated < 0 )
  {
    if ( updated != -2147483643
      || (v22 = CmFcpManagerCreateSection(v28, v11, (void *)CmFcSystemManager[0], &v24), v22 < 0)
      || (v22 = CmFcpMapSection(&v24, &v30[6]), v22 < 0)
      || (v22 = RtlpFcUpdateUsageTriggers(*(_DWORD **)(v10 + 56), v16, a2, v13, (_DWORD *)v30[7], &v30[8]), v22 < 0) )
    {
LABEL_17:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C14030, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C14030);
      KeAbPostRelease((ULONG_PTR)&stru_140C14030);
      if ( v23 )
        RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C14090, v23);
      goto LABEL_30;
    }
    if ( (int)RtlpFcValidateFeatureUsageSubscriptionBuffer((unsigned int *)v30[7], v30[8]) < 0 )
    {
      if ( (unsigned int)dword_140C04358 > 5 && tlgKeywordOn((__int64)&dword_140C04358, 0x400000000001LL) )
      {
        v34 = 0;
        v32 = &v29;
        v29 = 0x1000000LL;
        v33 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04358,
          (unsigned __int8 *)word_140037D7A,
          0LL,
          0LL,
          3u,
          &v31);
      }
      v22 = -1073741595;
      goto LABEL_17;
    }
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C14090, v10);
  v17 = KeAbPreAcquire((__int64)&RunOnce, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&RunOnce, 0LL);
  v18 = v17;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&RunOnce, v17, (__int64)&RunOnce);
  if ( v18 )
    *(_BYTE *)(v18 + 18) = 1;
  v19 = (void *)qword_140C14080;
  qword_140C14078 = v24;
  qword_140C14080 = (__int64)Object;
  Object = v19;
  qword_140C14088 = v26;
  RtlpFcBufferManagerUpdateBuffers(qword_140C14090, v11, (__int64)v30);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C14038, v11);
  RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v11);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RunOnce, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&RunOnce);
  KeAbPostRelease((ULONG_PTR)&RunOnce);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C14030, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&stru_140C14030);
  KeAbPostRelease((ULONG_PTR)&stru_140C14030);
  CmFcpManagerPublishChangeNotifications(CmFcSystemManager, v11);
  v22 = 0;
LABEL_30:
  v20 = &v30[1];
  do
  {
    if ( *v20 )
      MiRemoveFromSystemSpace(*v20, 1);
    v20 += 3;
    --v15;
  }
  while ( v15 );
  if ( Object )
    ObfDereferenceObject(Object);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v22;
}
