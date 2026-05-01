/*
 * XREFs of __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::dtor$15 @ 0x1801C76DC
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800FA3AC (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::EnsureWebExperiencePackageInstalled__ResumeCoro_1_::_1_::dtor_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  *(_QWORD *)(a2 + 352) = *(_QWORD *)(a2 + 104) + 392LL;
  winrt::hstring::~hstring(*(volatile signed __int32 ***)(a2 + 352), a2, a3, a4);
}
