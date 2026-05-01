/*
 * XREFs of ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180004EF4
 * Callers:
 *     HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x180001C90 (HamRpcSrvCreateAutoRestartActivityForDesktopBridge.c)
 *     HamRpcSrvCreateAutoRestartActivity @ 0x18009DB70 (HamRpcSrvCreateAutoRestartActivity.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x180001490 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800018B0 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArAcquireGlobalLockShared@@YAXXZ @ 0x180001DC8 (-ArAcquireGlobalLockShared@@YAXXZ.c)
 *     ?ArReleaseGlobalLockShared@@YAXXZ @ 0x180001DFC (-ArReleaseGlobalLockShared@@YAXXZ.c)
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180001E2C (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ?ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAXPEAPEAU_AR_ACTIVITY@@@Z @ 0x180001FD4 (-ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800021A4 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180004E98 (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005200 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005250 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180005DA8 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall ArSrvCheckCreateActivityForHost(
        unsigned __int64 *a1,
        struct _RM_PSM_HOST_INFO *a2,
        void *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4,
        union _HAM_RESTART_PROPERTIES *a5)
{
  ULONG v8; // r9d
  __int64 v9; // r14
  struct _AR_ACTIVITY *v10; // rdi
  struct _ACTIVITY_RESTARTER *v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  int v15; // eax
  struct _AR_ACTIVITY_HOST *v16; // rsi
  __int16 v17; // r14
  __int64 v18; // rbx
  int v19; // eax
  struct _AR_ACTIVITY *v20; // rcx
  struct _AR_ACTIVITY *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _BYTE v26[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _AR_ACTIVITY *v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _AR_ACTIVITY_HOST *v29; // [rsp+68h] [rbp-98h] BYREF
  void *v30; // [rsp+70h] [rbp-90h] BYREF
  struct _HAM_ACTIVITY_PROPERTIES *v31; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v32[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+110h] [rbp+10h] BYREF

  v31 = a4;
  v30 = a3;
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 64LL, a3, 2LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DC218, (int)&dword_1800BD0E2, 0, 0, v8, &v33);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v32);
  v9 = -1LL;
  v29 = 0LL;
  v28 = -1LL;
  v10 = 0LL;
  v27 = 0LL;
  v26[0] = 0;
  ArAcquireGlobalLockShared();
  v11 = (struct _ACTIVITY_RESTARTER *)ArGlobals;
  ArReleaseGlobalLockShared();
  if ( v11 )
  {
    if ( *(_DWORD *)a5 >= 4u
      || (*((_BYTE *)a4 + 8) & 4) != 0 && (*(_BYTE *)a5 & 1) == 0
      || (*((_DWORD *)a4 + 2) & 0x200) != 0 && (*(_BYTE *)a5 & 2) == 0 )
    {
      v14 = -1073741811;
    }
    else
    {
      v15 = ArHostFindOrCreate(a2, v11, &v29);
      v16 = v29;
      v14 = v15;
      if ( v15 >= 0 )
      {
        v17 = 0;
        while ( 1 )
        {
          ArHostWaitForAndSetChangeInProgress(v16);
          v18 = *((_QWORD *)v16 + 75);
          ArHostClearChangeInProgress(v16);
          if ( !v18 )
          {
            v19 = ArActCreate(v16, (struct _AR_ACTIVITY_PROPERTIES *)v26, v31, a5, v30, &v27);
            v10 = v27;
            v14 = v19;
            if ( v19 < 0 )
              goto LABEL_30;
            v28 = *((_QWORD *)v27 + 1);
          }
          ArHostWaitForAndSetChangeInProgress(v16);
          v20 = (struct _AR_ACTIVITY *)*((_QWORD *)v16 + 75);
          if ( v20 )
            break;
          if ( v10 )
          {
            *((_QWORD *)v16 + 75) = v10;
            v20 = v10;
            break;
          }
          ArHostClearChangeInProgress(v16);
          if ( (unsigned __int16)++v17 >= 2u )
            goto LABEL_24;
        }
        if ( !*((_BYTE *)v20 + 32) )
          ArActStartAsync(v20);
        ArHostClearChangeInProgress(v16);
LABEL_24:
        ArHostWaitForAndSetChangeInProgress(v16);
        v21 = (struct _AR_ACTIVITY *)*((_QWORD *)v16 + 75);
        if ( v21 && v21 == v10 )
        {
          if ( a1 )
            *a1 = *((_QWORD *)v10 + 1);
          ArActDereference(v10);
          v10 = 0LL;
        }
        ArHostClearChangeInProgress(v16);
        v14 = 0;
LABEL_30:
        if ( v10 )
        {
          ArHostWaitForAndSetChangeInProgress(v16);
          ArActClose(v10);
          ArHostClearChangeInProgress(v16);
          ArActDereference(v10);
        }
        v9 = v28;
      }
      if ( v16 )
        CemRcObjectDereference(v16);
    }
  }
  else
  {
    v14 = -1073741637;
  }
  if ( (unsigned int)dword_1800DC218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DC218, 8LL, v12, v13) )
  {
    v31 = (struct _HAM_ACTIVITY_PROPERTIES *)*((_QWORD *)a2 + 68);
    v30 = (void *)*((unsigned int *)a2 + 134);
    v29 = a2;
    v28 = v9;
    LODWORD(v27) = v14;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v22,
      (int)&unk_1800BD10E,
      v23,
      v24,
      (__int64)&v27,
      (__int64)&v28,
      (const unsigned __int16 **)&v29,
      (__int64)&v30,
      (__int64)&v31);
  }
  CempLockTrackerClearForThread(ArLockTrackerId);
  return v14;
}
