/*
 * XREFs of ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18001452C
 * Callers:
 *     HamRpcSrvStopActivity @ 0x180014520 (HamRpcSrvStopActivity.c)
 *     ?HampInProcStopActivity@@YAJPEAX_K@Z @ 0x18004AF00 (-HampInProcStopActivity@@YAJPEAX_K@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CempLockTrackerIsSetForThread @ 0x180010BAC (CempLockTrackerIsSetForThread.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180014698 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E280 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamSrvStopActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  struct _HAM_ACTIVITY *v6; // rax
  struct _HAM_ACTIVITY *v7; // rsi
  int v8; // r8d
  int v9; // r9d
  int v11; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v13[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DB218, (int)&dword_1800C167C, 0, 0, 2u, &v14);
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
    v7 = v6;
    if ( v6 )
    {
      v5 = HampActStop(v6);
      if ( v5 >= 0 )
        v5 = 0;
      CemRcObjectDereference(v7);
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
  if ( (unsigned int)dword_1800DB218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800DB218, 8LL) )
  {
    v12 = a2;
    v11 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800DB218,
      (unsigned int)&unk_1800C01C6,
      v8,
      v9,
      (__int64)&v11,
      (__int64)&v12);
  }
  return (unsigned int)v5;
}
