/*
 * XREFs of ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180015C90
 * Callers:
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006044 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x1800060A4 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@KPEAK@Z @ 0x18000C5D8 (-HampHostNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINAT.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180017F20 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@PEA_K@Z @ 0x180018660 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180021830 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180029FCC (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180036CE0 (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z @ 0x180038000 (-OnAcquired@HAM_ACTIVITY_RM_CONTEXT@@UEAAJPEAX@Z.c)
 *     ?HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18007753C (-HampActCheckSetExpiration@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180077760 (-HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180077B4C (-HampActMoveBackPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x1800781CC (-HampActSetPendState@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180005F20 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180007A5C (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007AA0 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180007B28 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x180009DF4 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18000F9EC (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18000FB70 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180016A20 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityImportanceMergeVectors @ 0x180017D50 (RmpActivityImportanceMergeVectors.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002AAC0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x18002D444 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D998 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002DACC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AC34 (-HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003ACDC (-HampPkgReleaseLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18003AD18 (-HampPkgAcquireLockExclusive@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_PEND_STATE@@KKP6AKPEAU_HAM_ACTIVITY@@PEAX@Z5PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003D0C4 (-HampHostIssueStopRequests@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_.c)
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x18003D160 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003DB64 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@ExecutionModel@@@Z @ 0x18003DD24 (-HampUtilHasExternalResourceAccess@@YAKPEAU_HAM_EXTERNAL_RESOURCE_MASK@@W4Enum@ResourceType@Exec.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180050350 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18007397C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWr.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180073A18 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z @ 0x180074714 (-HampDepGroupAddRemoveResourceWaiter@@YAXPEAU_HAM_DEPENDENCY_GROUP@@J@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180075D58 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@W4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180077CF4 (-HampActRequestStop@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_ST.c)
 */

