/*
 * XREFs of ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022690
 * Callers:
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18000C220 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180014698 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800152E4 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180015844 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180024B30 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180025260 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180027130 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x180034760 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007B378 (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007B5B0 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18007B920 (-HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18007BFA0 (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 * Callees:
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180005DD4 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x180007078 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18000709C (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x180007110 (-HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@Exec.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013360 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180013834 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800139C8 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18001777C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x1800177C0 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017AE0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180017B68 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001852C (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800193F0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180019944 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180023510 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x180024970 (RmpActivityImportanceMergeVectors.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002D540 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x1800376F4 (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180037730 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BBBC (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18003BFD0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18003DC70 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800537B4 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18007BAC4 (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x18007C904 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 */

void __fastcall HampHostUpdateActivityState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *v1; // rsi
  int v2; // r11d
  int v3; // edi
  _QWORD *v4; // r10
  struct _RM_HAM_ACTIVITY_HOST *v5; // rax
  int v6; // r12d
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  unsigned __int8 v9; // r14
  unsigned int v10; // ebx
  char *v11; // rax
  char v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // ecx
  __int16 v18; // r8
  unsigned __int16 v19; // dx
  unsigned __int16 v20; // r11
  unsigned int v21; // r8d
  signed int v22; // ecx
  unsigned int v23; // ecx
  unsigned __int8 *v24; // rcx
  unsigned __int8 v25; // dl
  __int64 v26; // rdx
  unsigned __int8 v27; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  struct _HAM_DEPENDENCY_GROUP *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rax
  char v35; // cl
  __int64 v36; // rcx
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  unsigned __int64 v38; // rcx
  int v39; // r12d
  __int64 v40; // r13
  __int64 v41; // r15
  __int64 v42; // r9
  __int64 v43; // rcx
  _QWORD *v44; // rdi
  __int64 v45; // rdi
  unsigned int v46; // ebx
  char v47; // cl
  char v48; // r14
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // r10
  __int64 v52; // r10
  char v53; // cl
  char v54; // dl
  int v55; // r14d
  char v56; // di
  int v57; // ebx
  int v58; // r15d
  int v59; // edi
  __int64 v60; // rax
  int v61; // edx
  unsigned __int64 v62; // r8
  struct _RM_HAM_ACTIVITY_HOST *v63; // rbx
  ULONG *v64; // rbx
  __int64 v65; // rcx
  char *v66; // rsi
  int v67; // r14d
  DWORD v68; // edi
  __int64 v69; // rsi
  _QWORD *v70; // rbx
  unsigned int v71; // edx
  __int64 *v72; // rax
  __int64 v73; // rdx
  bool v74; // zf
  DWORD v75; // r12d
  _QWORD *Value; // r14
  __int64 *v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 *v81; // rdi
  struct _HAM_ACTIVITY *NextActivity; // rcx
  __int64 v83; // rcx
  int v84; // r8d
  int v85; // r9d
  int v86; // ecx
  int v87; // edx
  __int64 v88; // rax
  __int64 v89; // r8
  struct _HAM_PACKAGE *v90; // rdi
  unsigned __int64 v91; // rbx
  BOOL IsSuspendWaiter; // eax
  __int64 v93; // rdx
  int v94; // ebx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // [rsp+40h] [rbp-49h]
  int v98; // [rsp+50h] [rbp-39h] BYREF
  int v99; // [rsp+54h] [rbp-35h] BYREF
  int v100; // [rsp+58h] [rbp-31h] BYREF
  int v101; // [rsp+5Ch] [rbp-2Dh] BYREF
  unsigned int v102; // [rsp+60h] [rbp-29h] BYREF
  struct _FILETIME v103; // [rsp+68h] [rbp-21h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+70h] [rbp-19h] BYREF
  __int64 v105; // [rsp+78h] [rbp-11h] BYREF
  __int64 v106; // [rsp+80h] [rbp-9h] BYREF
  __int64 v107; // [rsp+88h] [rbp-1h]
  struct _RTL_BITMAP BitMapHeader; // [rsp+90h] [rbp+7h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v109; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v110; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v111; // [rsp+100h] [rbp+77h] BYREF
  int v112; // [rsp+108h] [rbp+7Fh] BYREF

  v109 = a1;
  v1 = a1;
  v2 = 1;
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 )
  {
    LODWORD(v111) = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v101, (union _RM_OPTIMIZATION_STATE *)&v112);
    if ( (v101 & 0x80u) != 0 && (v112 & 0x80u) == 0
      || (v101 & 0x100) != 0 && (v112 & 0x100) == 0
      || (v80 = *((_QWORD *)v1 + 83), (v80 & 0x800000000LL) != 0) )
    {
      LODWORD(v111) = 0;
    }
    else
    {
      if ( (v80 & 0x40000000000LL) == 0 || (v80 & 0x30000) == 0 )
      {
        v2 = 1;
        LODWORD(v111) = 1;
        goto LABEL_6;
      }
      LODWORD(v111) = 0;
    }
    v2 = 1;
  }
