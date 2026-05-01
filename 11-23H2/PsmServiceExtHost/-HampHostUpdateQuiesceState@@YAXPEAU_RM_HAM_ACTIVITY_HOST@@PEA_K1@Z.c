/*
 * XREFs of ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180034F80
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800535D0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800352D0 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18003625C (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     ?HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_KKK0@Z @ 0x1800362BC (-HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_K.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x18003634C (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@44544@Z @ 0x1800366F4 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U2@U3@U2@U2@@-$_t.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x180036858 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampHostUpdateQuiesceState(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v4; // rsi
  void **v7; // rdi
  int IsDebugEnabled; // eax
  unsigned int v9; // r15d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int v12; // r14d
  unsigned __int64 v13; // r13
  unsigned int v14; // r15d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned int v17; // r12d
  unsigned __int64 *v18; // r14
  __int64 *v19; // rdi
  __int64 v20; // rcx
  unsigned int v21; // [rsp+64h] [rbp-55h] BYREF
  unsigned int v22; // [rsp+68h] [rbp-51h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp-49h] BYREF
  unsigned __int64 v24; // [rsp+78h] [rbp-41h]
  unsigned int v25; // [rsp+80h] [rbp-39h] BYREF
  unsigned __int64 *v26; // [rsp+88h] [rbp-31h]
  unsigned __int64 v27; // [rsp+90h] [rbp-29h]
  unsigned __int64 v28; // [rsp+98h] [rbp-21h]
  unsigned __int64 v29; // [rsp+A0h] [rbp-19h]
  char v30[8]; // [rsp+A8h] [rbp-11h] BYREF
  unsigned __int64 v31; // [rsp+B0h] [rbp-9h]
  __int64 v32; // [rsp+B8h] [rbp-1h]
  _QWORD v33[3]; // [rsp+C0h] [rbp+7h] BYREF

  v23 = (unsigned __int64)a3;
  v26 = a2;
  v4 = 64LL;
  if ( a1 )
    v4 = (__int64)a1;
  HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4);
  RmpReleaseGlobalLock();
  v7 = (void **)((char *)a1 + 808);
  if ( *a2 )
    v24 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 200LL))(*v7);
  else
    v24 = 0LL;
  HampUtilQueryQuiesceTimeouts(&v25, &v22);
  IsDebugEnabled = HampHostQueryIsDebugEnabled(a1, &v21);
  v9 = v21;
  if ( IsDebugEnabled < 0 )
    v9 = 0;
  v21 = v9;
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4, 0);
  v10 = *a2;
  v11 = *((_QWORD *)a1 + 83);
  v12 = v22;
  v13 = v11 >> 29;
  LOBYTE(v13) = (v11 >> 29) & 7;
  v29 = v10;
  v33[0] = 0LL;
  v33[1] = v10;
  v14 = v9 & 1;
  v15 = *a3;
  v27 = v13;
  v33[0] = (unsigned int)v11 >> 29;
  v16 = v24;
  v28 = v15;
  v33[2] = v15;
  do
  {
    v17 = (v11 >> 41) & 1 | (2 * ((v11 >> 42) & 1 | (2 * (v14 | (2 * ((v11 >> 46) & 1))))));
    v22 = v17;
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4);
    RmpReleaseGlobalLock();
    (*(void (__fastcall **)(void *, __int64))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(*v7, 1LL);
    HampHostComputeQuiesceAction(
      (struct _HAM_HOST_QUIESCE_ACTION *)v33,
      (struct _HAM_HOST_STATE_SNAPSHOT *)&v22,
      v16,
      v25,
      v12,
      (struct _HAM_HOST_QUIESCE_ACTION *)v30);
    if ( v31 )
      RmpSystemResourceTimerSet(a1, v31, *v7);
    HampHostQueryIsDebugEnabled(a1, &v21);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v4, 0);
    v11 = *((_QWORD *)a1 + 83);
    v14 = v21 & 1;
  }
  while ( v17 != ((v11 >> 41) & 1 | (2 * ((v11 >> 42) & 1 | (2 * (v14 | (2 * ((v11 >> 46) & 1))))))) );
  LOBYTE(v11) = v30[0];
  HampHostCommitQuiesceAction(a1, v11);
  v18 = v26;
  v19 = (__int64 *)v23;
  *v26 = v31;
  *v19 = v32;
  *((_DWORD *)a1 + 172) = *(_DWORD *)v18;
  RtlQueryUnbiasedInterruptTime(&v23);
  *((_DWORD *)a1 + 171) = v23 / 0x2710;
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v27 = *v19;
    v23 = *v18;
    v26 = (unsigned __int64 *)*((_QWORD *)a1 - 4);
    v24 = (unsigned __int64)a1 + 24;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v20,
      &unk_1800BFB32);
  }
}