void __fastcall HampHostUpdateActivityState(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // esi
  unsigned __int64 v3; // r9
  unsigned __int8 v4; // r14
  struct _RM_HAM_ACTIVITY_HOST *v5; // r8
  int v6; // r12d
  unsigned int v7; // r15d
  unsigned int v8; // r13d
  int v9; // r10d
  char *v10; // r8
  char v11; // r9
  int v12; // edx
  __int16 v13; // bx
  unsigned int v14; // ecx
  signed int v15; // eax
  unsigned int v16; // eax
  unsigned __int8 v17; // al
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  struct _HAM_DEPENDENCY_GROUP *v23; // rcx
  __int64 v24; // rax
  int v25; // r10d
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // r12
  __int64 v31; // r15
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  unsigned int v35; // ebx
  char v36; // r14
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  bool v40; // zf
  int v41; // r14d
  char v42; // si
  int v43; // ebx
  int v44; // r14d
  int v45; // esi
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned int v49; // eax
  int v50; // eax
  unsigned __int64 v51; // r10
  __int64 v52; // r10
  char v53; // cl
  struct _RM_HAM_ACTIVITY_HOST *v54; // rbx
  ULONG *v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // r14d
  __int64 v59; // rsi
  DWORD v60; // edi
  _QWORD *v61; // rbx
  unsigned int v62; // edx
  __int64 *v63; // rax
  __int64 v64; // rdx
  DWORD v65; // r12d
  __int64 v66; // r13
  _QWORD *Value; // r15
  __int64 *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rax
  struct _HAM_ACTIVITY *FirstActivity; // rbx
  __int64 v72; // rax
  __int64 *v73; // rsi
  __int64 v74; // rcx
  struct _HAM_ACTIVITY *NextActivity; // rcx
  int v76; // edx
  __int64 v77; // rax
  __int64 v78; // r8
  struct _HAM_PACKAGE *v79; // rsi
  int v80; // r8d
  int v81; // r9d
  int v82; // ecx
  unsigned __int64 v83; // rbx
  unsigned int IsSuspendWaiter; // eax
  unsigned int v85; // ebx
  int v86; // [rsp+20h] [rbp-69h]
  int v87; // [rsp+50h] [rbp-39h] BYREF
  int v88; // [rsp+54h] [rbp-35h] BYREF
  int v89; // [rsp+58h] [rbp-31h] BYREF
  unsigned int v90; // [rsp+5Ch] [rbp-2Dh] BYREF
  __int64 v91; // [rsp+60h] [rbp-29h] BYREF
  struct _FILETIME v92; // [rsp+68h] [rbp-21h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+70h] [rbp-19h] BYREF
  __int64 v94; // [rsp+78h] [rbp-11h]
  __int64 v95; // [rsp+80h] [rbp-9h] BYREF
  __int64 v96; // [rsp+88h] [rbp-1h] BYREF
  struct _RTL_BITMAP BitMapHeader; // [rsp+90h] [rbp+7h] BYREF
  int v98; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v99; // [rsp+F8h] [rbp+6Fh] BYREF
  int v100; // [rsp+100h] [rbp+77h] BYREF
  __int64 v101; // [rsp+108h] [rbp+7Fh] BYREF

  v2 = 1;
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 )
  {
    v98 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v89, (union _RM_OPTIMIZATION_STATE *)&v100);
    if ( (v89 & 0x80u) == 0 || (v100 & 0x80u) != 0 )
    {
      if ( (v89 & 0x100) == 0 || (v100 & 0x100) != 0 )
      {
        v72 = *((_QWORD *)a1 + 83);
        if ( (v72 & 0x800000000LL) != 0 )
        {
          v98 = 0;
        }
        else if ( (v72 & 0x40000000000LL) == 0 || (v98 = 0, (v72 & 0x30000) == 0) )
        {
          v98 = 1;
        }
      }
      else
      {
        v98 = 0;
      }
    }
    else
    {
      v98 = 0;
    }
  }
  v3 = (unsigned __int64)a1 + 608;
  v4 = 6;
  v5 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( v5 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v10 = (char *)v5 - 96;
    if ( v10 )
    {
      while ( 1 )
      {
        if ( (v10[552] & 0x48) != 0 )
          goto LABEL_31;
        v11 = v10[562];
        if ( v11 == 3 )
          break;
        if ( v11 == 2 )
          goto LABEL_10;
LABEL_66:
        v17 = v10[563];
        if ( v17 != 6 )
          goto LABEL_29;
LABEL_31:
        v18 = *((_QWORD *)v10 + 12);
        v19 = *((_QWORD *)v10 + 10);
        v10 = 0LL;
        if ( v18 != v19 + 608 )
          v10 = (char *)(v18 - 96);
        if ( !v10 )
        {
          v3 = (unsigned __int64)a1 + 608;
          goto LABEL_35;
        }
      }
      v6 = 1;
LABEL_10:
      if ( *((_QWORD *)v10 + 8) )
      {
        v12 = *((_DWORD *)v10 + 28) >> 10;
        if ( *(_DWORD *)(*((_QWORD *)v10 + 10) + 560LL) != 2 )
          LOBYTE(v12) = *((_DWORD *)v10 + 28) >> 13;
        if ( (v12 & 1) != 0 )
        {
          v13 = *((_WORD *)v10 + 212);
          v7 = 1;
          if ( (v13 & 0xC0) == 0xC0 )
          {
            v2 = 2;
          }
          else if ( (v13 & 0xEu) < 8 || (v13 & 0x30u) < 0x20 )
          {
            v2 = 0;
          }
          v14 = *((_DWORD *)v10 + 120) & 3;
          v15 = v14;
          if ( v14 <= v2 )
            v15 = v2;
          if ( v9 <= v15 )
          {
            if ( (v13 & 0xC0) == 0xC0 )
            {
              v16 = 2;
            }
            else
            {
              if ( (v13 & 0xEu) >= 8 && (v13 & 0x30u) >= 0x20 )
              {
                v2 = 1;
                v16 = 1;
LABEL_24:
                v9 = *((_DWORD *)v10 + 120) & 3;
                if ( v14 <= v16 )
                  v9 = v16;
                goto LABEL_26;
              }
              v16 = 0;
            }
            v2 = 1;
            goto LABEL_24;
          }
          v2 = 1;
        }
      }
LABEL_26:
      if ( v11 != 3 && (unsigned __int8)v10[563] < 3u )
      {
        v17 = v10[563];
LABEL_29:
        if ( v4 <= v17 )
          v4 = v17;
        goto LABEL_31;
      }
      if ( (*((_DWORD *)v10 + 28) & 0x100000) != 0 )
        v8 = 1;
      goto LABEL_66;
    }
  }
