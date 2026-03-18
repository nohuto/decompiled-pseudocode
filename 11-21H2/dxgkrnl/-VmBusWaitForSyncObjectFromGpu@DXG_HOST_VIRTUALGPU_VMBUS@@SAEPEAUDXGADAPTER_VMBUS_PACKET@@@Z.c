/*
 * XREFs of ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0383400
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGHWQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0001AE8 (--1DXGHWQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z @ 0x1C0001C4C (--0DXGHWQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGHWQUEUE@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C0008FF0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0009178 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C694 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C01703A0 (-DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetEntryType@HMGRTABLE@@QEAA?AW4_HMGRENTRY_TYPE@@I@Z @ 0x1C01A619C (-GetEntryType@HMGRTABLE@@QEAA-AW4_HMGRENTRY_TYPE@@I@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C02242A8 (DxgkSubmitWaitForSyncObjectsToHwQueueInternal.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C0364C78 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusWaitForSyncObjectFromGpu(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGPROCESS *v14; // r14
  __int64 CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // r8
  UINT v22; // esi
  unsigned int v23; // eax
  D3DKMT_HANDLE v24; // r13d
  unsigned int v25; // esi
  unsigned int v26; // edx
  int v27; // r8d
  int EntryType; // esi
  const unsigned __int64 *v29; // r9
  int v30; // eax
  const wchar_t *v31; // r9
  int v32; // eax
  _DWORD v34[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v35; // [rsp+58h] [rbp-61h]
  __int64 v36; // [rsp+60h] [rbp-59h]
  _BYTE v37[16]; // [rsp+68h] [rbp-51h] BYREF
  _BYTE v38[8]; // [rsp+78h] [rbp-41h] BYREF
  DXGPUSHLOCK *v39; // [rsp+80h] [rbp-39h]
  int v40; // [rsp+88h] [rbp-31h]
  _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU v41; // [rsp+90h] [rbp-29h] BYREF
  int v42; // [rsp+120h] [rbp+67h] BYREF
  struct DXGCONTEXT *v43; // [rsp+128h] [rbp+6Fh] BYREF
  struct DXGHWQUEUE *v44; // [rsp+130h] [rbp+77h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v39);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v40 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v42 = 0;
    v6 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v6 )
      goto LABEL_38;
    v43 = 0LL;
    v44 = 0LL;
    Current = DXGPROCESS::GetCurrent(v5, v4, v7, v8);
    v14 = Current;
    if ( !Current )
    {
      CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
      WdLogSingleEntry1(2LL, CurrentProcess);
      v20 = PsGetCurrentProcess(v17, v16, v18, v19);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"unexpected process: 0x%I64x", v20, 0LL, 0LL, 0LL, 0LL);
LABEL_6:
      v42 = -1073741811;
LABEL_36:
      HandleAsyncCommandError((__int64 *)a1, v42, 0, 3);
      goto LABEL_37;
    }
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34, *(_DWORD *)(v6 + 24), Current, &v43, 0, 0);
    if ( !v43 )
    {
      DXGHWQUEUEBYHANDLE::DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v37, *(_DWORD *)(v6 + 24), v14, &v44, 0);
      if ( !v44 )
      {
        WdLogSingleEntry1(2LL, *(unsigned int *)(v6 + 24));
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid SubmitWait handle: 0x%I64x",
          *(unsigned int *)(v6 + 24),
          0LL,
          0LL,
          0LL,
          0LL);
        v42 = -1073741811;
        DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v37);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
        goto LABEL_35;
      }
      DXGHWQUEUEBYHANDLE::~DXGHWQUEUEBYHANDLE((DXGHWQUEUEBYHANDLE *)v37);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v34);
    v22 = *(_DWORD *)(v6 + 28);
    if ( v22 - 1 > 0xFFFE )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v6 + 28));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid object count 0x%I64x",
        *(unsigned int *)(v6 + 28),
        0LL,
        0LL,
        0LL,
        0LL);
      v42 = -1073741811;
    }
    else
    {
      v23 = 12 * v22 + 40;
      if ( *((_DWORD *)a1 + 36) < v23 )
      {
        WdLogSingleEntry1(3LL, v23);
        goto LABEL_6;
      }
      v24 = *(_DWORD *)(v6 + 24);
      if ( v43 )
      {
        memset(&v41, 0, sizeof(v41));
        v41.hContext = v24;
        v41.ObjectCount = v22;
        v41.ObjectHandleArray = (const D3DKMT_HANDLE *)(v6 + 8 * v22 + 40);
        if ( *(_BYTE *)(v6 + 32) )
          v41.FenceValue = *(_QWORD *)(v6 + 40);
        else
          v41.FenceValue = 0LL;
        v25 = *(_DWORD *)(v6 + 8 * v22 + 40);
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)v14 + 248));
        v26 = (v25 >> 6) & 0xFFFFFF;
        if ( v26 < *((_DWORD *)v14 + 74)
          && (v27 = *(_DWORD *)(*((_QWORD *)v14 + 35) + 16LL * v26 + 8),
              ((v25 >> 25) & 0x60) == (*(_BYTE *)(*((_QWORD *)v14 + 35) + 16LL * v26 + 8) & 0x60))
          && (v27 & 0x2000) == 0
          && (v27 & 0x1F) != 0 )
        {
          EntryType = HMGRTABLE::GetEntryType((__int64)v14 + 280, v26);
        }
        else
        {
          EntryType = 0;
        }
        ExReleasePushLockSharedEx((char *)v14 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( EntryType != 8 && *(_BYTE *)(v6 + 32) )
        {
          WdLogSingleEntry1(3LL, 4175LL);
          goto LABEL_6;
        }
        v29 = 0LL;
        if ( !*(_BYTE *)(v6 + 32) )
          v29 = (const unsigned __int64 *)(v6 + 40);
        v30 = DxgkWaitForSynchronizationObjectFromGpuInternal(&v41, 0, 0LL, v29, 0);
        v42 = v30;
        if ( v30 >= 0 )
          goto LABEL_37;
        WdLogSingleEntry1(2LL, v30);
        v31 = L"DxgkWaitForSynchronizationObjectFromGpuInternal failed: 0x%I64x";
      }
      else
      {
        v34[0] = *(_DWORD *)(v6 + 24);
        v36 = v6 + 40;
        v34[1] = v22;
        v35 = v6 + 8 * v22 + 40;
        v32 = DxgkSubmitWaitForSyncObjectsToHwQueueInternal((__int64)v34, 0, v21);
        v42 = v32;
        if ( v32 >= 0 )
          goto LABEL_37;
        WdLogSingleEntry1(2LL, v32);
        v31 = L"DxgkSubmitWaitForSyncObjectsToHwQueue failed: 0x%I64x";
      }
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v31, v42, 0LL, 0LL, 0LL, 0LL);
    }
LABEL_35:
    if ( v42 < 0 )
      goto LABEL_36;
LABEL_37:
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v42, 4u);
    v3 = 1;
    goto LABEL_38;
  }
  WdLogSingleEntry1(2LL, 4120LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4120LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_38:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v38);
  return v3;
}
