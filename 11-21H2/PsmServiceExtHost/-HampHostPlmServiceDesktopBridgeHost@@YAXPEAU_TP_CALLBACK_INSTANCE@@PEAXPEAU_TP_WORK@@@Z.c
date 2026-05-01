/*
 * XREFs of ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18007A220
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerMarkReleased @ 0x180010300 (CempLockTrackerMarkReleased.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x1800248A0 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A648 (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18002A6D0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A34C (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003A9F4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D22C (-HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003D274 (-HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18003E214 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180051542 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall HampHostPlmServiceDesktopBridgeHost(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // r13d
  int v9; // eax
  int ProcessesInfo; // r12d
  __int64 v11; // rsi
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // r15
  _QWORD *v16; // r14
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  _BYTE v23[144]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v25; // [rsp+118h] [rbp+10h]
  int v26; // [rsp+120h] [rbp+18h]
  int v27; // [rsp+124h] [rbp+1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v23);
  v4 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
  {
    v5 = *((_QWORD *)a2 + 71);
    v27 = 0;
    v19 = v5;
    v26 = 8;
    v25 = &v19;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C0681,
      0LL,
      0LL,
      3u,
      &v24);
  }
  HampHostAcquireLockSharedEx(a2, 0LL);
  LOBYTE(v6) = HampHostShouldSendPsmQuiesceAndQueryRestart(a2);
  if ( v6 )
  {
    v8 = 2;
  }
  else
  {
    LOBYTE(v9) = HampHostShouldSendDesktopWindowClose(a2);
    if ( !v9 )
    {
LABEL_24:
      CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
      RtlReleaseSRWLockShared(a2);
      ProcessesInfo = -1058275324;
      goto LABEL_25;
    }
    v8 = 3;
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
  RtlReleaseSRWLockShared(a2);
  ProcessesInfo = RmHamHostGetProcessesInfo(
                    (struct _RM_HAM_ACTIVITY_HOST *)((char *)a2 - 64),
                    4112,
                    1,
                    (struct _HAM_PROCESS_SNAPSHOT *)&v21);
  if ( ProcessesInfo < 0 )
    goto LABEL_25;
  LODWORD(v11) = v22;
  if ( !(_DWORD)v22 )
  {
    ProcessesInfo = -1073741275;
    goto LABEL_25;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL) + 88LL) + 160LL);
  v4 = *(_QWORD *)(v12 + 136);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v12 + 136));
  HampHostAcquireLockSharedEx(a2, 0LL);
  LOBYTE(v13) = HampHostShouldSendDesktopWindowClose(a2);
  if ( !v13 )
  {
    LOBYTE(v14) = HampHostShouldSendPsmQuiesceAndQueryRestart(a2);
    if ( !v14 )
      goto LABEL_24;
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
  RtlReleaseSRWLockShared(a2);
  if ( (_DWORD)v11 )
  {
    v15 = (_DWORD *)*((_QWORD *)&v21 + 1);
    v16 = (_QWORD *)v21;
    v11 = (unsigned int)v11;
    do
    {
      if ( v4
        && (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *v16, v8) < 0
        && (unsigned int)dword_1800DC218 > 4
        && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
      {
        LODWORD(v19) = *v15;
        v20 = v18;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1800DC218,
          byte_1800C120A,
          v17,
          v18,
          (__int64)&v19,
          (__int64)&v20);
      }
      ++v16;
      ++v15;
      --v11;
    }
    while ( v11 );
  }
LABEL_25:
  HampHostAcquireLockExclusiveEx(a2, 0);
  *((_QWORD *)a2 + 84) &= ~0x40uLL;
  HampHostReleaseLockExclusiveEx(a2);
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v21);
  RmpObjectRelease((char *)a2 - 64);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
  {
    v27 = 0;
    v25 = &v19;
    LODWORD(v19) = ProcessesInfo;
    v26 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800C1137,
      0LL,
      0LL,
      3u,
      &v24);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