LABEL_35:
  v20 = v4;
  v21 = *((_QWORD *)a1 + 83) ^ (*((_QWORD *)a1 + 83) ^ ((__int64)v9 << 32)) & 0x300000000LL;
  v22 = (v21 ^ ((unsigned __int64)v7 << 36)) & 0x1000000000LL ^ v21 ^ ((v21 ^ ((unsigned __int64)v7 << 36)) & 0x1000000000LL ^ v21 ^ ((unsigned __int64)v8 << 39)) & 0x8000000000LL;
  v23 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 88);
  if ( v6 )
    v20 = 6LL;
  *((_QWORD *)a1 + 83) = v22 ^ ((unsigned int)v22 ^ ((unsigned __int8)v20 << 26)) & 0x1C000000;
  if ( v23 && ((_BYTE)v20 == 0) != (((v22 >> 26) & 7) == 0) )
  {
    v76 = 1;
    if ( (_BYTE)v20 )
      v76 = -1;
    HampDepGroupAddRemoveResourceWaiter(v23, v76);
    v3 = (unsigned __int64)a1 + 608;
  }
  v24 = *((_QWORD *)a1 + 83);
  v25 = 1024;
  if ( (v24 & 0x4000000000LL) == 0 && ((v24 & 0x30000) == 0 || (v24 & 0x8000000000LL) != 0) )
  {
    v20 = *(_QWORD *)v3;
    if ( *(_QWORD *)v3 != v3 )
    {
      v20 -= 96LL;
      if ( v20 )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(v20 + 552) & 0x48) == 0 )
          {
            v26 = *(_BYTE *)(v20 + 562);
            if ( (v26 == 3 || v26 == 2 && *(_BYTE *)(v20 + 563) >= 3u) && (*(_DWORD *)(v20 + 112) & 0x400) != 0 )
              break;
          }
          v27 = *(_QWORD *)(v20 + 96);
          v28 = *(_QWORD *)(v20 + 80);
          v20 = 0LL;
          if ( v27 != v28 + 608 )
            v20 = v27 - 96;
          if ( !v20 )
            goto LABEL_50;
        }
        FirstActivity = HampHostGetFirstActivity(a1);
        if ( FirstActivity )
        {
          do
          {
            if ( (unsigned __int8)(*((_BYTE *)FirstActivity + 562) - 2) <= 1u
              && (*((_DWORD *)FirstActivity + 30) & 0x100) != 0
              && (*((_DWORD *)FirstActivity + 138) & 0x180u) < 0x180 )
            {
              v77 = *((_QWORD *)a1 + 83);
              v78 = 5LL;
              if ( (v77 & 0x30000) == 0 )
                v78 = 2LL;
              HampActRequestStop(FirstActivity, 3LL, v78, (unsigned __int16)v77, 128, 0LL);
            }
            FirstActivity = HampHostGetNextActivity(FirstActivity);
          }
          while ( FirstActivity );
          v3 = (unsigned __int64)a1 + 608;
          v25 = 1024;
        }
      }
    }
  }
