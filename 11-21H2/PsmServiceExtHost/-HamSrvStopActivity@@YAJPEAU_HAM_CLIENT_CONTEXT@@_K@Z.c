/*
 * XREFs of ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002E5F0
 * Callers:
 *     HamRpcSrvStopActivity @ 0x18003ED30 (HamRpcSrvStopActivity.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005DD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180006044 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerIsSetForThread @ 0x18002AF38 (CempLockTrackerIsSetForThread.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002C900 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvStopActivity(struct _HAM_CLIENT_CONTEXT *a1, __int64 a2)
{
  int v4; // edi
  struct _HAM_ACTIVITY *v5; // rax
  __int64 v6; // rdx
  struct _HAM_ACTIVITY *v7; // rsi
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF83D,
      0LL,
      0LL,
      2u,
      &v15);
  if ( CempLockTrackerIsSetForThread() )
  {
    v4 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
    v4 = 1;
  }
  v5 = HampActFindForClient(a1, a2);
  v7 = v5;
  if ( v5 )
  {
    v8 = HampActStop(v5, v6);
    if ( v8 >= 0 )
      v8 = 0;
    CemRcObjectDereference(v7);
  }
  else
  {
    v8 = -1073741275;
  }
  if ( v4 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v13 = a2;
    v12 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (int)&dword_1800DC218,
      (int)&unk_1800BE353,
      v9,
      v10,
      (__int64)&v12,
      (__int64)&v13);
  }
  return (unsigned int)v8;
}
