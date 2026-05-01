/*
 * XREFs of CrmActivityStart @ 0x18002B870
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x18002C280 (CrmRpcSrvActivityAllocate.c)
 *     CrmRegistrationCreateActivity @ 0x180043870 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x180007154 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmStateMonitorCleanup @ 0x180008C9C (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorStart @ 0x1800095D8 (CrmStateMonitorStart.c)
 *     CrmStateMonitorListenerRemove @ 0x18000A7B8 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorSizeGet @ 0x18000AC98 (CrmStateMonitorSizeGet.c)
 *     CrmStateMonitorInitialize @ 0x18000ADF4 (CrmStateMonitorInitialize.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180011964 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     CrmRegistrationNotify @ 0x1800274BC (CrmRegistrationNotify.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmPolicyTableEntryGet @ 0x18002BFE4 (CrmPolicyTableEntryGet.c)
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x18002C050 (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     CrmPolicyComparisonPairsGet @ 0x18004B900 (CrmPolicyComparisonPairsGet.c)
 *     CrmStateMonitorTrackedStateNotificationMethod @ 0x18004BBD0 (CrmStateMonitorTrackedStateNotificationMethod.c)
 *     CempLockAcquireShared @ 0x180052F90 (CempLockAcquireShared.c)
 *     CempLockReleaseShared @ 0x180052FBC (CempLockReleaseShared.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     CrmStateMonitorListenerAdd @ 0x18006E1A0 (CrmStateMonitorListenerAdd.c)
 */