LABEL_50:
  v29 = *((_QWORD *)a1 + 83);
  *((_QWORD *)a1 + 84) &= 0xFFFFFFFFFFFFFFDBuLL;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = v29 >> 37;
  v99 = 1;
  v87 = 0;
  v88 = 0;
  v30 = (v29 >> 44) & 1;
  v94 = v30;
  v31 = (v29 >> 40) & 1;
  v101 = v31;
  v32 = v29 & 0x9FFFE09FFFFFFFFFuLL;
  v33 = 0x100000000000LL;
  *((_QWORD *)a1 + 83) = v32;
  if ( *(_QWORD *)v3 != v3 )
  {
    v34 = *(_QWORD *)v3 - 96LL;
    if ( *(_QWORD *)v3 != 96LL )
    {
      v35 = v99;
      while ( 1 )
      {
        if ( (unsigned __int8)(*(_BYTE *)(v34 + 562) - 1) <= 2u
          && (v25 & *(_DWORD *)(v34 + 116)) != 0
          && (*(_DWORD *)(v34 + 120) & 0x200) != 0 )
        {
          *((_QWORD *)a1 + 84) |= 0x20uLL;
        }
        if ( (*(_BYTE *)(v34 + 552) & 0x48) != 0 )
          goto LABEL_69;
        v36 = *(_BYTE *)(v34 + 562);
        if ( v36 == 3 )
          break;
        if ( v36 == 2 && *(_BYTE *)(v34 + 563) )
        {
          v37 = *(unsigned int *)(v34 + 424);
          if ( !*(_QWORD *)(v34 + 512) && ((v37 & 0x40) != 0 || ((unsigned __int8)v37 & 0xEu) >= 8) )
            *((_QWORD *)a1 + 83) |= 0x100000000000uLL;
          if ( (v25 & *(_DWORD *)(v34 + 112)) == 0 )
            v88 = 1;
          goto LABEL_92;
        }
LABEL_69:
        v38 = *(_QWORD *)(v34 + 96);
        v39 = *(_QWORD *)(v34 + 80);
        v34 = 0LL;
        v40 = v38 == v39 + 608;
        v33 = 0x100000000000LL;
        if ( !v40 )
          v34 = v38 - 96;
        if ( !v34 )
        {
          v32 = *((_QWORD *)a1 + 83);
          LODWORD(v31) = v101;
          LODWORD(v30) = v94;
          v99 = v35;
          goto LABEL_73;
        }
      }
      v37 = *(unsigned int *)(v34 + 424);
LABEL_92:
      v49 = RmpActivityImportanceMergeVectors(v35, v37);
      v3 = *((_QWORD *)a1 + 83);
      v35 = v49;
      v50 = *(_DWORD *)(v34 + 112);
      if ( (v50 & 0x2000) != 0 )
        v3 = *((_QWORD *)a1 + 83) | 0x80000000000LL;
      v51 = (unsigned __int64)*(unsigned int *)(v34 + 112) >> 23;
      if ( (unsigned __int8)(v51 & 3) <= (unsigned __int8)((v3 >> 61) & 3) )
        v51 = v3 >> 61;
      v20 = 0x6000000000000000LL;
      v52 = v3 ^ (v3 ^ (v51 << 61)) & 0x6000000000000000LL;
      *((_QWORD *)a1 + 83) = v52;
      if ( (v52 & 0x6000000000000000LL) != 0 )
        *((_QWORD *)a1 + 84) |= 3uLL;
      v53 = *(_BYTE *)(v34 + 562);
      if ( v53 == 3 || v53 == 2 && *(_BYTE *)(v34 + 563) >= 3u )
      {
        v20 = 1024LL;
        if ( (v50 & 0x400) != 0 )
        {
          v52 |= 0x4000000000uLL;
          *((_QWORD *)a1 + 83) = v52;
          v53 = *(_BYTE *)(v34 + 562);
        }
        if ( v53 == 3 || v53 == 2 && *(_BYTE *)(v34 + 563) >= 5u )
        {
          if ( (v50 & 0x400) != 0 )
          {
            v52 |= 0x10000000000uLL;
            *((_QWORD *)a1 + 83) = v52;
          }
          if ( v36 == 3 )
          {
            if ( (v50 & 0x800) != 0 )
            {
              v52 |= 0x20000000000uLL;
              *((_QWORD *)a1 + 83) = v52;
            }
            if ( (v50 & 0x1000) != 0 )
            {
              v52 |= 0x40000000000uLL;
              *((_QWORD *)a1 + 83) = v52;
            }
            if ( (*(_BYTE *)(v34 + 120) & 8) != 0 )
              *((_QWORD *)a1 + 84) |= 4uLL;
            if ( (v50 & 0x10000) != 0 )
            {
              *((_QWORD *)a1 + 84) |= 8uLL;
              v87 = 1;
            }
            if ( (v50 & 0x1800000) == 0x1000000 )
              *((_QWORD *)a1 + 84) |= 0x10uLL;
            *((_QWORD *)a1 + 83) = v52 | 0x2000000000LL;
          }
        }
        v25 = 1024;
      }
      else
      {
        v25 = 1024;
      }
      goto LABEL_69;
    }
  }
  v35 = v99;
