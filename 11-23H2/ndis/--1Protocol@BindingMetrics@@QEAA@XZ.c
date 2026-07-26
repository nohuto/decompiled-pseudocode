/*
 * XREFs of ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x1C00216E0
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x1C011398C (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x1C0023248 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     _tlgKeywordOn @ 0x1C0023508 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByRef@$0BA@@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByRef@$0BA@@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1C00D1904 (--$Write@U-$_tlgWrapBuffer@U_UNICODE_STRING@@@@U-$_tlgWrapperByRef@$0BA@@@U1@U-$_tl_ea_1C00D1904.c)
 */

void __fastcall BindingMetrics::Protocol::~Protocol(BindingMetrics::Protocol *this)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  int v4; // r9d
  unsigned __int64 v5; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+60h] [rbp+18h] BYREF
  const struct _UNICODE_STRING * near *v8; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 17) && (unsigned int)dword_1C00F41D8 > 4 )
  {
    if ( (unsigned __int8)tlgKeywordOn(&dword_1C00F41D8, 32LL) )
    {
      v2 = KStopwatch::Stop((BindingMetrics::Protocol *)((char *)this + 24));
      v3 = *((_QWORD *)this + 1);
      v5 = v2;
      v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 80LL) + 24LL);
      v7 = *(_QWORD *)this + 4008LL;
      v8 = (&BindingMetrics::BindingOperationNames)[*((unsigned __int8 *)this + 16)];
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByRef<16>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
        (unsigned int)&BindingMetrics::BindingOperationNames,
        (unsigned int)&unk_1C00DFB0B,
        v3,
        v4,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v5);
    }
  }
}
