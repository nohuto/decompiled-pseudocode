/*
 * XREFs of ?HamSrvCloseActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180039294
 * Callers:
 *     ?HampInProcCloseActivity@@YAJPEAX_K@Z @ 0x18004AEB0 (-HampInProcCloseActivity@@YAJPEAX_K@Z.c)
 *     HamRpcSrvCompleteExtendedExecution @ 0x180055790 (HamRpcSrvCompleteExtendedExecution.c)
 *     ?HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z @ 0x180080F34 (-HampWakeContextCloseActivity@@YAXPEAU_HAM_HOST_WAKE_CONTEXT@@@Z.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     CempLockTrackerIsSetForThread @ 0x180010BAC (CempLockTrackerIsSetForThread.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800262E0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18002ACD4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E240 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 */

__int64 __fastcall HamSrvCloseActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  int v4; // edi
  int v5; // ebx
  struct _HAM_ACTIVITY *v6; // rax
  __int64 v7; // rdx
  struct _HAM_ACTIVITY *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE v14[144]; // [rsp+40h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C13FE,
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
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v13 = a2;
    v12 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)&unk_1800C0F0D,
      v9,
      v10,
      (__int64)&v12,
      (__int64)&v13);
  }
  return (unsigned int)v5;
}