LABEL_73:
  if ( (v32 & 0x10000000000LL) != 0 )
  {
    v41 = 0;
  }
  else
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v90, (union _RM_OPTIMIZATION_STATE *)&v101);
    v33 = v90;
    if ( (v90 & 0x80u) == 0 || (v101 & 0x80u) != 0LL )
    {
      if ( (v90 & 0x100) == 0 || (v101 & 0x100) != 0 )
      {
        v70 = *((_QWORD *)a1 + 83);
        v41 = (v70 & 0x800000000LL) == 0 && ((v70 & 0x40000000000LL) == 0 || (v70 & 0x30000) == 0);
      }
      else
      {
        v41 = 0;
      }
    }
    else
    {
      v41 = 0;
    }
  }
  if ( v98 != v41 )
  {
    if ( !v41 )
    {
      if ( v98 )
      {
        HampPdcSignalWorker(
          (struct _HOST_ACTIVITY_MANAGER **)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99)
                                                                                             + 88LL)
                                                                                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                                                    + 120)
                                                        + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                           + 168),
          0);
        if ( HampHostIsQuiesceSerialized(a1) )
        {
          if ( HampHostIsResumed(a1) )
          {
            v79 = *(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 99) + 88LL);
            HampPkgAcquireLockExclusive(v79);
            HampPkgReleaseLockExclusive(v79);
            RtlWakeAllConditionVariable((char *)v79 + 320);
          }
        }
      }
    }
    v73 = (__int64 *)*((_QWORD *)a1 + 88);
    if ( v73 )
    {
      HampDepGroupAcquireLockExclusive(*((struct _HAM_DEPENDENCY_GROUP **)a1 + 88));
      if ( !v98 || v41 )
        ++*((_DWORD *)v73 + 22);
      else
        --*((_DWORD *)v73 + 22);
      v82 = *((_DWORD *)v73 + 22);
      if ( (unsigned int)dword_1800DC218 > 5 )
      {
        v95 = *((_QWORD *)a1 - 4);
        v96 = *v73;
        LOBYTE(v98) = v41;
        LODWORD(v91) = v82;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v82,
          (unsigned int)&unk_1800C002C,
          v80,
          v81,
          (__int64)&v96,
          (__int64)&v91,
          (__int64)&v95,
          (__int64)&v98);
      }
      HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v73);
    }
    else if ( (unsigned int)dword_1800DC218 > 5 )
    {
      v91 = *((_QWORD *)a1 - 4);
      LOBYTE(v98) = v41;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v33,
        (int)&unk_1800C11CA,
        v20,
        v3,
        (__int64)&v91,
        (__int64)&v98);
    }
  }
  GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
  v42 = v99;
  v92 = SystemTimeAsFileTime;
  if ( (*((_BYTE *)a1 + 680) & 0xE) == 8 )
  {
    if ( (v99 & 0xE) == 8 )
      goto LABEL_80;
    *((struct _FILETIME *)a1 + 131) = v92;
  }
  else
  {
    if ( (v99 & 0xE) != 8 )
      goto LABEL_80;
    *((struct _FILETIME *)a1 + 130) = v92;
  }
  v74 = *((_QWORD *)a1 + 99);
  *((_QWORD *)a1 + 83) |= 0x1000000000000000uLL;
  HampPkgPushUpdate(*(struct _HAM_PACKAGE **)(v74 + 88));
