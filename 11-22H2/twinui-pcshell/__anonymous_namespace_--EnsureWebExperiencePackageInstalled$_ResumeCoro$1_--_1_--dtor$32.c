/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$32 @ 0x18023A354
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1802E79A0 (--1-$notify_awaiter@V-$duration@_JU-$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::dtor_32(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 416) = *(_QWORD *)(a2 + 104) + 744LL;
  return winrt::impl::notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>::~notify_awaiter<std::chrono::duration<__int64,std::ratio<1,1>>>(*(_QWORD *)(a2 + 416));
}
