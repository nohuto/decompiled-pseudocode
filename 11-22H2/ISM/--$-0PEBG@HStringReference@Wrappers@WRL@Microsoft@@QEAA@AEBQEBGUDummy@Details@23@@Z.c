/*
 * XREFs of ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800D0DF8
 * Callers:
 *     ??$GetActivationFactory@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@@wil@@YA?AV?$com_ptr_t@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800D0E68 (--$GetActivationFactory@UIPerceptionTimestampHelperStaticsInternal@Internal@Perception@Windows@@.c)
 *     ??$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@@wil@@YA?AV?$com_ptr_t@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800DFB10 (--$GetActivationFactory@UIHolographicDisplayStaticsInternal@Internal@Holographic@Graphics@Window.c)
 *     ??$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA?AV?$com_ptr_t@UIDispatcherQueueControllerStatics@System@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180184890 (--$GetActivationFactory@UIDispatcherQueueControllerStatics@System@Windows@@@wil@@YA-AV-$com_ptr_.c)
 *     ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x180199EB4 (-TraceOperationStart@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAU-$IVector@PEAUHSTRING__@.c)
 *     ?TraceOperationStart@?$AsyncBase@U?$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundation@Windows@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x180199F90 (-TraceOperationStart@-$AsyncBase@U-$IAsyncOperationCompletedHandler@PEAUIPropertyValue@Foundatio.c)
 *     ?TraceOperationStart@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?SetAllConstantsForInputTypeToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x18019A06C (-TraceOperationStart@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@.c)
 *     ?TraceOperationStart@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?SetConstantAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x18019A148 (-TraceOperationStart@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@_ea_18019A148.c)
 *     ?TraceOperationStart@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?SetConstantToDefaultAsyncCasualityName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXXZ @ 0x18019A224 (-TraceOperationStart@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@_ea_18019A224.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x1800D0F98 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800D0FBC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800D1000 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *a1,
        const WCHAR **a2,
        unsigned int a3)
{
  unsigned __int64 v4; // rbx
  const WCHAR *v5; // rsi
  unsigned int v6; // eax

  a1[1].Reserved.Reserved1 = 0LL;
  v4 = -1LL;
  v5 = *a2;
  do
    ++v4;
  while ( v5[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, (int)a2, a3);
    JUMPOUT(0x1800D0E60LL);
  }
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v4);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(a1, v5, v6, v4);
  return a1;
}