LABEL_80:
  *((_DWORD *)a1 + 170) = v35;
  if ( (v99 & 0x400) == 0 )
    *((_QWORD *)a1 + 83) &= ~0x4000000000000uLL;
  if ( (v42 & 0x40) != 0 && *((_QWORD *)a1 + 124) && *((_QWORD *)a1 + 125) )
  {
    v83 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                + 120)
                    + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
    HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)(v83 - 168));
    if ( *(_QWORD *)(v83 + 568) != v83 + 568 )
    {
      ++*(_DWORD *)(v83 + 588);
      RtlWakeAddressAll(v83 + 588);
    }
    HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)(v83 - 168));
  }
  if ( (*((_QWORD *)a1 + 83) & 0x10000000000LL) != 0 && !(_DWORD)v31 && HampHostIsResumed(a1) )
    HampHostChangeApplicationExecutionState((__int64)a1, 0, 1LL);
  v43 = (unsigned __int16)v99 >> 6;
  v44 = (unsigned __int16)v99 >> 4;
  v45 = (unsigned __int16)v99 >> 1;
  if ( *((_DWORD *)a1 + 140) == 2 )
  {
    v65 = HampLockTrackerId;
    v66 = *((_QWORD *)a1 + 99);
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v65) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
        __int2c();
      *Value |= 0x20uLL;
      ++Value[6];
    }
    RtlAcquireSRWLockExclusive(v66 + 584);
    *(_DWORD *)(v66 + 592) = GetCurrentThreadId();
    v99 = *(_DWORD *)(v66 + 620) & 0xFFFFFCE0 | v45 & 7 | (8 * (v44 & 3 | (32 * (v87 & 1 | (2 * (v43 & 1))))));
    if ( *(_DWORD *)(v66 + 620) != v99 )
      HampAppCommitStateSummary((struct _HAM_APPLICATION *)v66, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v99);
    if ( HampLockTrackerId != -1 )
    {
      v68 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v69 = *v68;
      if ( (*v68 & 0x20) == 0 )
        __int2c();
      v40 = v68[6]-- == 1;
      if ( v40 )
        *v68 = v69 & 0xFFFFFFFFFFFFFFDFuLL;
    }
    *(_DWORD *)(v66 + 592) = 0;
    RtlReleaseSRWLockExclusive(v66 + 584);
    LODWORD(v30) = v94;
  }
  v46 = *((_QWORD *)a1 + 83);
  if ( ((LOBYTE(BitMapHeader.SizeOfBitMap) ^ (unsigned __int8)(v46 >> 37)) & 1) != 0 )
  {
    RtlWakeAllConditionVariable((char *)a1 + 16);
    v46 = *((_QWORD *)a1 + 83);
  }
  if ( (v46 & 0x100000000000LL) != 0 && !(_DWORD)v30 && (v46 & 0x30000) != 0 )
  {
    LOBYTE(v86) = 5;
    HampHostIssueStopRequests(a1, 2LL, 5LL, 0LL, v86, 0, 2, 0LL);
  }
  RtlWakeAllConditionVariable((char *)a1 + 696);
  HampHostCheckQueueStateWorker(a1, v88 != 0);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v88, (union _RM_OPTIMIZATION_STATE *)&v87);
  v48 = *((_QWORD *)a1 + 83);
  if ( ((v48 >> 16) & 3) == 0 )
    goto LABEL_89;
  if ( ((v48 >> 16) & 3) != 1 )
  {
    if ( ((v48 >> 16) & 3) == 2 )
    {
      if ( (v48 & 0x8000000000000LL) != 0 )
        goto LABEL_89;
    }
    else if ( ((v48 >> 16) & 3) != 3 )
    {
      goto LABEL_89;
    }
LABEL_213:
    if ( (v48 & 0x800000000LL) == 0 )
    {
      IsSuspendWaiter = HampHostIsSuspendWaiter(a1, v47);
      *((_QWORD *)a1 + 83) |= 0x800000000uLL;
      v85 = IsSuspendWaiter;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)a1 + 79));
      HampHostCheckUpdateSuspendWaitState(a1, v85);
    }
    goto LABEL_89;
  }
  if ( (v88 & 0x80u) == 0 || (v87 & 0x80u) != 0 || (v48 & 0x40000000000LL) != 0 )
    goto LABEL_89;
  NextActivity = HampHostGetFirstActivity(a1);
  if ( !NextActivity )
    goto LABEL_213;
  while ( 1 )
  {
    if ( (*((_BYTE *)NextActivity + 552) & 0x48) == 0 )
    {
      LOBYTE(v47) = 5;
      if ( (unsigned int)HampActIsStartedOrReachedPendState(NextActivity, v47) )
      {
        if ( (*((_DWORD *)NextActivity + 28) & 0x2000) != 0 )
          break;
      }
    }
    NextActivity = HampHostGetNextActivity(NextActivity);
    if ( !NextActivity )
      goto LABEL_213;
  }
