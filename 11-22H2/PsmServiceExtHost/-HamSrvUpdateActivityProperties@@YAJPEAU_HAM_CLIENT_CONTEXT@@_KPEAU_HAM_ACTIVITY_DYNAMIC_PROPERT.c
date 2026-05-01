/*
 * XREFs of ?HamSrvUpdateActivityProperties@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18001506C
 * Callers:
 *     HamRpcSrvUpdateActivityProperties @ 0x180015060 (HamRpcSrvUpdateActivityProperties.c)
 *     ?HampInProcUpdateActivityProperties@@YAJPEAX_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x18004AFD0 (-HampInProcUpdateActivityProperties@@YAJPEAX_KPEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x1800152E4 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E240 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamSrvUpdateActivityProperties(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_DYNAMIC_PROPERTIES *a3)
{
  int v6; // ebx
  int updated; // ebx
  int v8; // eax
  struct _HAM_ACTIVITY *v9; // rax
  struct _HAM_ACTIVITY *v10; // rdi
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp-20h] BYREF
  int *v18; // [rsp+100h] [rbp+0h]
  __int64 v19; // [rsp+108h] [rbp+8h]
  unsigned __int64 *v20; // [rsp+110h] [rbp+10h]
  __int64 v21; // [rsp+118h] [rbp+18h]
  int *v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h]
  int *v24; // [rsp+130h] [rbp+30h]
  __int64 v25; // [rsp+138h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+140h] [rbp+40h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C16E3, 0, 0, 2u, &v26);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v6 = *(_DWORD *)a3;
  v12 = v6;
  if ( (v6 & 0xFFF0) != 0 || HIWORD(v6) >= 8u )
    goto LABEL_28;
  if ( !HampClientIsActive(a1) )
  {
    updated = -1073741661;
    goto LABEL_29;
  }
  if ( (v12 & 0x10000) == 0 && (v6 & 1) != 0
    || (v12 & 0x20000) == 0 && (v6 & 6) != 0
    || (v12 & 0x40000) == 0 && (v6 & 8) != 0
    || (v6 & 6u) >= 6
    || (v8 = *((_DWORD *)a3 + 1), (v8 & 1) == 0) && v8
    || (v8 & 0xF000) != 0
    || ((v8 & 0xE) == 0) != ((v8 & 0x30) == 0)
    || *((_BYTE *)a3 + 7)
    || (*((_BYTE *)a3 + 4) & 1) == 0 && !HIWORD(v12) )
  {
LABEL_28:
    updated = -1073741583;
    goto LABEL_29;
  }
  v9 = HampActFindForClient(a1, a2);
  v10 = v9;
  if ( v9 )
  {
    updated = HampActUpdateProperties(v9, a3);
    if ( updated >= 0 )
      updated = 0;
    CemRcObjectDereference(v10);
  }
  else
  {
    updated = -1073741275;
  }
LABEL_29:
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v12 = *((_DWORD *)a3 + 1);
    v13 = *(_DWORD *)a3;
    v15 = a2;
    v24 = &v12;
    v22 = &v13;
    v20 = &v15;
    v18 = &v14;
    v14 = updated;
    v25 = 4LL;
    v23 = 4LL;
    v21 = 8LL;
    v19 = 4LL;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C17C9, 0, 0, 6u, &v17);
  }
  return (unsigned int)updated;
}
