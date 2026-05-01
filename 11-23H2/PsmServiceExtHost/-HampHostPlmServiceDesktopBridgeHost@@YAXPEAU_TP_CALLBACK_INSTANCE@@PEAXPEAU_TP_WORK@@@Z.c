/*
 * XREFs of ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F6E0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013214 (-HampHostShouldSendPsmQuiesceAndQueryRestart@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180013230 (-HampHostShouldSendDesktopWindowClose@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001C5B4 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     CempLockTrackerMarkReleased @ 0x18001C6B0 (CempLockTrackerMarkReleased.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001D6A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800211A8 (-HampHostAcquireLockSharedEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180032500 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800326A0 (-RmHamHostGetProcessesInfo@@YAJPEAU_RM_ACTIVITY_HOST@@KKPEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z @ 0x18004C1DC (-HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@PEAPEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053500 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180054F26 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

void __fastcall HampHostPlmServiceDesktopBridgeHost(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _TP_WORK *a3)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rdx
  int v8; // eax
  int ProcessesInfo; // r14d
  unsigned __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  _DWORD *v15; // r13
  _QWORD *v16; // rdi
  unsigned int v17; // r15d
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-B0h]
  _BYTE v24[144]; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v26; // [rsp+118h] [rbp+10h]
  int v27; // [rsp+120h] [rbp+18h]
  int v28; // [rsp+124h] [rbp+1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v4 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v5 = *((_QWORD *)a2 + 71);
    v28 = 0;
    v21 = v5;
    v27 = 8;
    v26 = &v21;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800BF21A,
      0LL,
      0LL,
      3u,
      &v25);
  }
  HampHostAcquireLockSharedEx(a2);
  LOBYTE(v6) = HampHostShouldSendPsmQuiesceAndQueryRestart(a2);
  if ( v6 )
  {
    LODWORD(v20) = 2;
  }
  else
  {
    LOBYTE(v8) = HampHostShouldSendDesktopWindowClose(a2);
    if ( !v8 )
    {
      v10 = (unsigned __int64)a2 - 64;
LABEL_25:
      ProcessesInfo = -1058275324;
      CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
      RtlReleaseSRWLockShared(a2);
      goto LABEL_26;
    }
    LODWORD(v20) = 3;
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
  RtlReleaseSRWLockShared(a2);
  ProcessesInfo = RmHamHostGetProcessesInfo(
                    (struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a2 - 64) & -(__int64)(a2 != 0LL)),
                    4112,
                    1,
                    (struct _HAM_PROCESS_SNAPSHOT *)&v22);
  v10 = (unsigned __int64)a2 - 64;
  if ( ProcessesInfo < 0 )
    goto LABEL_26;
  LODWORD(v11) = v23;
  if ( !(_DWORD)v23 )
  {
    ProcessesInfo = -1073741275;
    goto LABEL_26;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 99) + 88LL) + 88LL) + 160LL);
  v4 = *(_QWORD *)(v12 + 136);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*(_QWORD *)(v12 + 136));
  HampHostAcquireLockSharedEx(a2);
  LOBYTE(v13) = HampHostShouldSendDesktopWindowClose(a2);
  if ( !v13 )
  {
    LOBYTE(v14) = HampHostShouldSendPsmQuiesceAndQueryRestart(a2);
    if ( !v14 )
      goto LABEL_25;
  }
  CempLockTrackerMarkReleased(HampLockTrackerId, v7, 1u);
  RtlReleaseSRWLockShared(a2);
  if ( (_DWORD)v11 )
  {
    v15 = (_DWORD *)*((_QWORD *)&v22 + 1);
    v16 = (_QWORD *)v22;
    v17 = v20;
    v11 = (unsigned int)v11;
    do
    {
      if ( v4
        && (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 24LL))(v4, *v16, v17) < 0
        && (unsigned int)dword_1800DB218 > 4
        && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
      {
        LODWORD(v21) = *v15;
        LODWORD(v20) = v18;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)&dword_1800DB218,
          byte_1800BFE92,
          v18,
          v19,
          (__int64)&v21,
          (__int64)&v20);
      }
      ++v16;
      ++v15;
      --v11;
    }
    while ( v11 );
    v10 = (unsigned __int64)a2 - 64;
  }
LABEL_26:
  HampHostAcquireLockExclusiveEx(a2, 0);
  *((_QWORD *)a2 + 84) &= ~0x40uLL;
  HampHostReleaseLockExclusiveEx(a2);
  HampProcessSnapshotCleanup((struct _HAM_PROCESS_SNAPSHOT *)&v22, 0LL);
  RmpObjectRelease((struct _RM_OBJECT_HEADER *)(v10 & -(__int64)(a2 != 0LL)));
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
  {
    v28 = 0;
    v26 = &v21;
    LODWORD(v21) = ProcessesInfo;
    v27 = 4;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800BFD6E,
      0LL,
      0LL,
      3u,
      &v25);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
