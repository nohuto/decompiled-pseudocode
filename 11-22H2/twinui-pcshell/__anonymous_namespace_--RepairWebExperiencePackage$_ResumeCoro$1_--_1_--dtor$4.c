/*
 * XREFs of __anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1_::_1_::dtor$4 @ 0x180241A0B
 * Callers:
 *     <none>
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

void __fastcall _anonymous_namespace_::RepairWebExperiencePackage__ResumeCoro_1_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 144) + 88LL;
  winrt::hstring::~hstring(*(void ***)(a2 + 64));
}
