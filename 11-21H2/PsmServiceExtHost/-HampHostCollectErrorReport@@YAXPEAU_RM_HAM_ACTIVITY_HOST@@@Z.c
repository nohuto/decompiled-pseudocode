/*
 * XREFs of ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800798AC
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800121C0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x180006C08 (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180010950 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800109D0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A648 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A6D0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002D998 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18002DACC (-HampHostIsSuspendWaiter@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800773EC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@35@Z @ 0x1800791A0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByV.c)
 *     ?HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@Z @ 0x180092C38 (-HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180093624 (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z @ 0x180093AEC (-HampSystemReportHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAKKW4_HAM_TERMINATE_REASON@@K@Z.c)
 */

void __fastcall HampHostCollectErrorReport(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  int v2; // r15d
  int v3; // edi
  int v4; // r12d
  int v6; // r14d
  BOOL IsSuspendWaiter; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ecx
  int v11; // edx
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // edx
  BOOL v16; // eax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  _BYTE v26[4]; // [rsp+60h] [rbp-39h] BYREF
  int v27; // [rsp+64h] [rbp-35h] BYREF
  int v28; // [rsp+68h] [rbp-31h] BYREF
  int v29; // [rsp+6Ch] [rbp-2Dh] BYREF
  const unsigned __int16 *v30; // [rsp+70h] [rbp-29h] BYREF
  __int64 v31; // [rsp+78h] [rbp-21h] BYREF
  __int64 v32; // [rsp+80h] [rbp-19h] BYREF
  __int128 v33; // [rsp+88h] [rbp-11h] BYREF
  __int64 v34; // [rsp+98h] [rbp-1h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+A0h] [rbp+7h] BYREF

  v2 = *((unsigned __int16 *)a1 + 332);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 214);
  v34 = 0LL;
  v6 = 1;
  v33 = 0LL;
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C0AF5,
      0LL,
      0LL,
      2u,
      &v35);
  if ( (*((_DWORD *)a1 + 166) & 0x30000) != 0x20000LL )
    goto LABEL_33;
  IsSuspendWaiter = HampHostIsSuspendWaiter(a1, a2);
  v10 = *((_DWORD *)a1 + 140);
  v11 = IsSuspendWaiter;
  v12 = 256;
  if ( v10 == 2 )
  {
    v13 = *((_DWORD *)a1 + 299);
    if ( (v13 & 0x80u) != 0 )
    {
      if ( (v13 & 0x100) != 0 )
        goto LABEL_14;
      *((_DWORD *)a1 + 300) |= 0x100u;
    }
    else
    {
      *((_DWORD *)a1 + 300) |= 0x180u;
    }
    goto LABEL_13;
  }
  if ( v10 == 4 && (*((_BYTE *)a1 + 1196) & 0x40) == 0 )
  {
    *((_DWORD *)a1 + 300) |= 0x40u;
LABEL_13:
    v3 = 1;
  }
LABEL_14:
  HampHostCheckUpdateSuspendWaitState(a1, v11, v8, v9);
  HampHostReleaseLockExclusiveEx(a1);
  RmpReleaseGlobalLock();
  v6 = 0;
  if ( v3 )
  {
    v14 = *((_DWORD *)a1 + 140);
    if ( v14 == 2 )
    {
      RmpSystemChangePsmApplicationState((_QWORD *)a1 - 8, 2LL);
    }
    else if ( v14 == 4 )
    {
      RmpSystemFreezeHostJob((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), 1u);
    }
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
    v16 = HampHostIsSuspendWaiter(a1, v15);
    *((_DWORD *)a1 + 300) = 0;
    v19 = *((_DWORD *)a1 + 140);
    if ( v19 == 2 )
    {
      *((_DWORD *)a1 + 299) |= 0x180u;
    }
    else if ( v19 == 4 )
    {
      *((_DWORD *)a1 + 299) |= 0x40u;
    }
    HampHostCheckUpdateSuspendWaitState(a1, v16, v17, v18);
    HampHostReleaseLockExclusiveEx(a1);
    RmpReleaseGlobalLock();
  }
  if ( (int)HampSystemCheckReportGameCoreHang(a1, v2 & 0xFFFFFF00, &v27) >= 0 )
  {
    if ( v27 )
      goto LABEL_33;
    if ( (int)RmHamHostGetProcessesInfo(
                (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
                0,
                1,
                (struct _HAM_PROCESS_SNAPSHOT *)&v33) >= 0 )
    {
      if ( (int)HampSystemReportHang(v20, *((_QWORD *)&v33 + 1), (unsigned int)v34, v2 & 0xFFFFFF00, v4) >= 0 )
        goto LABEL_33;
      v12 = 768;
    }
    else
    {
      v12 = 512;
    }
  }
  if ( (unsigned int)dword_1800DC218 <= 4 )
    goto LABEL_36;
  if ( tlgKeywordOn((__int64)&dword_1800DC218, 0x400000000008LL) )
  {
    v26[0] = *((_BYTE *)a1 + 560);
    v32 = *((_QWORD *)a1 - 4);
    v30 = (const unsigned __int16 *)((char *)a1 + 24);
    v31 = 0x1000000LL;
    v27 = v2;
    v29 = v12;
    v28 = v23;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      v21,
      byte_1800C0B1C,
      v22,
      v23,
      (__int64)&v28,
      (__int64)&v29,
      &v30,
      (__int64)&v32,
      (__int64)v26,
      (__int64)&v27,
      (__int64)&v31);
  }
LABEL_33:
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
  {
    v30 = (const unsigned __int16 *)*((_QWORD *)a1 - 4);
    v28 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800DC218,
      byte_1800C0DCB,
      v24,
      v25,
      (__int64)&v30,
      (__int64)&v28);
  }
LABEL_36:
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v33);
  if ( !v6 )
  {
    RmpAcquireGlobalLock();
    HampHostAcquireLockExclusiveEx(a1, 0);
  }
  *((_QWORD *)a1 + 83) &= ~0x8000000000000uLL;
}
