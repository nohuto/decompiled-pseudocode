/*
 * XREFs of ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007173C
 * Callers:
 *     HamRpcSrvSetExternalResourcePriority @ 0x180073650 (HamRpcSrvSetExternalResourcePriority.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18002C900 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CemRcObjectDereference @ 0x180036410 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x18003D7B4 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x180078078 (-HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRI.c)
 */

__int64 __fastcall HamSrvSetExternalResourcePriority(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a3)
{
  struct _HAM_ACTIVITY *v6; // rax
  struct _HAM_ACTIVITY *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+40h] [rbp-F8h] BYREF
  int v14; // [rsp+44h] [rbp-F4h] BYREF
  int v15; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v17[144]; // [rsp+60h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+F0h] [rbp-48h] BYREF

  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BF4FE,
      0LL,
      0LL,
      2u,
      &v18);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  if ( *(_BYTE *)a3 < 3u || *(_BYTE *)a3 > 0x30u || (unsigned __int8)(*((_BYTE *)a3 + 1) - 2) > 0x63u )
  {
    v8 = -1073741583;
  }
  else
  {
    v6 = HampActFindForClient(a1, a2);
    v7 = v6;
    if ( v6 )
    {
      v8 = HampActSetExternalResourcePriority(v6, a3);
      if ( v8 >= 0 )
        v8 = 0;
      CemRcObjectDereference(v7);
    }
    else
    {
      v8 = -1073741275;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v13 = *((unsigned __int8 *)a3 + 1);
    v14 = *(unsigned __int8 *)a3;
    v16 = a2;
    v15 = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_1800BF416,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v13);
  }
  return (unsigned int)v8;
}
