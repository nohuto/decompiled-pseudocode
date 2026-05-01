/*
 * XREFs of ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x180082B00
 * Callers:
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180043430 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333@Z @ 0x18006EDB8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 */

void __fastcall ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
        ExecutionModel::ResourceManager *this,
        unsigned __int64 a2,
        struct ExecutionModel::BaseResourceSet *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  struct ExecutionModel::BaseResourceSet *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r11
  __int64 v12[3]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+78h] [rbp+10h] BYREF
  struct ExecutionModel::BaseResourceSet *v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  v15 = a3;
  v3 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 6) += a2;
  if ( (*(_BYTE *)(v3 + 1272) & 4) == 0 )
  {
    v4 = *(_QWORD *)(v3 + 128);
    v5 = v4;
    if ( a2 < v4 )
      v5 = a2;
    *(_QWORD *)(v3 + 128) = v4 - v5;
    *((_QWORD *)this + 7) += a2 - v5;
    v6 = (struct ExecutionModel::BaseResourceSet *)*((_QWORD *)this + 7);
    if ( (unsigned int)dword_1800DB1E0 > 4 && tlgKeywordOn((__int64)&dword_1800DB1E0, 1LL) )
    {
      v13 = *(_QWORD *)(v9 + 128);
      v15 = v6;
      v14 = v11;
      v16 = v10;
      v12[0] = v8;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v7,
        byte_1800C32FC,
        v8,
        v9,
        (__int64)v12,
        (__int64)&v16,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v15);
    }
  }
}
