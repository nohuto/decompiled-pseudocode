/*
 * XREFs of ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YGXXZ @ 0x10003465
 * Callers:
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailureInfo@2@@Z @ 0x10003017 (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PB_W_NPA_WIPADIPAUFailu.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z @ 0x10003513 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AAEJPB_W_N_K@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CGJPB_W$$QAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PAXP6GXPAX@_E$1?CloseHandle@details@wil@@YGX0@ZU?$integral_constant@I$0A@@wistd@@PAXPAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PAPAV123@@Z @ 0x1000433D (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOptions@01@@Z @ 0x10004A27 (--$ReportFailure_Return@$00@details@wil@@YGXPAXIPBD110ABUResultStatus@01@PB_WW4ReportFailureOpti.c)
 *     ?LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailureInfo@2@@Z @ 0x100060EB (-LogFailure@details@wil@@YGXPAXIPBD110W4FailureType@2@ABUResultStatus@12@PBG_NPAGIPADIPAUFailure.c)
 * Callees:
 *     <none>
 */

void __stdcall __noreturn wil::details::in1diag3::_FailFastImmediate_Unexpected(wil::details::in1diag3 *this)
{
  __fastfail(7u);
}
