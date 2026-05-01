/*
 * XREFs of ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006EE3C
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001E5A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180017480 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800184AC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001852C (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001C610 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001D750 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800326A0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z @ 0x18004C1DC (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005509C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@35@Z @ 0x18006EA9C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@Z @ 0x18008E304 (-HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18008EDA0 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x18008F1C0 (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 */

void __fastcall HampHostCollectErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  struct _RM_ACTIVITY_HOST *v2; // r12
  int v3; // r13d
  int v4; // r14d
  __int64 v5; // rdi
  int v7; // r15d
  BOOL IsSuspendWaiter; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // ecx
  int v12; // edx
  int v13; // esi
  int v14; // eax
  int v15; // eax
  int v16; // edx
  BOOL v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r9
  _BYTE v27[4]; // [rsp+68h] [rbp-39h] BYREF
  int v28; // [rsp+6Ch] [rbp-35h] BYREF
  int v29; // [rsp+70h] [rbp-31h] BYREF
  int v30; // [rsp+74h] [rbp-2Dh] BYREF
  const unsigned __int16 *v31; // [rsp+78h] [rbp-29h] BYREF
  __int64 v32; // [rsp+80h] [rbp-21h] BYREF
  __int64 v33; // [rsp+88h] [rbp-19h] BYREF
  __int128 v34; // [rsp+90h] [rbp-11h] BYREF
  __int64 v35; // [rsp+A0h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+A8h] [rbp+7h] BYREF

  v2 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64);
  v3 = *((unsigned __int16 *)a1 + 332);
  v4 = 0;
  v29 = *((_DWORD *)a1 + 214);
  v5 = 1272LL;
  v35 = 0LL;
  if ( a1 )
    v5 = (__int64)a1 + 1208;
  v7 = 1;
  v34 = 0LL;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800BF75B,
      0LL,
      0LL,
      2u,
      &v36);
  if ( (*((_DWORD *)a1 + 166) & 0x30000) != 0x20000LL )
    goto LABEL_35;
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, a2);
  v11 = *((_DWORD *)a1 + 140);
  v12 = IsSuspendWaiter;
  v13 = 256;
  if ( v11 == 2 )
  {
    v14 = *((_DWORD *)a1 + 301);
    if ( (v14 & 0x80u) != 0 )
    {
      if ( (v14 & 0x100) != 0 )
        goto LABEL_16;
      *(_DWORD *)v5 |= 0x100u;
    }
    else
    {
      *(_DWORD *)v5 |= 0x180u;
    }
    goto LABEL_15;
  }
  if ( v11 == 4 && (*((_BYTE *)a1 + 1204) & 0x40) == 0 )
  {
    *(_DWORD *)v5 |= 0x40u;
LABEL_15:
    v4 = 1;
  }
LABEL_16:
  HampHostCheckUpdateSuspendWaitState(a1, v12, v9, v10);
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  v7 = 0;
  if ( v4 )
  {
    v15 = *((_DWORD *)a1 + 140);
    if ( v15 == 2 )
    {
      RmpSystemChangePsmApplicationState(v2, 2);
    }
    else if ( v15 == 4 )
    {
      RmpSystemFreezeHostJob(v2, 1u);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v17 = HampHostIsSuspendWaiter(a1, v16);
    *(_DWORD *)v5 = 0;
    v20 = *((_DWORD *)a1 + 140);
    if ( v20 == 2 )
    {
      *((_DWORD *)a1 + 301) |= 0x180u;
    }
    else if ( v20 == 4 )
    {
      *((_DWORD *)a1 + 301) |= 0x40u;
    }
    HampHostCheckUpdateSuspendWaitState(a1, v17, v18, v19);
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
  }
  if ( (int)HampSystemCheckReportGameCoreHang(a1, v3 & 0xFFFFFF00, &v28) >= 0 )
  {
    if ( v28 )
      goto LABEL_35;
    if ( (int)RmHamHostGetProcessesInfo(v2, 0, 1, (struct _HAM_PROCESS_SNAPSHOT *)&v34) >= 0 )
    {
      if ( (int)HampSystemReportHang(v21, *((_QWORD *)&v34 + 1), (unsigned int)v35, v3 & 0xFFFFFF00, v29) >= 0 )
        goto LABEL_35;
      v13 = 768;
    }
    else
    {
      v13 = 512;
    }
  }
  if ( (unsigned int)dword_1800DB218 <= 4 )
    goto LABEL_38;
  if ( tlgKeywordOn((__int64)&dword_1800DB218, 0x400000000008LL) )
  {
    v27[0] = *((_BYTE *)a1 + 560);
    v33 = *((_QWORD *)a1 - 4);
    v31 = (const unsigned __int16 *)((char *)a1 + 24);
    v32 = 0x1000000LL;
    v29 = v3;
    v28 = v13;
    v30 = v23;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v22,
      byte_1800BF7EF,
      v23,
      v24,
      (__int64)&v30,
      (__int64)&v28,
      &v31,
      (__int64)&v33,
      (__int64)v27,
      (__int64)&v29,
      (__int64)&v32);
  }
LABEL_35:
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v31 = (const unsigned __int16 *)*((_QWORD *)a1 - 4);
    v30 = v3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DB218,
      byte_1800BFA13,
      v25,
      v26,
      (__int64)&v31,
      (__int64)&v30);
  }
LABEL_38:
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v34, 0LL);
  if ( !v7 )
  {
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  *((_QWORD *)a1 + 83) &= ~0x8000000000000uLL;
}
