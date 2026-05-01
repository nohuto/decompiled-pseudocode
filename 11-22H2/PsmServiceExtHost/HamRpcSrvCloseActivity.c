/*
 * XREFs of HamRpcSrvCloseActivity @ 0x18002AE20
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CempLockTrackerIsSetForThread @ 0x180010BAC (CempLockTrackerIsSetForThread.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E240 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamRpcSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  int v4; // esi
  int v5; // ebx
  struct _HAM_ACTIVITY *v6; // rax
  __int64 v7; // rdx
  struct _HAM_ACTIVITY *v8; // rdi
  _DWORD v10[2]; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-130h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-128h] BYREF
  char v13[144]; // [rsp+50h] [rbp-118h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+E0h] [rbp-88h] BYREF
  void *v15; // [rsp+F0h] [rbp-78h]
  int v16; // [rsp+F8h] [rbp-70h]
  int v17; // [rsp+FCh] [rbp-6Ch]
  _DWORD *v18; // [rsp+100h] [rbp-68h]
  __int64 v19; // [rsp+108h] [rbp-60h]
  unsigned __int64 *v20; // [rsp+110h] [rbp-58h]
  __int64 v21; // [rsp+118h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+120h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 0x40) != 0 && (qword_1800DB230 & 0x40) == qword_1800DB230 )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C13FE,
      0LL,
      0LL,
      2u,
      &UserData);
  if ( CempLockTrackerIsSetForThread() )
  {
    v4 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
    v4 = 1;
  }
  if ( HampClientIsActive(a1) )
  {
    v6 = HampActFindForClient(a1, a2);
    v8 = v6;
    if ( v6 )
    {
      v5 = HampActClose(v6, v7);
      if ( v5 >= 0 )
        v5 = 0;
      CemRcObjectDereference(v8);
    }
    else
    {
      v5 = -1073741275;
    }
  }
  else
  {
    v5 = -1073741661;
  }
  if ( v4 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && (qword_1800DB228 & 8) != 0 && (qword_1800DB230 & 8) == qword_1800DB230 )
  {
    v11 = a2;
    v20 = &v11;
    v10[0] = v5;
    v18 = v10;
    *(_DWORD *)&EventDescriptor.Level = 516;
    v14.Ptr = (ULONGLONG)off_1800DB220;
    v21 = 8LL;
    v19 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 8LL;
    v14.Size = *(unsigned __int16 *)off_1800DB220;
    v15 = &unk_1800C0F18;
    v14.Reserved = 2;
    v16 = 39;
    v17 = 1;
    v10[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800DB238, &EventDescriptor, 0LL, 0LL, 4u, &v14);
  }
  return (unsigned int)v5;
}