LABEL_6:
  v3 = 0;
  v4 = (_QWORD *)((char *)v1 + 608);
  v5 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v1 + 76);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 6;
  v10 = 2;
  if ( v5 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)v1 + 608) )
  {
    v11 = (char *)v5 - 96;
    if ( v11 )
    {
      while ( 1 )
      {
        if ( (v11[552] & 0x48) != 0 )
          goto LABEL_38;
        v12 = v11[562];
        if ( v12 == 3 )
          break;
        if ( v12 == 2 )
          goto LABEL_11;
        v24 = (unsigned __int8 *)(v11 + 563);
LABEL_35:
        v25 = *v24;
        if ( *v24 != 6 )
          goto LABEL_36;
LABEL_38:
        v26 = *((_QWORD *)v11 + 12);
        if ( v26 != *((_QWORD *)v11 + 10) + 608LL )
        {
          v11 = (char *)(v26 - 96);
          if ( v26 != 96 )
            continue;
        }
        v1 = v109;
        v2 = 1;
        v4 = (_QWORD *)((char *)v109 + 608);
        goto LABEL_41;
      }
      v6 = 1;
LABEL_11:
      if ( *((_QWORD *)v11 + 8) )
      {
        v13 = *((_QWORD *)v11 + 10);
        if ( v13 )
          v14 = v13 + 560;
        else
          v14 = 624LL;
        v15 = *((_DWORD *)v11 + 28);
        v16 = v15 >> 10;
        v17 = v15 >> 13;
        if ( *(_DWORD *)v14 != 2 )
          LOBYTE(v16) = v17;
        if ( (v16 & 1) != 0 )
        {
          v18 = *((_WORD *)v11 + 212);
          v7 = 1;
          v19 = v18 & 0x30;
          if ( (v18 & 0xC0) != 0xC0 )
            v10 = (v18 & 0xEu) >= 8 && v19 >= 0x20u;
          v20 = v18 & 0xE;
          v21 = *((_DWORD *)v11 + 120) & 3;
          v22 = v21;
          if ( v21 <= v10 )
            v22 = v10;
          if ( v3 <= v22 )
          {
            if ( (*((_WORD *)v11 + 212) & 0xC0) == 0xC0 )
              v23 = 2;
            else
              v23 = v20 >= 8u && v19 >= 0x20u;
            v3 = *((_DWORD *)v11 + 120) & 3;
            if ( v21 <= v23 )
              v3 = v23;
          }
          v10 = 2;
        }
      }
      if ( v12 == 3 )
      {
        v24 = (unsigned __int8 *)(v11 + 563);
      }
      else
      {
        v24 = (unsigned __int8 *)(v11 + 563);
        if ( (unsigned __int8)v11[563] < 3u )
        {
          v25 = *v24;
LABEL_36:
          if ( v9 <= v25 )
            v9 = v25;
          goto LABEL_38;
        }
      }
      if ( (*((_DWORD *)v11 + 28) & 0x100000) != 0 )
        v8 = 1;
      goto LABEL_35;
    }
  }
