/*
 * XREFs of ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180082BE4
 * Callers:
 *     ?ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ @ 0x18003AF20 (-ReleaseResourcesAndCheckPendingRequests@BaseResourceSet@ExecutionModel@@IEAAXXZ.c)
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180043430 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     ?CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x1800107B0 (-CheckPendingInternalResourceRequestsAsync@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x18006EDB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall ExecutionModel::ResourceManager::ReplenishIoCounterPool(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v12[6]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v13; // [rsp+90h] [rbp+8h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v2 = *((_QWORD *)this + 4);
  if ( (*(_BYTE *)(v2 + 1272) & 4) == 0 )
  {
    v5 = *((_QWORD *)this + 7);
    v6 = a2;
    if ( v5 < a2 )
      v6 = *((_QWORD *)this + 7);
    v7 = a2 - v6;
    *((_QWORD *)this + 7) = v5 - v6;
    *(_QWORD *)(v2 + 128) += a2 - v6;
    if ( a2 != v6 )
      ExecutionModel::ResourceManager::CheckPendingInternalResourceRequestsAsync(this);
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v13 = *((_QWORD *)this + 7);
      v14 = *(_QWORD *)(v2 + 128);
      v15 = v6;
      v11 = v7;
      v12[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v8,
        byte_1800C351F,
        v9,
        v10,
        (__int64)v12,
        (__int64)&v11,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
}
