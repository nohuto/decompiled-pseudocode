/*
 * XREFs of ?Destroy@CommitCompletionWaiter@Composition@UI@Windows@@UEAAXXZ @ 0x180086C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ContextEventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x180009BF0 (-Destroy@-$ContextEventSource@UIAsyncActionCompletedHandler@Foundation@Windows@@U-$InvokeModeOpt.c)
 */

void __fastcall Windows::UI::Composition::CommitCompletionWaiter::Destroy(
        Windows::UI::Composition::CommitCompletionWaiter *this)
{
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
    (RTL_SRWLOCK *)this + 23,
    *((_QWORD *)this + 3));
  Windows::UI::Composition::CompositionObject::Destroy(this);
}