LABEL_41:
  v27 = v9;
  v28 = *((_QWORD *)v1 + 83) ^ (*((_QWORD *)v1 + 83) ^ ((__int64)v3 << 32)) & 0x300000000LL;
  v29 = (v28 ^ ((unsigned __int64)v7 << 36)) & 0x1000000000LL ^ v28;
  v30 = v29 ^ (v29 ^ ((unsigned __int64)v8 << 39)) & 0x8000000000LL;
  v31 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)v1 + 88);
  if ( v6 )
    v27 = 6;
  *((_QWORD *)v1 + 83) = v30 ^ ((unsigned int)v30 ^ (v27 << 26)) & 0x1C000000;
  if ( v31 && (v27 == 0) != (((v30 >> 26) & 7) == 0) )
  {
    v87 = 1;
    if ( v27 )
      v87 = -1;
    HampDepGroupAddRemoveResourceWaiter(v31, v87);
    v2 = 1;
    v4 = (_QWORD *)((char *)v1 + 608);
  }
  v32 = *((_QWORD *)v1 + 83);
  v33 = 1024LL;
  if ( (v32 & 0x4000000000LL) == 0 && ((v32 & 0x30000) == 0 || (v32 & 0x8000000000LL) != 0) && (_QWORD *)*v4 != v4 )
  {
    v34 = *v4 - 96LL;
    if ( *v4 != 96LL )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(v34 + 552) & 0x48) == 0 )
        {
          v35 = *(_BYTE *)(v34 + 562);
          if ( (v35 == 3 || v35 == 2 && *(_BYTE *)(v34 + 563) >= 3u) && (*(_DWORD *)(v34 + 112) & 0x400) != 0 )
            break;
        }
        v36 = *(_QWORD *)(v34 + 96);
        if ( v36 != *(_QWORD *)(v34 + 80) + 608LL )
        {
          v34 = v36 - 96;
          if ( v36 != 96 )
            continue;
        }
        goto LABEL_61;
      }
      FirstActivity = HampHostGetFirstActivity(v1);
      if ( FirstActivity )
      {
        do
        {
          if ( (unsigned __int8)(*((_BYTE *)FirstActivity + 562) - 2) <= 1u
            && (*((_DWORD *)FirstActivity + 30) & 0x100) != 0
            && (*((_DWORD *)FirstActivity + 138) & 0x300u) < 0x300 )
          {
            v88 = *((_QWORD *)v1 + 83);
            v89 = 5LL;
            if ( (v88 & 0x30000) == 0 )
              v89 = 2LL;
            HampActRequestStopEx(FirstActivity, 3LL, v89, 0LL, (unsigned __int16)v88, 128, 0LL);
          }
          FirstActivity = HampHostGetNextActivity(FirstActivity);
        }
        while ( FirstActivity );
        v4 = (_QWORD *)((char *)v1 + 608);
        v33 = 1024LL;
        v2 = 1;
      }
    }
  }
