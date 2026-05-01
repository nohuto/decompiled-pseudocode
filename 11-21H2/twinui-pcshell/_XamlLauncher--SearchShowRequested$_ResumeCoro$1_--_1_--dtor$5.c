/*
 * XREFs of _XamlLauncher::SearchShowRequested$_ResumeCoro$1_::_1_::dtor$5 @ 0x1801AC976
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180181DF4 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::SearchShowRequested__ResumeCoro_1_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 160) = *(_QWORD *)(a2 + 40) + 120LL;
  Microsoft::WRL::Wrappers::HStringReference::~HStringReference(*(Microsoft::WRL::Wrappers::HStringReference **)(a2 + 160));
}
