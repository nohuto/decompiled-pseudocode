/*
 * XREFs of CmFcManagerUpdateFeatureConfigurations @ 0x140922DB4
 * Callers:
 *     CmUpdateFeatureConfiguration @ 0x1409113B4 (CmUpdateFeatureConfiguration.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     MiRemoveFromSystemSpace @ 0x14026D048 (MiRemoveFromSystemSpace.c)
 *     _tlgKeywordOn @ 0x1402A2000 (_tlgKeywordOn.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpFcWriteHighLowHigh @ 0x1403C77D4 (RtlpFcWriteHighLowHigh.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403C78DC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403C7984 (RtlpFcBufferManagerReferenceBuffers.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmFcpMapSection @ 0x140832C70 (CmFcpMapSection.c)
 *     CmFcpManagerCreateSection @ 0x140832CF4 (CmFcpManagerCreateSection.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x140833110 (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140923614 (CmFcpManagerPublishChangeNotifications.c)
 *     RtlpFcUpdateFeatureConfiguration @ 0x1409BF744 (RtlpFcUpdateFeatureConfiguration.c)
 *     RtlpFcValidateFeatureConfigurationBuffer @ 0x1409BFB48 (RtlpFcValidateFeatureConfigurationBuffer.c)
 */

__int64 __fastcall CmFcManagerUpdateFeatureConfigurations(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r12
  int Section; // edi
  __int64 v14; // r8
  __int64 v15; // rsi
  PVOID v16; // r15
  __int64 v17; // rcx
  int updated; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  PVOID v21; // rax
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  ULONG_PTR *v25; // rbx
  __int64 v27; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v28; // [rsp+38h] [rbp-C8h]
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h]
  _DWORD v31[2]; // [rsp+58h] [rbp-A8h]
  _DWORD v32[2]; // [rsp+60h] [rbp-A0h]
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  LARGE_INTEGER v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int64 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v38[10]; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+108h] [rbp+8h]
  int v42; // [rsp+10Ch] [rbp+Ch]

  v33 = 0LL;
  v27 = 0LL;
  v5 = a3;
  v35 = a4;
  v30 = 0LL;
  *(_OWORD *)Object = 0LL;
  memset(v38, 0, 0x48uLL);
  v32[0] = 0;
  v31[0] = 0;
  v32[1] = 1;
  v7 = (unsigned int)v32[v5];
  v31[1] = 1;
  v28 = v31[v5];
  v8 = 3 * v7;
  CurrentThread = KeGetCurrentThread();
  v36 = v8;
  v10 = &v38[v8];
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&stru_140C49450, 0LL);
  RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C494B0, (__int64)&v33, &v27);
  v12 = 3LL;
  if ( a2 && v33 != a2 )
  {
    Section = -1073741823;
LABEL_4:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&stru_140C49450);
    KeAbPostRelease((ULONG_PTR)&stru_140C49450);
    if ( v27 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C494B0, v27);
    goto LABEL_26;
  }
  v14 = v35;
  v15 = v33 + 1;
  if ( v33 == -1 )
    v15 = 1LL;
  v34.QuadPart = 0LL;
  v16 = (PVOID)v15;
  v17 = *(_QWORD *)(v27 + 8 * v8 + 8);
  Object[0] = (PVOID)v15;
  *v10 = v15;
  updated = RtlpFcUpdateFeatureConfiguration(v17, v11, v14, a5, 0LL, &v34);
  Section = updated;
  if ( updated < 0 )
  {
    if ( updated != -2147483643 )
      goto LABEL_4;
    Section = CmFcpManagerCreateSection(v34, v15, (void *)CmFcSystemManager[0], Object);
    if ( Section < 0 )
      goto LABEL_4;
    Section = CmFcpMapSection(Object, v10);
    if ( Section < 0 )
      goto LABEL_4;
    Section = RtlpFcUpdateFeatureConfiguration(*(_QWORD *)(v27 + 8 * v36 + 8), v19, v35, a5, v10[1], v10 + 2);
    if ( Section < 0 )
      goto LABEL_4;
    if ( (int)RtlpFcValidateFeatureConfigurationBuffer(v10[1], v10[2]) < 0 )
    {
      if ( (unsigned int)dword_140C063C0 > 5 && tlgKeywordOn((__int64)&dword_140C063C0, 0x400000000001LL) )
      {
        v42 = 0;
        v40 = &v37;
        v37 = 0x1000000LL;
        v41 = 8;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C063C0,
          (unsigned __int8 *)byte_14002A1B5,
          0LL,
          0LL,
          3u,
          &v39);
      }
      Section = -1073741595;
      goto LABEL_4;
    }
    v16 = Object[0];
  }
  RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C494B0, v27);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&RunOnce, 0LL);
  v20 = 3LL * v28;
  v21 = Object[1];
  CmFcSystemManager[v20 + 5] = (__int64)v16;
  v22 = (void *)CmFcSystemManager[v20 + 6];
  CmFcSystemManager[v20 + 6] = (__int64)v21;
  CmFcSystemManager[v20 + 7] = v30;
  Object[1] = v22;
  RtlpFcBufferManagerUpdateBuffers(qword_140C494B0, v15, (__int64)v38);
  RtlpFcWriteHighLowHigh((__int64)&qword_140C49458, v15);
  RtlpFcWriteHighLowHigh(0xFFFFF78000000720uLL, v23);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&RunOnce, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&RunOnce);
  KeAbPostRelease((ULONG_PTR)&RunOnce);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140C49450, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&stru_140C49450);
  KeAbPostRelease((ULONG_PTR)&stru_140C49450);
  CmFcpManagerPublishChangeNotifications(v24, v15);
  Section = 0;
LABEL_26:
  v25 = &v38[1];
  do
  {
    if ( *v25 )
      MiRemoveFromSystemSpace(*v25, 1);
    v25 += 3;
    --v12;
  }
  while ( v12 );
  if ( Object[1] )
    ObfDereferenceObject(Object[1]);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)Section;
}