LABEL_61:
  v38 = *((_QWORD *)v1 + 83);
  v39 = 0;
  *((_QWORD *)v1 + 84) &= 0xFFFFFFFFFFFFFFDBuLL;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = v38 >> 37;
  v110 = (unsigned __int16)v2;
  v99 = 0;
  v40 = (v38 >> 44) & 1;
  v107 = v40;
  v41 = (v38 >> 40) & 1;
  v42 = 0x100000000000LL;
  *((_QWORD *)v1 + 83) = v38 & 0x9FFFE09FFFFFFFFFuLL;
  v43 = 0LL;
  v44 = (_QWORD *)*v4;
  v98 = 0;
  if ( v44 != v4 )
  {
    v45 = (__int64)(v44 - 12);
    if ( v45 )
    {
      v46 = v110;
      while ( 1 )
      {
        v47 = *(_BYTE *)(v45 + 562);
        if ( (unsigned __int8)(v47 - 1) <= 1u || (v48 = *(_BYTE *)(v45 + 562), v47 == 3) )
        {
          v48 = *(_BYTE *)(v45 + 562);
          if ( ((unsigned int)v33 & *(_DWORD *)(v45 + 116)) != 0 && (*(_DWORD *)(v45 + 120) & 0x200) != 0 )
          {
            *((_QWORD *)v1 + 84) |= 0x20uLL;
            v48 = *(_BYTE *)(v45 + 562);
          }
        }
        if ( (*(_BYTE *)(v45 + 552) & 0x48) != 0 )
          goto LABEL_67;
        if ( v48 == 3 )
          break;
        if ( v48 == 2 && *(_BYTE *)(v45 + 563) )
        {
          v49 = *(unsigned int *)(v45 + 424);
          if ( !*(_QWORD *)(v45 + 512) && ((v49 & 0x40) != 0 || ((unsigned __int8)v49 & 0xEu) >= 8) )
            *((_QWORD *)v1 + 83) |= 0x100000000000uLL;
          if ( ((unsigned int)v33 & *(_DWORD *)(v45 + 112)) == 0 )
            v39 = v2;
          v99 = v39;
          goto LABEL_79;
        }
LABEL_67:
        v43 = *(_QWORD *)(v45 + 96);
        if ( v43 != *(_QWORD *)(v45 + 80) + 608LL )
        {
          v45 = v43 - 96;
          if ( v43 != 96 )
            continue;
        }
        goto LABEL_107;
      }
      v49 = *(unsigned int *)(v45 + 424);
LABEL_79:
      v46 = RmpActivityImportanceMergeVectors(v46, v49, v33, 0x100000000000LL);
      v110 = v46;
      v50 = *(unsigned int *)(v45 + 112);
      if ( (v50 & 0x2000) != 0 )
        *((_QWORD *)v1 + 83) |= 0x80000000000uLL;
      v51 = v50 >> 23;
      if ( (unsigned __int8)((v50 >> 23) & 3) <= (unsigned __int8)((*((_QWORD *)v1 + 83) >> 61) & 3) )
        v51 = *((_QWORD *)v1 + 83) >> 61;
      v52 = *((_QWORD *)v1 + 83) ^ (*((_QWORD *)v1 + 83) ^ (v51 << 61)) & 0x6000000000000000LL;
      *((_QWORD *)v1 + 83) = v52;
      if ( (v52 & 0x6000000000000000LL) != 0 )
        *((_QWORD *)v1 + 84) |= 3uLL;
      v53 = *(_BYTE *)(v45 + 562);
      if ( v53 == 3 || v53 == 2 && *(_BYTE *)(v45 + 563) >= 3u )
      {
        v33 = 1024LL;
        if ( (v50 & 0x400) != 0 )
        {
          v52 |= 0x4000000000uLL;
          *((_QWORD *)v1 + 83) = v52;
        }
        v54 = *(_BYTE *)(v45 + 562);
        if ( v54 == 3 || v54 == 2 && *(_BYTE *)(v45 + 563) >= 5u )
        {
          if ( (v50 & 0x400) != 0 )
          {
            v52 |= 0x10000000000uLL;
            *((_QWORD *)v1 + 83) = v52;
          }
          if ( v48 == 3 )
          {
            if ( (v50 & 0x800) != 0 )
            {
              v52 |= 0x20000000000uLL;
              *((_QWORD *)v1 + 83) = v52;
            }
            if ( (v50 & 0x1000) != 0 )
            {
              v52 |= 0x40000000000uLL;
              *((_QWORD *)v1 + 83) = v52;
            }
            if ( (*(_BYTE *)(v45 + 120) & 8) != 0 )
              *((_QWORD *)v1 + 84) |= 4uLL;
            if ( (v50 & 0x10000) != 0 )
            {
              *((_QWORD *)v1 + 84) |= 8uLL;
              v98 = 1;
            }
            if ( (v50 & 0x1800000) == 0x1000000 )
              *((_QWORD *)v1 + 84) |= 0x10uLL;
            *((_QWORD *)v1 + 83) = v52 | 0x2000000000LL;
          }
        }
      }
      else
      {
        v33 = 1024LL;
      }
      v42 = 0x100000000000LL;
      v2 = 1;
      goto LABEL_67;
    }
  }
  v46 = v110;
