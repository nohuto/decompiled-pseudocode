/*
 * XREFs of ?HampStoreIdReferenceTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180040250
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180028870 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1800402E8 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall HampStoreIdReferenceTimeoutCallback(struct _TP_CALLBACK_INSTANCE *a1, void *a2, struct _TP_TIMER *a3)
{
  __int64 v3; // rcx

  if ( (unsigned int)dword_1800DB218 > 4 && tlgKeywordOn((__int64)&dword_1800DB218, 0x400000000008LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v3,
      &unk_1800C2DE9);
}
