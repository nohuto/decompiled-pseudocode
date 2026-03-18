/*
 * XREFs of ?TraceLoggingAutoRotationStateEvent@@YAXXZ @ 0x1C007254C
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C0072BDC (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C0040AE0 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1C0041D94 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

void TraceLoggingAutoRotationStateEvent(void)
{
  int v0; // eax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1C0354098 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_1C0354098, 0x400000000000LL) )
    {
      v0 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)P + 16LL))(P);
      v6 = 0x1000000LL;
      v4 = v0;
      v5 = dword_1C035A5DC;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v1,
        (int)&unk_1C031CA7F,
        v2,
        v3,
        (__int64)&v6,
        (__int64)&v5,
        (__int64)&v4);
    }
  }
}
