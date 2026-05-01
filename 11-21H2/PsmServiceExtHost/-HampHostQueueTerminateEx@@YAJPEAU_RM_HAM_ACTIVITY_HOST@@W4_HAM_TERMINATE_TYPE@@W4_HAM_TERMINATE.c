/*
 * XREFs of ?HampHostQueueTerminateEx@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@KPEA_KPEAK@Z @ 0x18002DB4C
 * Callers:
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180007E30 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18000B5A0 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014A10 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z @ 0x18003A66C (-HamSrvRegisterDesktopBridgeProcess@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXK1@Z.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18003DC30 (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x1800436FC (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK@Z @ 0x180044524 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_KKK.c)
 *     ?HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x180071BAC (-HamSrvTerminateApplicationHost@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180071E88 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180072708 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180072ED8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800761DC (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x18007A878 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007A998 (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x18007B11C (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180087598 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D998 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002DACC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x18002DFA8 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x18003EB1C (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4@Z @ 0x180044B74 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075CF8 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18007616C (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18007662C (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180077B4C (-HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077F3C (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007A07C (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostQueueTerminateEx(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        _QWORD *a7,
        unsigned int *a8)
{
  int v8; // r14d
  unsigned int v10; // r9d
  int v12; // r12d
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int8 v17; // r13
  int v18; // edx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  BOOL IsSuspendWaiter; // eax
  int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // r13
  unsigned int v25; // ebx
  __int64 v26; // rax
  const unsigned __int16 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // edx
  unsigned int v31; // esi
  unsigned __int64 AppliedTaskCompletions; // rax
  bool v34; // zf
  unsigned __int8 v35; // al
  char v36; // [rsp+40h] [rbp-C0h] BYREF
  char v37[3]; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v38; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v39; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v40; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v45; // [rsp+78h] [rbp-88h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-70h] BYREF
  void *v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  const unsigned __int16 *v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B8h] [rbp-48h]
  int v53; // [rsp+BCh] [rbp-44h]
  __int64 *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  int *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  unsigned int *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  char *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  unsigned int *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  __int64 *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  __int64 *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  struct _EVENT_DATA_DESCRIPTOR v68; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]

  v8 = a5;
  v10 = a2;
  v39 = a3;
  v38 = a2;
  v12 = 0;
  v45 = a8;
  if ( !a5 )
  {
    v12 = 1;
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
    v10 = v38;
  }
  v13 = *(_QWORD *)(a1 + 704);
  v40 = v13;
  if ( !a7
    || (AppliedTaskCompletions = HampHostGetAppliedTaskCompletions((struct _RM_HAM_ACTIVITY_HOST *)a1),
        v34 = (AppliedTaskCompletions & *a7) == 0,
        *a7 &= AppliedTaskCompletions,
        v34) )
  {
    v14 = *(_QWORD *)(a1 + 664);
    v15 = v14 >> 16;
    v16 = BYTE2(v14) & 3;
    if ( v16 >= v10 )
    {
      if ( (unsigned int)dword_1800DC218 > 5 )
      {
        v40 = *(_QWORD *)(a1 - 32);
        v37[0] = BYTE2(v14) & 3;
        v36 = v10;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v16,
          (unsigned int)&unk_1800C124B,
          v14,
          v10,
          (__int64)&v40,
          (__int64)&v36,
          (__int64)v37);
      }
    }
    else
    {
      if ( (v14 & 0x800000000LL) == 0 )
      {
        v17 = 80;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
        if ( FirstActivity )
        {
          do
          {
            if ( *((_BYTE *)FirstActivity + 562) == 2 && *((_BYTE *)FirstActivity + 563) > 4u )
              HampActMoveBackPendState(FirstActivity);
            if ( HampActCanBeInvalidated(FirstActivity) && *((_BYTE *)FirstActivity + 562) == 3 )
            {
              v35 = v17;
              if ( v17 >= *((_BYTE *)FirstActivity + 427) )
                v35 = *((_BYTE *)FirstActivity + 427);
              v17 = v35;
              HampActRequestStopForTerminate(FirstActivity, v38, v39, a4);
            }
            FirstActivity = HampHostGetNextActivity(FirstActivity);
          }
          while ( FirstActivity );
          v13 = v40;
          v8 = a5;
        }
        IsSuspendWaiter = HampHostIsSuspendWaiter((struct _RM_HAM_ACTIVITY_HOST *)a1, v18);
        *(_QWORD *)(a1 + 664) &= 0xFFFFFFFFFFFCFFFFuLL;
        v21 = IsSuspendWaiter;
        LOWORD(IsSuspendWaiter) = v39;
        *(_QWORD *)(a1 + 664) |= (unsigned __int64)(v38 & 3) << 16;
        *(_WORD *)(a1 + 664) = IsSuspendWaiter;
        *(_QWORD *)(a1 + 664) &= 0xFFFFFFFFFC03FFFFuLL;
        *(_QWORD *)(a1 + 664) |= (unsigned __int64)v17 << 18;
        RtlQueryUnbiasedInterruptTime(&v40);
        *(_DWORD *)(a1 + 852) = v40 / 0x2710;
        *(_DWORD *)(a1 + 856) = a6;
        HampHostCheckUpdateSuspendWaitState((struct _RM_HAM_ACTIVITY_HOST *)a1, v21, v22, v23);
        v24 = v38;
        if ( v38 == 2 )
        {
          *(_QWORD *)(a1 + 664) |= 0x8000000000000uLL;
          if ( *(_DWORD *)(a1 + 656) != GetCurrentThreadId() )
            HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
        }
        else
        {
          HampHostCheckQueueTerminateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
        }
        if ( a4 )
          LODWORD(a4) = *(_DWORD *)(a4 + 140);
        if ( v13 )
        {
          if ( v8 == 2 )
          {
            ++*(_QWORD *)(v13 + 112);
            v25 = 0;
LABEL_14:
            if ( (unsigned int)dword_1800DC218 > 4
              && (qword_1800DC228 & 0x400000000008LL) != 0
              && (qword_1800DC230 & 0x400000000008LL) == qword_1800DC230 )
            {
              v26 = *(_QWORD *)(a1 + 816);
              v64 = &v43;
              v27 = (const unsigned __int16 *)(a1 + 24);
              v43 = v26;
              v62 = &v39;
              v60 = &v36;
              LODWORD(v26) = *(_DWORD *)(a1 + 560);
              v58 = &v38;
              v41 = v26;
              v28 = *(_QWORD *)(a1 - 32);
              v36 = v24;
              v56 = &v41;
              v44 = v28;
              v54 = &v44;
              v42 = 0x1000000LL;
              v38 = a4;
              v66 = &v42;
              v67 = 8LL;
              v65 = 8LL;
              v63 = 4LL;
              v61 = 1LL;
              v59 = 4LL;
              v57 = 4LL;
              v55 = 8LL;
              if ( a1 == -24 )
              {
                v27 = &word_1800B7A9C;
                v30 = 2;
              }
              else
              {
                v29 = -1LL;
                do
                  ++v29;
                while ( v27[v29] );
                v30 = 2 * v29 + 2;
              }
              *(_DWORD *)&EventDescriptor.Level = 4;
              UserData.Ptr = (ULONGLONG)off_1800DC220;
              v51 = v27;
              v52 = v30;
              EventDescriptor.Keyword = 0x400000000008LL;
              v53 = 0;
              *(_DWORD *)&EventDescriptor.Id = 184549376;
              UserData.Size = *(unsigned __int16 *)off_1800DC220;
              v48 = &unk_1800C0962;
              UserData.Reserved = 2;
              v49 = 129;
              v50 = 1;
              LODWORD(v40) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
              EventWriteTransfer(qword_1800DC238, &EventDescriptor, 0LL, 0LL, 0xAu, &UserData);
            }
            if ( v12 )
            {
              HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v15);
              v12 = 0;
              if ( v25 )
              {
                v25 = 0;
                HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v13);
              }
            }
            goto LABEL_23;
          }
          HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v13);
          if ( v8 == 3 )
          {
            HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v13);
            v25 = 0;
          }
          else
          {
            v25 = HampDepGroupTryEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v13, (unsigned __int64 *)(a1 + 624));
          }
          HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v13);
        }
        else
        {
          v25 = 0;
          if ( v8 == 2 )
            goto LABEL_14;
        }
        HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
        goto LABEL_14;
      }
      if ( (unsigned int)dword_1800DC218 > 5 )
      {
        v40 = *(_QWORD *)(a1 - 32);
        v70 = 8LL;
        v69 = &v40;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_1800DC218,
          (unsigned __int8 *)dword_1800C0F1D,
          0LL,
          0LL,
          3u,
          &v68);
      }
    }
    v25 = 0;
LABEL_23:
    v31 = 0;
    goto LABEL_24;
  }
  v25 = 0;
  v31 = -1058275328;
LABEL_24:
  *v45 = v25;
  if ( v12 )
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v15);
  return v31;
}
