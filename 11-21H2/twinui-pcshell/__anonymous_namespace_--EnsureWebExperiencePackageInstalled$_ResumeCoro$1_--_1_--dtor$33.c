/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$33 @ 0x1801C790E
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$notify_awaiter@V?$duration@HU?$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ @ 0x1801C4664 (--1-$notify_awaiter@V-$duration@HU-$ratio@$0OBA@$00@std@@@chrono@std@@@impl@winrt@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::dtor_33(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 416) = *(_QWORD *)(a2 + 104) + 984LL;
  winrt::impl::notify_awaiter<std::chrono::duration<int,std::ratio<3600,1>>>::~notify_awaiter<std::chrono::duration<int,std::ratio<3600,1>>>(*(_QWORD *)(a2 + 416));
}
