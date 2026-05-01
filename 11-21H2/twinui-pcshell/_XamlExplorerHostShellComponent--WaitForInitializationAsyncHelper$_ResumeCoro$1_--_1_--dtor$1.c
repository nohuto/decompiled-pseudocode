/*
 * XREFs of _XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801A9606
 * Callers:
 *     <none>
 * Callees:
 *     ??1awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAA@XZ @ 0x18017AD28 (--1awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@chrono.c)
 */

void __fastcall XamlExplorerHostShellComponent::WaitForInitializationAsyncHelper__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 96) + 24LL;
  `winrt::resume_on_signal'::`2'::awaitable::~awaitable(*(_QWORD *)(a2 + 48));
}
