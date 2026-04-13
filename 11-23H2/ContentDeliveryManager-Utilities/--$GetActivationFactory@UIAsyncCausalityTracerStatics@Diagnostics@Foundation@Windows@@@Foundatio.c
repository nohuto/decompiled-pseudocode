/*
 * XREFs of ??$GetActivationFactory@UIAsyncCausalityTracerStatics@Diagnostics@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIAsyncCausalityTracerStatics@Diagnostics@01@@Z @ 0x180026364
 * Callers:
 *     ?InitCausality@?$AsyncBase@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180037960 (-InitCausality@-$AsyncBase@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@VNil@Detail.c)
 *     Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&_anonymous_namespace_::StageOperationName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::InitCausality @ 0x180059BE0 (Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microso_ea_180059BE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Windows::Foundation::Diagnostics::IAsyncCausalityTracerStatics>(
        __int64 a1)
{
  return RoGetActivationFactory(a1, &GUID_50850b26_267e_451b_a890_ab6a370245ee, &Microsoft::WRL::gCausality);
}
