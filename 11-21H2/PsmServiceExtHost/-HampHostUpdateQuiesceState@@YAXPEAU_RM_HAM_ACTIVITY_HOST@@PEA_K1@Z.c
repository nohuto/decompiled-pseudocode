/*
 * XREFs of ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800294D4
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x1800503AC (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@U3@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@44544@Z @ 0x180005B18 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U2@U3@U2@U2@@-$_t.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z @ 0x1800297F8 (-HampHostQueryIsDebugEnabled@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAK@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z @ 0x18003CE2C (-HampUtilQueryQuiesceTimeouts@@YAXPEAK0@Z.c)
 *     ?HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_KKK0@Z @ 0x18003D030 (-HampHostComputeQuiesceAction@@YAXPEAU_HAM_HOST_QUIESCE_ACTION@@PEAU_HAM_HOST_STATE_SNAPSHOT@@_K.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18003D660 (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18003DC30 (-HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall HampHostUpdateQuiesceState(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // r13
  int IsDebugEnabled; // eax
  unsigned int v8; // esi
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  int v13; // esi
  unsigned int v14; // r15d
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // r14d
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // r15
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  char v25; // al
  char v26; // [rsp+60h] [rbp-49h] BYREF
  _BYTE v27[7]; // [rsp+61h] [rbp-48h] BYREF
  unsigned int v28[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned int v29[2]; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v30[2]; // [rsp+78h] [rbp-31h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-29h] BYREF
  __int64 v32; // [rsp+88h] [rbp-21h] BYREF
  __int64 v33; // [rsp+90h] [rbp-19h] BYREF
  _BYTE v34[8]; // [rsp+98h] [rbp-11h] BYREF
  unsigned __int64 v35; // [rsp+A0h] [rbp-9h]
  unsigned __int64 v36; // [rsp+A8h] [rbp-1h]
  _QWORD v37[3]; // [rsp+B0h] [rbp+7h] BYREF

  HampHostReleaseLockExclusiveEx(a1, (unsigned int)a2);
  RmpReleaseGlobalLock();
  if ( *a2 )
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 200LL))(*((_QWORD *)a1 + 101));
  else
    v6 = 0LL;
  HampUtilQueryQuiesceTimeouts(v30, v29);
  IsDebugEnabled = HampHostQueryIsDebugEnabled(a1, v28);
  v8 = v28[0];
  if ( IsDebugEnabled < 0 )
    v8 = 0;
  v28[0] = v8;
  RmpAcquireGlobalLock();
  HampHostAcquireLockExclusiveEx(a1, 0);
  v9 = *a2;
  v10 = *((_QWORD *)a1 + 83);
  v37[0] = 0LL;
  v33 = v9;
  v11 = v10 >> 29;
  LOBYTE(v11) = (v10 >> 29) & 7;
  v37[1] = v9;
  v12 = *a3;
  v13 = v8 & 1;
  v31 = v11;
  v37[0] = (unsigned int)v10 >> 29;
  v14 = v29[0];
  v32 = v12;
  v37[2] = v12;
  do
  {
    v15 = 2 * ((v10 >> 46) & 1);
    v16 = (v10 >> 42) & 1;
    v17 = (v10 >> 41) & 1;
    v18 = v17 | (2 * (v16 | (2 * (v13 | v15))));
    v29[0] = v18;
    HampHostReleaseLockExclusiveEx(a1, v17);
    RmpReleaseGlobalLock();
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(
      *((_QWORD *)a1 + 101),
      1LL);
    HampHostComputeQuiesceAction(
      (struct _HAM_HOST_QUIESCE_ACTION *)v37,
      (struct _HAM_HOST_STATE_SNAPSHOT *)v29,
      v6,
      v30[0],
      v14,
      (struct _HAM_HOST_QUIESCE_ACTION *)v34);
    if ( v35 )
      RmpSystemResourceTimerSet(a1, v35, *((void **)a1 + 101));
    HampHostQueryIsDebugEnabled(a1, v28);
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v10 = *((_QWORD *)a1 + 83);
    v13 = v28[0] & 1;
  }
  while ( v18 != ((v10 >> 41) & 1 | (2 * ((v10 >> 42) & 1 | (2 * (v13 | (2 * ((v10 >> 46) & 1))))))) );
  LOBYTE(v10) = v34[0];
  HampHostCommitQuiesceAction(a1, v10);
  *a2 = v35;
  *a3 = v36;
  *((_DWORD *)a1 + 172) = *(_DWORD *)a2;
  RtlQueryUnbiasedInterruptTime(v30);
  v21 = v31;
  *((_DWORD *)a1 + 171) = *(_QWORD *)v30 / 0x2710uLL;
  if ( (unsigned int)dword_1800DC218 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v19, v20) )
    {
      v31 = *a3;
      *(_QWORD *)v30 = *a2;
      v25 = ((unsigned __int64)*((unsigned int *)a1 + 166) >> 29) & 7;
      v27[0] = v21;
      v26 = v25;
      *(_QWORD *)v29 = *((_QWORD *)a1 - 4);
      *(_QWORD *)v28 = (char *)a1 + 24;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v22,
        (int)&unk_1800C0E0B,
        v23,
        v24,
        (const unsigned __int16 **)v28,
        (__int64)v29,
        (__int64)v27,
        (__int64)&v33,
        (__int64)&v32,
        (__int64)&v26,
        (__int64)v30,
        (__int64)&v31);
    }
  }
}