LABEL_89:
  if ( *((_DWORD *)a1 + 140) != 2 )
    return;
  v54 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 76);
  if ( v54 != (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 608) )
  {
    v55 = (ULONG *)((char *)v54 - 96);
    while ( v55 )
    {
      if ( *((_BYTE *)v55 + 562) == 3 && (v55[138] & 0x48) == 0 )
      {
        RtlInitializeBitMap(&BitMapHeader, v55 + 124, 0x2Fu);
        if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
          goto LABEL_136;
      }
      v56 = *((_QWORD *)v55 + 12);
      v57 = *((_QWORD *)v55 + 10);
      v55 = 0LL;
      if ( v56 != v57 + 608 )
        v55 = (ULONG *)(v56 - 96);
    }
  }
  if ( (*((_QWORD *)a1 + 83) & 0x400000000000000LL) != 0
    && (unsigned int)HampUtilHasExternalResourceAccess(
                       (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                              + 120)
                                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                     + 560,
                       27LL) )
  {
LABEL_136:
    v58 = 1;
    goto LABEL_137;
  }
  v58 = 0;
LABEL_137:
  v59 = *((_QWORD *)a1 + 99);
  v60 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v61 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v60) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v61 |= 0x20uLL;
    ++v61[6];
  }
  RtlAcquireSRWLockExclusive(v59 + 584);
  *(_DWORD *)(v59 + 592) = GetCurrentThreadId();
  v62 = *(_DWORD *)(v59 + 616) & 0xFFFBFFFF | (v58 << 18);
  *(_DWORD *)(v59 + 616) = v62;
  if ( v58 != ((v62 >> 17) & 1) && (v62 & 0x80000) == 0 )
  {
    *(_DWORD *)(v59 + 616) = v62 | 0x80000;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v59 + 24)) <= 1 )
      __fastfail(0xEu);
    TpPostWork(*(_QWORD *)(v59 + 560));
  }
  if ( HampLockTrackerId != -1 )
  {
    v63 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v64 = *v63;
    if ( (*v63 & 0x20) == 0 )
      __int2c();
    v40 = v63[6]-- == 1;
    if ( v40 )
      *v63 = v64 & 0xFFFFFFFFFFFFFFDFuLL;
  }
  *(_DWORD *)(v59 + 592) = 0;
  RtlReleaseSRWLockExclusive(v59 + 584);
}
