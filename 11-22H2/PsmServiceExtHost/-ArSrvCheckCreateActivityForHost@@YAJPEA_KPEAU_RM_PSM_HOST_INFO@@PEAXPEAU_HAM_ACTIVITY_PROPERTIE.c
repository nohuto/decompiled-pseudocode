/*
 * XREFs of ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180002E48
 * Callers:
 *     HamRpcSrvCreateAutoRestartActivityForDesktopBridge @ 0x180002D10 (HamRpcSrvCreateAutoRestartActivityForDesktopBridge.c)
 *     HamRpcSrvCreateAutoRestartActivity @ 0x180098570 (HamRpcSrvCreateAutoRestartActivity.c)
 * Callees:
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180003154 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800031A4 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x1800032D4 (-ArActStartAsync@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAXPEAPEAU_AR_ACTIVITY@@@Z @ 0x18000331C (-ArActCreate@@YAJPEAU_AR_ACTIVITY_HOST@@PEAU_AR_ACTIVITY_PROPERTIES@@PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800033F0 (-ArHostFindOrCreate@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_ACTIVITY_RESTARTER@@PEAPEAU_AR_ACTIVITY_HOST.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x1800034D0 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 *     ?ArReleaseGlobalLockShared@@YAXXZ @ 0x1800036A8 (-ArReleaseGlobalLockShared@@YAXXZ.c)
 *     ?ArAcquireGlobalLockShared@@YAXXZ @ 0x1800036D8 (-ArAcquireGlobalLockShared@@YAXXZ.c)
 *     ?ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x18000370C (-ArActDereference@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180003738 (-ArUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z @ 0x18006CE54 (-ArActClose@@YAJPEAU_AR_ACTIVITY@@@Z.c)
 */

__int64 __fastcall ArSrvCheckCreateActivityForHost(
        unsigned __int64 *a1,
        struct _RM_PSM_HOST_INFO *a2,
        void *a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4,
        union _HAM_RESTART_PROPERTIES *a5)
{
  ULONG v8; // r8d
  __int64 v9; // r14
  struct _AR_ACTIVITY *v10; // rdi
  struct _ACTIVITY_RESTARTER *v11; // rbx
  unsigned int v12; // ebx
  int v13; // eax
  struct _AR_ACTIVITY_HOST *v14; // rsi
  __int16 v15; // r14
  __int64 v16; // rbx
  int v17; // eax
  struct _AR_ACTIVITY *v18; // rcx
  struct _AR_ACTIVITY *v19; // rax
  __int64 v20; // rcx
  char v22[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h]
  struct _AR_ACTIVITY_HOST *v25; // [rsp+68h] [rbp-98h] BYREF
  void *v26; // [rsp+70h] [rbp-90h]
  struct _HAM_ACTIVITY_PROPERTIES *v27; // [rsp+78h] [rbp-88h]
  char v28[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+110h] [rbp+10h] BYREF

  v26 = a3;
  v27 = a4;
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800BDFB2, 0, 0, v8, &v29);
  ArUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  v9 = -1LL;
  v25 = 0LL;
  v24 = -1LL;
  v10 = 0LL;
  P = 0LL;
  v22[0] = 0;
  ArAcquireGlobalLockShared();
  v11 = (struct _ACTIVITY_RESTARTER *)ArGlobals;
  ArReleaseGlobalLockShared();
  if ( v11 )
  {
    if ( *(_DWORD *)a5 >= 4u
      || (*((_BYTE *)a4 + 8) & 4) != 0 && (*(_BYTE *)a5 & 1) == 0
      || (*((_DWORD *)a4 + 2) & 0x200) != 0 && (*(_BYTE *)a5 & 2) == 0 )
    {
      v12 = -1073741811;
    }
    else
    {
      v13 = ArHostFindOrCreate(a2, v11, &v25);
      v14 = v25;
      v12 = v13;
      if ( v13 >= 0 )
      {
        v15 = 0;
        while ( 1 )
        {
          ArHostWaitForAndSetChangeInProgress(v14);
          v16 = *((_QWORD *)v14 + 75);
          ArHostClearChangeInProgress(v14);
          if ( !v16 )
          {
            v17 = ArActCreate(v14, (struct _AR_ACTIVITY_PROPERTIES *)v22, v27, a5, v26, (struct _AR_ACTIVITY **)&P);
            v10 = (struct _AR_ACTIVITY *)P;
            v12 = v17;
            if ( v17 < 0 )
              goto LABEL_30;
            v24 = *((_QWORD *)P + 1);
          }
          ArHostWaitForAndSetChangeInProgress(v14);
          v18 = (struct _AR_ACTIVITY *)*((_QWORD *)v14 + 75);
          if ( v18 )
            break;
          if ( v10 )
          {
            *((_QWORD *)v14 + 75) = v10;
            v18 = v10;
            break;
          }
          ArHostClearChangeInProgress(v14);
          if ( (unsigned __int16)++v15 >= 2u )
            goto LABEL_24;
        }
        if ( !*((_BYTE *)v18 + 32) )
          ArActStartAsync(v18);
        ArHostClearChangeInProgress(v14);
LABEL_24:
        ArHostWaitForAndSetChangeInProgress(v14);
        v19 = (struct _AR_ACTIVITY *)*((_QWORD *)v14 + 75);
        if ( v19 && v19 == v10 )
        {
          if ( a1 )
            *a1 = *((_QWORD *)v10 + 1);
          ArActDereference(v10);
          v10 = 0LL;
        }
        ArHostClearChangeInProgress(v14);
        v12 = 0;
LABEL_30:
        if ( v10 )
        {
          ArHostWaitForAndSetChangeInProgress(v14);
          ArActClose(v10);
          ArHostClearChangeInProgress(v14);
          ArActDereference(v10);
        }
        v9 = v24;
      }
      if ( v14 )
        CemRcObjectDereference(v14);
    }
  }
  else
  {
    v12 = -1073741637;
  }
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
  {
    v27 = (struct _HAM_ACTIVITY_PROPERTIES *)*((_QWORD *)a2 + 68);
    v26 = (void *)*((unsigned int *)a2 + 134);
    v25 = a2;
    v24 = v9;
    LODWORD(P) = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v20,
      &unk_1800BDFDE);
  }
  CempLockTrackerClearForThread(ArLockTrackerId);
  return v12;
}
