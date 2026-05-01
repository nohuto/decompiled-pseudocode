/*
 * XREFs of _XamlLauncher::SearchShowRequested$_ResumeCoro$1_::_1_::dtor$6 @ 0x1802013A2
 * Callers:
 *     <none>
 * Callees:
 *     ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x1801BFB34 (--1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall XamlLauncher::SearchShowRequested__ResumeCoro_1_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40) + 128LL;
  Microsoft::WRL::Wrappers::HStringReference::~HStringReference(*(Microsoft::WRL::Wrappers::HStringReference **)(a2 + 152));
}