LABEL_107:
  if ( (*((_QWORD *)v1 + 83) & 0x10000000000LL) != 0 )
  {
    v55 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(v1, (union _RM_OPTIMIZATION_STATE *)&v102, (union _RM_OPTIMIZATION_STATE *)&v100);
    v43 = v102;
    if ( (v102 & 0x80u) == 0 || (v100 & 0x80u) != 0 )
    {
      if ( (v102 & 0x100) == 0 || (v100 & 0x100) != 0 )
      {
        v79 = *((_QWORD *)v1 + 83);
        v55 = (v79 & 0x800000000LL) == 0 && ((v79 & 0x40000000000LL) == 0 || (v79 & 0x30000) == 0);
      }
      else
      {
        v55 = 0;
      }
    }
    else
    {
      v55 = 0;
    }
  }
  if ( (_DWORD)v111 != v55 )
  {
    if ( !v55 )
    {
      if ( (_DWORD)v111 )
      {
        HampPdcSignalWorker(
          (struct _HOST_ACTIVITY_MANAGER **)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 99)
                                                                                             + 88LL)
                                                                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                    + 120)
                                                        + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                           + 168),
          0);
        if ( (unsigned int)HampHostIsQuiesceSerialized(v1) )
        {
          if ( HampHostIsResumed(v1) )
          {
            v90 = *(struct _HAM_PACKAGE **)(*((_QWORD *)v1 + 99) + 88LL);
            HampPkgAcquireLockExclusive(v90);
            HampPkgReleaseLockExclusive(v90);
            RtlWakeAllConditionVariable((char *)v90 + 320);
          }
        }
      }
    }
    v81 = (__int64 *)*((_QWORD *)v1 + 88);
    if ( v81 )
    {
      HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)v1 + 88));
      if ( !(_DWORD)v111 || v55 )
        ++*((_DWORD *)v81 + 22);
      else
        --*((_DWORD *)v81 + 22);
      v86 = *((_DWORD *)v81 + 22);
      if ( (unsigned int)dword_1800DB218 > 5 )
      {
        v105 = *((_QWORD *)v1 - 4);
        v106 = *v81;
        LOBYTE(v109) = v55;
        LODWORD(v111) = v86;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v86,
          (unsigned int)&unk_1800BF5FD,
          v84,
          v85,
          (__int64)&v106,
          (__int64)&v111,
          (__int64)&v105,
          (__int64)&v109);
      }
      HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v81);
    }
    else if ( (unsigned int)dword_1800DB218 > 5 )
    {
      v111 = *((_QWORD *)v1 - 4);
      LOBYTE(v109) = v55;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v43,
        (int)&unk_1800BFE72,
        v33,
        v42,
        (__int64)&v111,
        (__int64)&v109);
    }
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v56 = v110;
  v103 = SystemTimeAsFileTime;
  if ( (*((_BYTE *)v1 + 680) & 0xE) == 8 )
  {
    if ( (v110 & 0xE) == 8 )
      goto LABEL_114;
    *((struct _FILETIME *)v1 + 131) = v103;
  }
  else
  {
    if ( (v110 & 0xE) != 8 )
      goto LABEL_114;
    *((struct _FILETIME *)v1 + 130) = v103;
  }
  v83 = *((_QWORD *)v1 + 99);
  *((_QWORD *)v1 + 83) |= 0x1000000000000000uLL;
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(v83 + 88));
LABEL_114:
  *((_DWORD *)v1 + 170) = v46;
  if ( (v110 & 0x400) == 0 )
    *((_QWORD *)v1 + 83) &= ~0x4000000000000uLL;
  if ( (v56 & 0x40) != 0 && *((_QWORD *)v1 + 124) && *((_QWORD *)v1 + 125) )
  {
    v91 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                + 120)
                    + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)(v91 - 392));
    if ( *(_QWORD *)(v91 + 656) != v91 + 656 )
    {
      ++*(_DWORD *)(v91 + 676);
      RtlWakeAddressAll(v91 + 676);
    }
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)(v91 - 392));
  }
  if ( (*((_QWORD *)v1 + 83) & 0x10000000000LL) != 0 && !(_DWORD)v41 && HampHostIsResumed(v1) )
    HampHostChangeApplicationExecutionState((__int64)v1, 0, 1LL);
  v57 = (unsigned __int16)v110 >> 6;
  v58 = (unsigned __int16)v110 >> 4;
  v59 = (unsigned __int16)v110 >> 1;
  if ( *((_DWORD *)v1 + 140) == 2 )
  {
    v75 = HampLockTrackerId;
    v40 = *((_QWORD *)v1 + 99);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v75) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(v40 + 584);
    *(_DWORD *)(v40 + 592) = GetCurrentThreadId();
    v110 = *(_DWORD *)(v40 + 620) & 0xFFFFFCE0 | v59 & 7 | (8 * (v58 & 3 | (32 * (v98 & 1 | (2 * (v57 & 1))))));
    if ( *(_DWORD *)(v40 + 620) != v110 )
      HampAppCommitStateSummary((struct _HAM_APPLICATION *)v40, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v110);
    if ( HampLockTrackerId != -1 )
    {
      v77 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v78 = *v77;
      if ( (*v77 & 0x20) == 0 )
        __int2c();
      v74 = v77[6]-- == 1;
      if ( v74 )
        *v77 = v78 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    *(_DWORD *)(v40 + 592) = 0;
    RtlReleaseSRWLockExclusive(v40 + 584);
    v39 = v99;
    LODWORD(v40) = v107;
  }
  if ( ((LOBYTE(BitMapHeader.SizeOfBitMap) ^ (unsigned __int8)(*((_QWORD *)v1 + 83) >> 37)) & 1) != 0 )
    RtlWakeAllConditionVariable((char *)v1 + 16);
  v60 = *((_QWORD *)v1 + 83);
  if ( (v60 & 0x100000000000LL) != 0 && !(_DWORD)v40 && (v60 & 0x30000) != 0 )
    HampHostIssueStopRequests((__int64)v1, 2u, 5u, 0, 5, 0, 2, 0LL, v97, 0LL);
  RtlWakeAllConditionVariable((char *)v1 + 696);
  HampHostCheckQueueStateWorker(v1, v39 != 0);
  RmHamHostGetCurrentState(v1, (union _RM_OPTIMIZATION_STATE *)&v99, (union _RM_OPTIMIZATION_STATE *)&v98);
  v62 = *((_QWORD *)v1 + 83);
  if ( ((v62 >> 16) & 3) == 0 )
    goto LABEL_123;
  if ( ((v62 >> 16) & 3) != 1 )
  {
    if ( ((v62 >> 16) & 3) == 2 )
    {
      if ( (v62 & 0x8000000000000LL) != 0 )
        goto LABEL_123;
    }
    else if ( ((v62 >> 16) & 3) != 3 )
    {
      goto LABEL_123;
    }
LABEL_212:
    if ( (v62 & 0x800000000LL) == 0 )
    {
      IsSuspendWaiter = HampHostIsSuspendWaiter(v1, v61);
      *((_QWORD *)v1 + 83) |= 0x800000000uLL;
      v93 = 16LL;
      v94 = IsSuspendWaiter;
      if ( v1 )
        v93 = (__int64)v1 - 48;
      if ( _InterlockedIncrement64((volatile signed __int64 *)v93) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)v1 + 79));
      HampHostCheckUpdateSuspendWaitState(v1, v94, v95, v96);
    }
    goto LABEL_123;
  }
  if ( (v99 & 0x80u) == 0 || (v98 & 0x80u) != 0 || (v62 & 0x40000000000LL) != 0 )
    goto LABEL_123;
  NextActivity = HampHostGetFirstActivity(v1);
  if ( !NextActivity )
    goto LABEL_212;
  while ( (*((_BYTE *)NextActivity + 552) & 0x48) != 0
       || !HampActIsStartedOrReachedPendState((__int64)NextActivity, 5u)
       || (*((_DWORD *)NextActivity + 28) & 0x2000) == 0 )
  {
    NextActivity = HampHostGetNextActivity(NextActivity);
    if ( !NextActivity )
      goto LABEL_212;
  }