__int64 __fastcall CrmActivityStart(struct _WNF_STATE_NAME *a1, __int64 a2, ULONG a3, __int64 a4, void *Source1)
{
  unsigned int v5; // esi
  __int64 v8; // r13
  unsigned __int64 *v10; // rax
  ULONG v11; // ecx
  __int64 v12; // rax
  __int64 v13; // rdx
  ULONG v14; // esi
  __int128 *v15; // rcx
  __int128 *v16; // rax
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  HANDLE CurrentProcess; // rax
  int StateNameForIpc; // edi
  PVOID Heap; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // r9
  unsigned int *v31; // r13
  __int64 v32; // rdi
  signed int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // r14
  unsigned int *v37; // rsi
  __int128 v38; // xmm0
  char *v39; // r15
  unsigned int *v40; // r12
  unsigned int **v41; // rcx
  unsigned __int64 v43; // r9
  unsigned int v44; // r8d
  unsigned int v45; // eax
  char *v46; // rax
  char *v47; // rsi
  __int64 v48; // r8
  unsigned int v50; // [rsp+30h] [rbp-D0h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v52; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v53[8]; // [rsp+40h] [rbp-C0h] BYREF
  PSID TokenInformation[12]; // [rsp+60h] [rbp-A0h] BYREF
  void *Key[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v56; // [rsp+D0h] [rbp-30h] BYREF
  int v57; // [rsp+D8h] [rbp-28h]
  struct _EVENT_DATA_DESCRIPTOR Source2[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v59; // [rsp+100h] [rbp+0h]
  __int128 v60; // [rsp+110h] [rbp+10h]
  int v61; // [rsp+120h] [rbp+20h]
  _BYTE DestinationSid[80]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+180h] [rbp+80h] BYREF
  UUID *v64; // [rsp+1A0h] [rbp+A0h]
  __int64 v65; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 *v66; // [rsp+1B0h] [rbp+B0h]
  __int64 v67; // [rsp+1B8h] [rbp+B8h]
  ULONG *p_ReturnLength; // [rsp+1C0h] [rbp+C0h]
  __int64 v69; // [rsp+1C8h] [rbp+C8h]
  __int64 *v70; // [rsp+1D0h] [rbp+D0h]
  __int64 v71; // [rsp+1D8h] [rbp+D8h]
  unsigned int *v72; // [rsp+1E0h] [rbp+E0h]
  __int64 v73; // [rsp+1E8h] [rbp+E8h]
  _BYTE v74[672]; // [rsp+1F0h] [rbp+F0h] BYREF

  v5 = *(_DWORD *)(a2 + 24);
  v52 = a2;
  v8 = a2;
  Key[0] = (void *)__PAIR64__(a3, v5);
  v10 = (unsigned __int64 *)bsearch(Key, &CrmActivityToPolicyTable, 0x4CuLL, 0xCuLL, CrmActivityPolicyTableCompare);
  if ( v10 )
    goto LABEL_5;
  if ( v5 - 9 <= 0x79 && a3 - 301 <= 0x79 )
  {
    v56 = __PAIR64__(a3, v5);
    v10 = &v56;
    v57 = 17;
LABEL_5:
    v11 = *((_DWORD *)v10 + 2);
    goto LABEL_6;
  }
  v11 = v53[4];
LABEL_6:
  a1[8].Data[1] = v11;
  a1[8].Data[0] = a3;
  if ( a4 )
  {
    v14 = CrmPolicyComparisonPairsGet(a4, v74);
    v50 = v14;
  }
  else
  {
    v12 = CrmPolicyTableEntryGet();
    v13 = 5LL;
    v14 = *(_DWORD *)(v12 + 4);
    v15 = (__int128 *)(v12 + 8);
    v50 = v14;
    v16 = (__int128 *)v74;
    do
    {
      v16 += 8;
      v17 = *v15;
      v18 = v15[1];
      v15 += 8;
      *(v16 - 8) = v17;
      v19 = *(v15 - 6);
      *(v16 - 7) = v18;
      v20 = *(v15 - 5);
      *(v16 - 6) = v19;
      v21 = *(v15 - 4);
      *(v16 - 5) = v20;
      v22 = *(v15 - 3);
      *(v16 - 4) = v21;
      v23 = *(v15 - 2);
      *(v16 - 3) = v22;
      v24 = *(v15 - 1);
      *(v16 - 2) = v23;
      *(v16 - 1) = v24;
      --v13;
    }
    while ( v13 );
    v25 = v15[1];
    *v16 = *v15;
    v16[1] = v25;
  }
  a1[7] = (struct _WNF_STATE_NAME)_InterlockedIncrement64(&qword_1800DC1A8);
  memset(Source2, 0, sizeof(Source2));
  v61 = 0;
  v59 = 0LL;
  v60 = 0LL;
  if ( RtlCompareMemory(Source1, Source2, 0x44uLL) == 68 )
  {
    if ( a3 == 17 )
    {
      a1[19] = (struct _WNF_STATE_NAME)WNF_RM_QUIET_MODE;
      v53[0] = 255;
      StateNameForIpc = RtlPublishWnfStateData(WNF_RM_QUIET_MODE, 0LL, v53, 4LL, 0LL);
      if ( StateNameForIpc < 0 )
        goto LABEL_53;
    }
  }
  else
  {
    Key[0] = 0LL;
    CurrentProcess = GetCurrentProcess();
    StateNameForIpc = NtOpenProcessToken(CurrentProcess, 8u, Key);
    if ( StateNameForIpc >= 0 )
    {
      StateNameForIpc = NtQueryInformationToken(Key[0], TokenUser, TokenInformation, 0x58u, &ReturnLength);
      if ( StateNameForIpc >= 0 )
        RtlCopySid(0x44u, DestinationSid, TokenInformation[0]);
    }
    if ( Key[0] )
      NtClose(Key[0]);
    if ( StateNameForIpc < 0 )
      goto LABEL_53;
    StateNameForIpc = RmpWnfCreateStateNameForIpcEx(DestinationSid, Source1, 4u, 0, a1 + 18);
    if ( StateNameForIpc < 0 )
      goto LABEL_53;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 56LL * v14);
  a1[14] = (struct _WNF_STATE_NAME)Heap;
  if ( Heap )
  {
    a1[12].Data[0] = v14;
    a1[16] = (struct _WNF_STATE_NAME)CempQueryUnbiasedInterruptTimeMs64();
    LODWORD(Key[0]) = 0;
    if ( v14 )
    {
      v30 = 0LL;
      v56 = 0LL;
      v31 = (unsigned int *)v74;
      while ( 1 )
      {
        v32 = (int)*v31;
        v33 = CrmStateMonitorTrackedStateNotificationMethod(*v31, v29, CrmActivityListenerCallback, v30);
        if ( v33 > (signed int)a1[15].Data[0] )
          a1[15].Data[0] = v33;
        v36 = v35 + *(_QWORD *)&a1[14];
        *(_QWORD *)(v36 + 16) = 0LL;
        v37 = (unsigned int *)(v36 + 8);
        *(_QWORD *)(v36 + 48) = 0LL;
        v38 = *(_OWORD *)v31;
        *(_QWORD *)(v36 + 24) = a1;
        *(_OWORD *)(v36 + 32) = v38;
        *(_QWORD *)(v36 + 16) = v36 + 8;
        *(_QWORD *)(v36 + 8) = v36 + 8;
        *(_QWORD *)v36 = v34;
        RtlAcquireSRWLockShared(&CrmGlobals);
        v39 = (char *)&CrmGlobals + 8 * v32;
        v40 = (unsigned int *)*((_QWORD *)v39 + 2);
        if ( v40 )
        {
          RtlAcquireSRWLockExclusive(v40 + 2);
          v40[4] = GetCurrentThreadId();
          v41 = (unsigned int **)*((_QWORD *)v40 + 4);
          if ( *v41 != v40 + 6 )
            __fastfail(3u);
          *(_QWORD *)(v36 + 16) = v41;
          *(_QWORD *)v37 = v40 + 6;
          *v41 = v37;
          *((_QWORD *)v40 + 4) = v37;
          RtlReleaseSRWLockShared(&CrmGlobals);
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))v36)(v36, *v40, *((_QWORD *)v40 + 5));
          v40[4] = 0;
          RtlReleaseSRWLockExclusive(v40 + 2);
          if ( (unsigned int)dword_1800DB250 > 5
            && (qword_1800DB260 & 8) != 0
            && (qword_1800DB268 & 8) == qword_1800DB268 )
          {
            *((_QWORD *)&v59 + 1) = 16LL;
            *(_QWORD *)&v59 = &Uuid;
            ReturnLength = *v40;
            *((_QWORD *)&v60 + 1) = 4LL;
            *(_QWORD *)&v60 = &ReturnLength;
            tlgWriteTransfer_EventWriteTransfer(
              (__int64)&dword_1800DB250,
              (unsigned __int8 *)dword_1800BEFE8,
              0LL,
              0LL,
              4u,
              Source2);
          }
        }
        else
        {
          RtlReleaseSRWLockShared(&CrmGlobals);
          v45 = CrmStateMonitorSizeGet(v32);
          v46 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
          v47 = v46;
          if ( !v46 )
            goto LABEL_24;
          CrmStateMonitorInitialize((__int64)v46, v32);
          StateNameForIpc = CrmStateMonitorStart(v47, v36, v48);
          if ( StateNameForIpc < 0 )
          {
            CrmStateMonitorCleanup((__int64)v47);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v47);
            goto LABEL_53;
          }
          RtlAcquireSRWLockExclusive(&CrmGlobals);
          dword_1800DC048 = GetCurrentThreadId();
          if ( *((_QWORD *)v39 + 2) )
          {
            CrmStateMonitorListenerRemove(v47, v36, 1);
            CrmStateMonitorListenerAdd(*((_QWORD *)v39 + 2), v36, 1LL);
          }
          else
          {
            *((_QWORD *)v39 + 2) = v47;
            dword_1800DC048 = 0;
            RtlReleaseSRWLockExclusive(&CrmGlobals);
          }
        }
        v31 += 4;
        v43 = v56;
        v44 = LODWORD(Key[0]) + 1;
        ++a1[13].Data[1];
        v30 = v43 + 56;
        LODWORD(Key[0]) = v44;
        v56 = v30;
        if ( v44 >= v50 )
        {
          v8 = v52;
          break;
        }
      }
    }
    RtlAcquireSRWLockExclusive(&a1[10]);
    a1[11].Data[0] = GetCurrentThreadId();
    if ( a1[8].Data[0] == 17 )
    {
      CrmRegistrationNotifyWindowClosedReasonChange(v8, (__int64)a1);
    }
    else
    {
      CempLockAcquireShared(&unk_1800DC1D0);
      if ( a1[15].Data[1] == 4 )
        CrmRegistrationNotify(v8, (__int64)a1, 1LL);
      CempLockReleaseShared(&unk_1800DC1D0);
    }
    a1[11].Data[0] = 0;
    RtlReleaseSRWLockExclusive(&a1[10]);
    StateNameForIpc = 0;
  }
  else
  {
LABEL_24:
    StateNameForIpc = -1073741801;
  }
LABEL_53:
  if ( (unsigned int)dword_1800DB250 > 5 && (qword_1800DB260 & 4) != 0 && (qword_1800DB268 & 4) == qword_1800DB268 )
  {
    v65 = 16LL;
    v64 = &Uuid;
    v56 = (unsigned __int64)a1[7];
    v67 = 8LL;
    v66 = &v56;
    ReturnLength = a1[8].Data[1];
    p_ReturnLength = &ReturnLength;
    v69 = 4LL;
    v71 = 8LL;
    v50 = StateNameForIpc;
    v52 = *(_QWORD *)(v52 + 16);
    v70 = &v52;
    v72 = &v50;
    v73 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB250,
      (unsigned __int8 *)dword_1800BE9FA,
      0LL,
      0LL,
      7u,
      &v63);
  }
  return (unsigned int)StateNameForIpc;
}
