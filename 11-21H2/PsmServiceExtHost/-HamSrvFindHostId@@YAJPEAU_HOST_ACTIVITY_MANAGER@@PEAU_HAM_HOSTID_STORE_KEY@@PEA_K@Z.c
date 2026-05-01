/*
 * XREFs of ?HamSrvFindHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x18006FB74
 * Callers:
 *     HamRpcSrvFindHostId @ 0x1800736E0 (HamRpcSrvFindHostId.c)
 * Callees:
 *     ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180009308 (-HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180009A20 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3@Z @ 0x180009B70 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSid@U_.c)
 *     _tlgKeywordOn @ 0x18002D67C (_tlgKeywordOn.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     ?HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180076F18 (-HampHostIdStoreFindIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z.c)
 */

__int64 __fastcall HamSrvFindHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        struct _HAM_HOSTID_STORE_KEY *a2,
        unsigned __int64 *a3)
{
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  int IdForKey; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  const unsigned __int16 *v17; // [rsp+70h] [rbp-90h] BYREF
  const unsigned __int16 *v18; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v19[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+110h] [rbp+10h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 64LL) )
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1800DC218,
      (unsigned __int8 *)dword_1800BEECC,
      0LL,
      0LL,
      2u,
      &v20);
  v6 = -1LL;
  v13 = -1LL;
  if ( (unsigned int)HampHostIdStoreCheckAndSanitizeKey((const wchar_t *)a2) )
  {
    IdForKey = HampHostIdStoreFindIdForKey((struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 576), a2, &v13);
    v6 = v13;
    v7 = IdForKey;
    if ( IdForKey >= 0 )
    {
      *a3 = v13;
      v7 = 0;
    }
  }
  else
  {
    v7 = -1073741585;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && tlgKeywordOn((__int64)&dword_1800DC218, 8LL) )
  {
    v14 = *((_DWORD *)a2 + 133);
    v15 = (__int64)a2 + 464;
    v17 = (const unsigned __int16 *)((char *)a2 + 536);
    v16 = v6;
    v18 = (const unsigned __int16 *)a2;
    LODWORD(v13) = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>>(
      v9,
      byte_1800BEA63,
      v10,
      v11,
      (__int64)&v13,
      &v18,
      &v17,
      (__int64)&v16,
      &v15,
      (__int64)&v14);
  }
  return v7;
}
