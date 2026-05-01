/*
 * XREFs of ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18002D6A8
 * Callers:
 *     HamRpcSrvConnectExtendedExecution @ 0x1800323F0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x1800426E0 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180046620 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x180046DB0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectServicing @ 0x180046ED0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180046FD0 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectFullTrust @ 0x1800733D0 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180006ABC (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvConnect(
        __int64 a1,
        int a2,
        union _RM_SID *a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        int *a10,
        struct _WNF_STATE_NAME **a11)
{
  int *v15; // rdx
  ULONG v16; // esi
  int v17; // ecx
  int v18; // ebx
  int v19; // r9d
  char v21; // [rsp+60h] [rbp-A0h] BYREF
  int v22; // [rsp+64h] [rbp-9Ch] BYREF
  ULONG v23; // [rsp+68h] [rbp-98h] BYREF
  int v24; // [rsp+6Ch] [rbp-94h] BYREF
  char v25[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+100h] [rbp+0h] BYREF
  int *v27; // [rsp+120h] [rbp+20h]
  int v28; // [rsp+128h] [rbp+28h]
  int v29; // [rsp+12Ch] [rbp+2Ch]
  char *v30; // [rsp+130h] [rbp+30h]
  int v31; // [rsp+138h] [rbp+38h]
  int v32; // [rsp+13Ch] [rbp+3Ch]
  ULONG *v33; // [rsp+140h] [rbp+40h]
  int v34; // [rsp+148h] [rbp+48h]
  int v35; // [rsp+14Ch] [rbp+4Ch]
  int *v36; // [rsp+150h] [rbp+50h]
  int v37; // [rsp+158h] [rbp+58h]
  int v38; // [rsp+15Ch] [rbp+5Ch]
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+160h] [rbp+60h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BFA95,
      0LL,
      0LL,
      2u,
      &v39);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v15 = a10;
  v16 = 0;
  if ( a10 )
  {
    if ( (unsigned int)(*a10 - 1) > 0x1E || (*a10 & 0x11) == 0x11 || a6 != 6 )
      goto LABEL_15;
    goto LABEL_6;
  }
  if ( a6 )
  {
LABEL_6:
    v17 = a7;
    if ( !a7 )
    {
      if ( a6 == 6 && !a10 )
      {
        v22 = 15;
        v15 = &v22;
      }
      goto LABEL_8;
    }
LABEL_15:
    v18 = -1073741583;
    goto LABEL_10;
  }
  v17 = a7;
  if ( (a7 & 1) != a7 )
    goto LABEL_15;
LABEL_8:
  v18 = HampClientCreate(a1, a2, a3, a4, a5, a6, v17, 0LL, 0LL, v15, a11);
  if ( v18 >= 0 )
  {
    v18 = 0;
    v16 = (*a11)[18].Data[1];
  }
LABEL_10:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v38 = 0;
    v35 = 0;
    v32 = 0;
    v29 = 0;
    v36 = &v22;
    v33 = &v23;
    v30 = &v21;
    v27 = &v24;
    v37 = v19;
    v34 = v19;
    v28 = v19;
    v22 = v18;
    v23 = v16;
    v21 = a6;
    v24 = a2;
    v31 = 1;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF3D6,
      0LL,
      0LL,
      6u,
      &v26);
  }
  return (unsigned int)v18;
}
