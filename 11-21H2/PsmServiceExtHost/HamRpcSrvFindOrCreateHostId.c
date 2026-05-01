/*
 * XREFs of HamRpcSrvFindOrCreateHostId @ 0x180008570
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerSetForThread @ 0x180008738 (CempLockTrackerSetForThread.c)
 *     ?HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K@Z @ 0x180008790 (-HampHostIdStoreFindOrCreateIdForKey@@YAJPEAU_HAM_HOSTID_STORE@@PEAU_HAM_HOSTID_STORE_KEY@@PEA_K.c)
 *     ?HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z @ 0x180009308 (-HampHostIdStoreCheckAndSanitizeKey@@YAKPEAU_HAM_HOSTID_STORE_KEY@@@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800095C0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3@Z @ 0x180009B70 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSid@U_.c)
 *     CempLockTrackerClearForThread @ 0x180039F70 (CempLockTrackerClearForThread.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall HamRpcSrvFindOrCreateHostId(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  struct _RM_SERVICE_GLOBALS *v3; // rbx
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  unsigned __int64 v13; // [rsp+50h] [rbp-108h] BYREF
  int v14; // [rsp+58h] [rbp-100h] BYREF
  __int64 v15; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 v16; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-E8h] BYREF
  __int64 v18; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+110h] [rbp-48h] BYREF

  v3 = RmSvcGlobals;
  memset_0(TlsValue, 0, 0x88uLL);
  CempLockTrackerSetForThread(HampLockTrackerId, TlsValue);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 0x40) != 0 && (qword_1800DC230 & 0x40) == qword_1800DC230 )
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800DC218, (int)&dword_1800BFA05, 0, 0, 2u, &v20);
  v6 = -1LL;
  v13 = -1LL;
  if ( HampHostIdStoreCheckAndSanitizeKey((struct _HAM_HOSTID_STORE_KEY *)a2) )
  {
    v7 = HampHostIdStoreFindOrCreateIdForKey(
           (struct _RM_SERVICE_GLOBALS *)((char *)v3 + 2824),
           (struct _HAM_HOSTID_STORE_KEY *)a2,
           &v13);
    v6 = v13;
    v8 = v7;
    if ( v7 >= 0 )
    {
      *a3 = v13;
      v8 = 0;
    }
  }
  else
  {
    v8 = -1073741585;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800DC218 > 4 && (qword_1800DC228 & 8) != 0 && (qword_1800DC230 & 8) == qword_1800DC230 )
  {
    v14 = *(_DWORD *)(a2 + 532);
    v15 = a2 + 464;
    v17 = a2 + 536;
    v16 = v6;
    v18 = a2;
    LODWORD(v13) = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_1800BE7CC,
      v10,
      v11,
      (__int64)&v13,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14);
  }
  return v8;
}
