/*
 * XREFs of ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x180072ABC
 * Callers:
 *     HamRpcSrvSessionStateLogoffUser @ 0x18007B1A0 (HamRpcSrvSessionStateLogoffUser.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSid@U_SID@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSid@U_SID@@@@@Z @ 0x180070CD0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSid@U_SID@@@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z @ 0x180080D54 (-HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180080DC8 (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     CempUtilValidateAndCaptureSid @ 0x18009797C (CempUtilValidateAndCaptureSid.c)
 */

__int64 __fastcall HamSrvLogoffUser(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int8 *a2, __int64 a3, unsigned int a4)
{
  int v7; // ebx
  struct _HAM_USER *v8; // rax
  struct _HAM_USER *v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+40h] [rbp-148h] BYREF
  int v15; // [rsp+44h] [rbp-144h] BYREF
  unsigned __int8 *v16; // [rsp+48h] [rbp-140h] BYREF
  _BYTE v17[80]; // [rsp+50h] [rbp-138h] BYREF
  _BYTE v18[144]; // [rsp+A0h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+130h] [rbp-58h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C0B10,
      0LL,
      0LL,
      2u,
      &v19);
  v7 = CempUtilValidateAndCaptureSid(a2);
  if ( v7 >= 0 )
  {
    v8 = HampUserFindInManager(
           (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                           - 48LL * *((unsigned __int8 *)a1 + 164)
                                           - 16),
           *((_DWORD *)a1 + 42),
           (union _RM_SID *)v17);
    v9 = v8;
    if ( v8 )
    {
      v7 = HampUserLogoff(v8, a1, a4);
      if ( v7 >= 0 )
        v7 = 0;
      CemRcObjectDereference(v9);
    }
    else
    {
      v7 = -1058275321;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v14 = *((_DWORD *)a1 + 42);
    v16 = a2;
    v15 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>>(
      v10,
      byte_1800C073F,
      v11,
      v12,
      (__int64)&v15,
      (__int64)&v14,
      (__int64 *)&v16);
  }
  return (unsigned int)v7;
}
