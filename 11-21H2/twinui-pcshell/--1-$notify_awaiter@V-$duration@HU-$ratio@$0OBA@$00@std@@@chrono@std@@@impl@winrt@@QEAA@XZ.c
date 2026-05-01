/*
 * XREFs of ??1?$notify_awaiter@V?$duration@HU?$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1801C4664
 * Callers:
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$33 @ 0x1801C790E (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--dtor$33.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1801CDD84 (_winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_ResumeCoro$1_--.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<3600,1>>>::~notify_awaiter<std::chrono::duration<int,std::ratio<3600,1>>>(
        __int64 a1)
{
  `winrt::resume_after'::`2'::awaitable::~awaitable(a1);
}
