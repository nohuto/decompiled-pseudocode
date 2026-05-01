/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUPMPolicyRetrievedInfo@@P6AJPEAU1@@Z$1?PolicyManager_FreeGetPolicyData@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800A3334
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::DashboardManager::IsWidgetDisabledByPolicy_::_1_::dtor$0 @ 0x18023FFF5 (_winrt--Windows--Internal--Shell--implementation--DashboardManager--IsWidgetDisabledByPolicy_--_.c)
 *     _CopilotButtonHelpers::GetCopilotHardwareKeyAppEnforcedByPolicy_::_1_::dtor$1 @ 0x1802629DC (_CopilotButtonHelpers--GetCopilotHardwareKeyAppEnforcedByPolicy_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<PMPolicyRetrievedInfo *,long (*)(PMPolicyRetrievedInfo *),&long PolicyManager_FreeGetPolicyData(PMPolicyRetrievedInfo *),wistd::integral_constant<unsigned __int64,0>,PMPolicyRetrievedInfo *,PMPolicyRetrievedInfo *,0,std::nullptr_t>>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return PolicyManager_FreeGetPolicyData(v1);
  return result;
}
