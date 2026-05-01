/*
 * XREFs of CrmActivityStart @ 0x180030D90
 * Callers:
 *     CrmRpcSrvActivityAllocate @ 0x1800308F0 (CrmRpcSrvActivityAllocate.c)
 *     CrmRegistrationCreateActivity @ 0x180048A74 (CrmRegistrationCreateActivity.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     CrmStateMonitorStart @ 0x18002F304 (CrmStateMonitorStart.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18002FD48 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     CrmActivityPolicyTableEntryGet @ 0x1800307A4 (CrmActivityPolicyTableEntryGet.c)
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x180030B54 (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z.c)
 *     CrmPolicyTableEntryGet @ 0x180031360 (CrmPolicyTableEntryGet.c)
 *     CrmStateMonitorCleanup @ 0x180035E7C (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorListenerRemove @ 0x180036060 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorListenerAdd @ 0x18003C74C (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorInitialize @ 0x18003C84C (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x18003CC10 (CrmStateMonitorSizeGet.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmActivityStart(struct _WNF_STATE_NAME *a1, __int64 a2, int a3, void *a4)
{
  __int64 v4; // r12
  ULONG v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rdi
  HANDLE CurrentProcess; // rax
  int InformationToken; // esi
  PVOID Heap; // rax
  unsigned int v14; // ebx
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  unsigned int *v17; // r14
  char *v18; // r13
  unsigned int *v19; // r12
  unsigned int **v20; // rcx
  unsigned int v23; // eax
  _QWORD *v24; // rax
  _QWORD *v25; // r14
  __int64 v26; // r8
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v28; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v29; // [rsp+38h] [rbp-C8h] BYREF
  int v30; // [rsp+40h] [rbp-C0h] BYREF
  void *TokenHandle; // [rsp+48h] [rbp-B8h] BYREF
  struct _WNF_STATE_NAME v32; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v33; // [rsp+58h] [rbp-A8h]
  ULONG ReturnLength[4]; // [rsp+60h] [rbp-A0h] BYREF
  PSID TokenInformation[12]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE Source2[80]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE DestinationSid[80]; // [rsp+120h] [rbp+20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+170h] [rbp+70h] BYREF
  UUID *v39; // [rsp+190h] [rbp+90h]
  __int64 v40; // [rsp+198h] [rbp+98h]
  struct _WNF_STATE_NAME *v41; // [rsp+1A0h] [rbp+A0h]
  __int64 v42; // [rsp+1A8h] [rbp+A8h]
  ULONG *v43; // [rsp+1B0h] [rbp+B0h]
  __int64 v44; // [rsp+1B8h] [rbp+B8h]
  __int64 *v45; // [rsp+1C0h] [rbp+C0h]
  __int64 v46; // [rsp+1C8h] [rbp+C8h]
  int *v47; // [rsp+1D0h] [rbp+D0h]
  __int64 v48; // [rsp+1D8h] [rbp+D8h]
  struct _EVENT_DATA_DESCRIPTOR v49; // [rsp+1E0h] [rbp+E0h] BYREF
  UUID *v50; // [rsp+200h] [rbp+100h]
  __int64 v51; // [rsp+208h] [rbp+108h]
  int *v52; // [rsp+210h] [rbp+110h]
  __int64 v53; // [rsp+218h] [rbp+118h]

  v4 = a2;
  v29 = a2;
  CrmActivityPolicyTableEntryGet(*(_DWORD *)(a2 + 24), a3, (__int64)&v32);
  v8 = v33;
  v9 = CrmPolicyTableEntryGet(v33);
  v32 = (struct _WNF_STATE_NAME)v9;
  v10 = *(unsigned int *)(v9 + 4);
  v28 = *(_DWORD *)(v9 + 4);
  a1[7].Data[1] = v8;
  a1[7].Data[0] = a3;
  a1[6] = (struct _WNF_STATE_NAME)_InterlockedIncrement64(&qword_1800DD178);
  memset_0(Source2, 0, 0x44uLL);
  if ( RtlCompareMemory(a4, Source2, 0x44uLL) == 68 )
  {
    if ( a3 == 17 )
    {
      a1[16] = (struct _WNF_STATE_NAME)WNF_RM_QUIET_MODE;
      v30 = 255;
      InformationToken = RtlPublishWnfStateData(WNF_RM_QUIET_MODE, 0LL, &v30, 4LL, 0LL);
      if ( InformationToken < 0 )
        goto LABEL_24;
    }
  }
  else
  {
    TokenHandle = 0LL;
    CurrentProcess = GetCurrentProcess();
    InformationToken = NtOpenProcessToken(CurrentProcess, 8u, &TokenHandle);
    if ( InformationToken >= 0 )
    {
      InformationToken = NtQueryInformationToken(TokenHandle, TokenUser, TokenInformation, 0x58u, ReturnLength);
      if ( InformationToken >= 0 )
        RtlCopySid(0x44u, DestinationSid, TokenInformation[0]);
    }
    if ( TokenHandle )
      NtClose(TokenHandle);
    if ( InformationToken < 0 )
      goto LABEL_24;
    InformationToken = RmpWnfCreateStateNameForIpcEx(DestinationSid, a4, 4, 0, a1 + 15);
    if ( InformationToken < 0 )
      goto LABEL_24;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 56 * v10);
  a1[13] = (struct _WNF_STATE_NAME)Heap;
  if ( Heap )
  {
    a1[11].Data[0] = v10;
    v14 = 0;
    if ( (_DWORD)v10 )
    {
      while ( 1 )
      {
        v15 = (_QWORD *)(*(_QWORD *)&a1[13] + 56LL * v14);
        v16 = *(int *)(v9 + 16LL * v14 + 8);
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        v15[4] = 0LL;
        v15[5] = 0LL;
        v15[6] = 0LL;
        v17 = (unsigned int *)(v15 + 1);
        v15[3] = a1;
        *((_OWORD *)v15 + 2) = *(_OWORD *)(v9 + 16LL * v14 + 8);
        v15[2] = v15 + 1;
        v15[1] = v15 + 1;
        *v15 = CrmActivityListenerCallback;
        RtlAcquireSRWLockShared(&CrmGlobals);
        v18 = (char *)&CrmGlobals + 8 * v16;
        v19 = (unsigned int *)*((_QWORD *)v18 + 2);
        if ( v19 )
        {
          RtlAcquireSRWLockExclusive(v19 + 2);
          v19[4] = GetCurrentThreadId();
          v20 = (unsigned int **)*((_QWORD *)v19 + 4);
          if ( *v20 != v19 + 6 )
            __fastfail(3u);
          v15[2] = v20;
          *(_QWORD *)v17 = v19 + 6;
          *v20 = v17;
          *((_QWORD *)v19 + 4) = v17;
          RtlReleaseSRWLockShared(&CrmGlobals);
          ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))*v15)(v15, *v19, *((_QWORD *)v19 + 5));
          v19[4] = 0;
          RtlReleaseSRWLockExclusive(v19 + 2);
          if ( (unsigned int)dword_1800DC250 > 5
            && (qword_1800DC260 & 8) != 0
            && (qword_1800DC268 & 8) == qword_1800DC268 )
          {
            v51 = 16LL;
            v50 = &Uuid;
            v27 = *v19;
            v53 = 4LL;
            v52 = &v27;
            tlgWriteTransfer_EventWriteTransfer(
              (__int64)&dword_1800DC250,
              (unsigned __int8 *)dword_1800BE0D4,
              0LL,
              0LL,
              4u,
              &v49);
          }
        }
        else
        {
          RtlReleaseSRWLockShared(&CrmGlobals);
          v23 = CrmStateMonitorSizeGet((unsigned int)v16);
          v24 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
          v25 = v24;
          if ( !v24 )
          {
            v4 = v29;
            InformationToken = -1073741801;
            goto LABEL_24;
          }
          CrmStateMonitorInitialize(v24, (unsigned int)v16);
          InformationToken = CrmStateMonitorStart(v25, (__int64)v15, v26);
          if ( InformationToken < 0 )
          {
            CrmStateMonitorCleanup(v25);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
            v4 = v29;
            goto LABEL_24;
          }
          RtlAcquireSRWLockExclusive(&CrmGlobals);
          dword_1800DD028 = GetCurrentThreadId();
          if ( *((_QWORD *)v18 + 2) )
          {
            CrmStateMonitorListenerRemove(v25);
            CrmStateMonitorListenerAdd(*((_QWORD *)v18 + 2), v15, 1LL);
          }
          else
          {
            *((_QWORD *)v18 + 2) = v25;
            dword_1800DD028 = 0;
            RtlReleaseSRWLockExclusive(&CrmGlobals);
          }
        }
        ++a1[12].Data[0];
        if ( ++v14 >= v28 )
        {
          v4 = v29;
          break;
        }
        v9 = (__int64)v32;
      }
    }
    if ( a1[7].Data[0] == 17 )
    {
      RtlAcquireSRWLockExclusive(&a1[9]);
      a1[10].Data[0] = GetCurrentThreadId();
      CrmRegistrationNotifyWindowClosedReasonChange(v4, (__int64)a1);
      a1[10].Data[0] = 0;
      RtlReleaseSRWLockExclusive(&a1[9]);
    }
    InformationToken = 0;
  }
  else
  {
    InformationToken = -1073741801;
  }
LABEL_24:
  if ( (unsigned int)dword_1800DC250 > 5 && (qword_1800DC260 & 4) != 0 && (qword_1800DC268 & 4) == qword_1800DC268 )
  {
    v32 = a1[6];
    v39 = &Uuid;
    v41 = &v32;
    v28 = a1[7].Data[1];
    v43 = &v28;
    v29 = *(_QWORD *)(v4 + 16);
    v45 = &v29;
    v47 = &v27;
    v40 = 16LL;
    v42 = 8LL;
    v44 = 4LL;
    v46 = 8LL;
    v27 = InformationToken;
    v48 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC250,
      (unsigned __int8 *)dword_1800BDAFC,
      0LL,
      0LL,
      7u,
      &v38);
  }
  return (unsigned int)InformationToken;
}
