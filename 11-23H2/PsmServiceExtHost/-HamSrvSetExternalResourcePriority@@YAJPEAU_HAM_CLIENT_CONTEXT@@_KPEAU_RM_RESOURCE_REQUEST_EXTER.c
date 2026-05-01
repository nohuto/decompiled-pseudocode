/*
 * XREFs of ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x1800736B8
 * Callers:
 *     ?HampInProcSetExternalResourcePriority@@YAJPEAX_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18004AEE0 (-HampInProcSetExternalResourcePriority@@YAJPEAX_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z.c)
 *     HamRpcSrvSetExternalResourcePriority @ 0x18007AE30 (HamRpcSrvSetExternalResourcePriority.c)
 * Callees:
 *     CemRcObjectDereference @ 0x18000BFF0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18000E240 (CempLockTrackerClearForThread.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x1800288A0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x1800296C0 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180036C28 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004E280 (-HampClientIsActive@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007BAD8 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 */

__int64 __fastcall HamSrvSetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        unsigned __int64 a2,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  struct _HAM_ACTIVITY *v8; // rax
  struct _HAM_ACTIVITY *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+40h] [rbp-F8h] BYREF
  int v15; // [rsp+44h] [rbp-F4h] BYREF
  int v16; // [rsp+48h] [rbp-F0h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v18[144]; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+F0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DB218,
      (unsigned __int8 *)dword_1800C126A,
      0LL,
      0LL,
      2u,
      &v19);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  if ( *(_BYTE *)a3 < 3u || *(_BYTE *)a3 > 0x30u || (unsigned __int8)(*((_BYTE *)a3 + 1) - 2) > 0x63u )
  {
    v7 = -1073741583;
  }
  else if ( HampClientIsActive(a1, v6) )
  {
    v8 = HampActFindForClient(a1, a2);
    v9 = v8;
    if ( v8 )
    {
      v7 = HampActSetExternalResourcePriority(v8, a3);
      if ( v7 >= 0 )
        v7 = 0;
      CemRcObjectDereference(v9);
    }
    else
    {
      v7 = -1073741275;
    }
  }
  else
  {
    v7 = -1073741661;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 8LL) )
  {
    v14 = *((unsigned __int8 *)a3 + 1);
    v15 = *(unsigned __int8 *)a3;
    v17 = a2;
    v16 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v10,
      byte_1800C15CC,
      v11,
      v12,
      (__int64)&v16,
      (__int64)&v17,
      (__int64)&v15,
      (__int64)&v14);
  }
  return (unsigned int)v7;
}