LABEL_123:
  if ( *((_DWORD *)v1 + 140) != 2 )
    return;
  v63 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)v1 + 76);
  if ( v63 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)v1 + 608) )
  {
    v64 = (ULONG *)((char *)v63 - 96);
    if ( v64 )
    {
      while ( 1 )
      {
        if ( *((_BYTE *)v64 + 562) == 3 && (v64[138] & 0x48) == 0 )
        {
          RtlInitializeBitMap(&BitMapHeader, v64 + 124, 0x2Fu);
          if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
            break;
        }
        v65 = *((_QWORD *)v64 + 12);
        if ( v65 != *((_QWORD *)v64 + 10) + 608LL )
        {
          v64 = (ULONG *)(v65 - 96);
          if ( v65 != 96 )
            continue;
        }
        goto LABEL_138;
      }
      v67 = 1;
      v66 = (char *)v1 + 792;
      goto LABEL_143;
    }
  }
LABEL_138:
  if ( (*((_QWORD *)v1 + 83) & 0x400000000000000LL) != 0 )
  {
    v66 = (char *)v1 + 792;
    if ( (unsigned int)HampUtilHasExternalResourceAccess(
                         (ULONG *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v66 + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                          + 120)
                                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                 + 568),
                         27) )
    {
      v67 = 1;
      goto LABEL_143;
    }
  }
  else
  {
    v66 = (char *)v1 + 792;
  }
  v67 = 0;
LABEL_143:
  v68 = HampLockTrackerId;
  v69 = *(_QWORD *)v66;
  if ( HampLockTrackerId != -1 )
  {
    v70 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v68) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v70 |= 0x20uLL;
    ++v70[6];
  }
  RtlAcquireSRWLockExclusive(v69 + 584);
  *(_DWORD *)(v69 + 592) = GetCurrentThreadId();
  v71 = *(_DWORD *)(v69 + 616) & 0xFFFBFFFF | (v67 << 18);
  *(_DWORD *)(v69 + 616) = v71;
  if ( v67 != ((v71 >> 17) & 1) && (v71 & 0x80000) == 0 )
  {
    *(_DWORD *)(v69 + 616) = v71 | 0x80000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v69 + 24)) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*(_QWORD *)(v69 + 560));
  }
  if ( HampLockTrackerId != -1 )
  {
    v72 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v73 = *v72;
    if ( (*v72 & 0x20) == 0 )
      __int2c();
    v74 = v72[6]-- == 1;
    if ( v74 )
      *v72 = v73 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *(_DWORD *)(v69 + 592) = 0;
  RtlReleaseSRWLockExclusive(v69 + 584);
}
