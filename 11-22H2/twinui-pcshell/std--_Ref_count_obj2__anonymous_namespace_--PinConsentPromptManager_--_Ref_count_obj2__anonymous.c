/*
 * XREFs of std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager___ @ 0x180088D80
 * Callers:
 *     std::make_shared__anonymous_namespace_::PinConsentPromptManager_ @ 0x180088CD4 (std--make_shared__anonymous_namespace_--PinConsentPromptManager_.c)
 * Callees:
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x180084D70 (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1803BAF64 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall std::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager_::_Ref_count_obj2__anonymous_namespace_::PinConsentPromptManager___(
        __int64 a1)
{
  const struct _tlgProvider_t *v2; // rax
  int v3; // r9d
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = off_1807C9FC0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  v2 = PinManagerTelemetry::Provider(0LL);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      (_DWORD)v2,
      (unsigned int)&unk_18087859D,
      0,
      v3,
      (__int64)&v5);
  }
  return a1;
}
