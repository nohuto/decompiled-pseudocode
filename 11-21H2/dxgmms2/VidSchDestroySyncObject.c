/*
 * XREFs of VidSchDestroySyncObject @ 0x1C0099880
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C008D5A0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEAVDXGADAPTERALLOCATION@@PEAX6KE6EPEAPEAU_VIDMM_CROSSADAPTER_ALLOC@@PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C008F230 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ @ 0x1C009935C (-DestroyState@VIDMM_DEVICE_PAGING_QUEUE@@QEAAXXZ.c)
 *     ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00D61B0 (-DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C000B770 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchTimeoutSyncObject @ 0x1C001A0C0 (VidSchTimeoutSyncObject.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     McTemplateK0ppqqpx_EtwWriteTransfer @ 0x1C002E810 (McTemplateK0ppqqpx_EtwWriteTransfer.c)
 *     McTemplateK0ppqqppqi_EtwWriteTransfer @ 0x1C002E8C8 (McTemplateK0ppqqppqi_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpqq_EtwWriteTransfer @ 0x1C002E9A0 (McTemplateK0ppqqpqq_EtwWriteTransfer.c)
 *     McTemplateK0ppqqpt_EtwWriteTransfer @ 0x1C002EA5C (McTemplateK0ppqqpt_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchDestroySyncObject(_VIDSCH_SYNC_OBJECT *P, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // eax
  const EVENT_DESCRIPTOR *v6; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+40h] [rbp-21h]
  __int64 v20; // [rsp+40h] [rbp-21h]
  __int64 v21; // [rsp+48h] [rbp-19h]
  int v22; // [rsp+48h] [rbp-19h]
  __int64 v23; // [rsp+48h] [rbp-19h]
  int v24; // [rsp+48h] [rbp-19h]
  int v25; // [rsp+50h] [rbp-11h]
  int v26; // [rsp+50h] [rbp-11h]
  __int64 v27; // [rsp+58h] [rbp-9h]
  _QWORD v28[10]; // [rsp+68h] [rbp+7h] BYREF

  if ( P )
  {
    if ( *((int *)P + 9) > 1 )
      VidSchTimeoutSyncObject(P);
    v3 = *((_QWORD *)P + 2);
    if ( v3 )
    {
      if ( !bTracingEnabled )
        goto LABEL_15;
      v4 = *(_QWORD *)(*((_QWORD *)P + 1) + 16LL);
      if ( *(_DWORD *)(v3 + 200) != 1 )
      {
        if ( *(_DWORD *)(v3 + 200) != 2 )
        {
          if ( *(_DWORD *)(v3 + 200) != 3 )
          {
            if ( *(_DWORD *)(v3 + 200) != 4 )
            {
              if ( *(_DWORD *)(v3 + 200) == 5 )
              {
                if ( (byte_1C006E941 & 1) != 0 )
                {
                  v21 = *(_QWORD *)(v3 + 208);
                  v5 = *(_DWORD *)(v3 + 204);
                  v19 = *(unsigned int *)(v3 + 272);
LABEL_13:
                  v6 = (const EVENT_DESCRIPTOR *)&EventDestroyMonitoredFence;
LABEL_14:
                  McTemplateK0ppqqpx_EtwWriteTransfer(
                    (__int64)&DxgkControlGuid_Context,
                    v6,
                    0LL,
                    v4,
                    P,
                    1,
                    v5,
                    v19,
                    v21);
                }
LABEL_15:
                VidSchiReleaseSyncObjectReference((char *)P, a2);
                return 0LL;
              }
              if ( *(_DWORD *)(v3 + 200) != 6 )
              {
LABEL_45:
                WdLogSingleEntry1(1LL, 1032LL);
                DxgkLogInternalTriageEvent(v18, 262146LL);
                goto LABEL_15;
              }
              if ( (byte_1C006E941 & 1) == 0 )
                goto LABEL_15;
              v12 = *(unsigned int *)(v3 + 208);
              v13 = *(unsigned int *)(v3 + 272);
              v27 = *(_QWORD *)(v3 + 216);
              v25 = *(_DWORD *)(v3 + 212);
              v14 = *(_DWORD *)(v3 + 204);
LABEL_48:
              McTemplateK0ppqqppqi_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                &EventDestroyPeriodicMonitoredFence,
                0LL,
                v4,
                P,
                1,
                v14,
                v13,
                v12,
                v25,
                v27);
              goto LABEL_15;
            }
            if ( (byte_1C006E941 & 1) == 0 )
              goto LABEL_15;
            v23 = *(_QWORD *)(v3 + 208);
            v15 = *(_DWORD *)(v3 + 204);
            v20 = *(unsigned int *)(v3 + 272);
            goto LABEL_51;
          }
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_15;
          v21 = *(_QWORD *)(v3 + 208);
          v5 = *(_DWORD *)(v3 + 204);
          v19 = *(unsigned int *)(v3 + 272);
          goto LABEL_52;
        }
        if ( (byte_1C006E941 & 1) == 0 )
          goto LABEL_15;
        v16 = *(unsigned int *)(v3 + 272);
        v26 = *(_DWORD *)(v3 + 212);
        v24 = *(_DWORD *)(v3 + 208);
        v17 = *(_DWORD *)(v3 + 204);
        goto LABEL_55;
      }
      if ( (byte_1C006E941 & 1) == 0 )
        goto LABEL_15;
      v8 = *(unsigned int *)(v3 + 272);
      v22 = *(_DWORD *)(v3 + 208);
      v9 = *(_DWORD *)(v3 + 204);
    }
    else
    {
      memset(v28, 0, sizeof(v28));
      if ( *((_DWORD *)P + 12) == 4 )
      {
        v10 = 4294962295LL;
        a2 = 5LL;
        v28[1] = 4294962295LL;
      }
      else
      {
        v10 = v28[1];
        a2 = 3LL;
      }
      if ( !bTracingEnabled )
        goto LABEL_15;
      v4 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 1) + 8LL) + 16LL);
      a2 = (unsigned int)(a2 - 1);
      if ( (_DWORD)a2 )
      {
        a2 = (unsigned int)(a2 - 1);
        if ( (_DWORD)a2 )
        {
          a2 = (unsigned int)(a2 - 1);
          if ( (_DWORD)a2 )
          {
            a2 = (unsigned int)(a2 - 1);
            if ( (_DWORD)a2 )
            {
              a2 = (unsigned int)(a2 - 1);
              if ( !(_DWORD)a2 )
              {
                if ( (byte_1C006E941 & 1) == 0 )
                  goto LABEL_15;
                v21 = v10;
                v19 = LODWORD(v28[9]);
                v5 = HIDWORD(v28[0]);
                goto LABEL_13;
              }
              if ( (_DWORD)a2 != 1 )
                goto LABEL_45;
              if ( (byte_1C006E941 & 1) == 0 )
                goto LABEL_15;
              v12 = LODWORD(v28[1]);
              v13 = LODWORD(v28[9]);
              v27 = v28[2];
              v25 = HIDWORD(v28[1]);
              v14 = HIDWORD(v28[0]);
              goto LABEL_48;
            }
            if ( (byte_1C006E941 & 1) == 0 )
              goto LABEL_15;
            v23 = v10;
            v20 = LODWORD(v28[9]);
            v15 = HIDWORD(v28[0]);
LABEL_51:
            McTemplateK0ppqqpx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              &EventDestroyCPUNotification,
              0LL,
              v4,
              P,
              1,
              v15,
              v20,
              v23);
            goto LABEL_15;
          }
          if ( (byte_1C006E941 & 1) == 0 )
            goto LABEL_15;
          v21 = v10;
          v19 = LODWORD(v28[9]);
          v5 = HIDWORD(v28[0]);
LABEL_52:
          v6 = (const EVENT_DESCRIPTOR *)&EventDestroyFence;
          goto LABEL_14;
        }
        if ( (byte_1C006E941 & 1) == 0 )
          goto LABEL_15;
        v16 = LODWORD(v28[9]);
        v26 = HIDWORD(v28[1]);
        v24 = v28[1];
        v17 = HIDWORD(v28[0]);
LABEL_55:
        McTemplateK0ppqqpqq_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          &EventDestroySemaphore,
          0LL,
          v4,
          P,
          1,
          v17,
          v16,
          v24,
          v26);
        goto LABEL_15;
      }
      if ( (byte_1C006E941 & 1) == 0 )
        goto LABEL_15;
      v8 = LODWORD(v28[9]);
      v22 = v28[1];
      v9 = HIDWORD(v28[0]);
    }
    McTemplateK0ppqqpt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      &EventDestroySynchronizationMutex,
      0LL,
      v4,
      P,
      1,
      v9,
      v8,
      v22);
    goto LABEL_15;
  }
  WdLogSingleEntry1(1LL, -1073741811LL);
  DxgkLogInternalTriageEvent(v11, 0x40000LL);
  return 3221225485LL;
}
