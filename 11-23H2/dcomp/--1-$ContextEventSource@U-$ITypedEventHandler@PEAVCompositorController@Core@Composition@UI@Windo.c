/*
 * XREFs of ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x18000C7E8
 * Callers:
 *     ??1CompositionIsland@Composition@UI@Windows@@UEAA@XZ @ 0x18000C708 (--1CompositionIsland@Composition@UI@Windows@@UEAA@XZ.c)
 *     ??1CompositorController@Core@Composition@UI@Windows@@UEAA@XZ @ 0x180010194 (--1CompositorController@Core@Composition@UI@Windows@@UEAA@XZ.c)
 *     ?FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ @ 0x1800804CC (-FireCommitNeeded_Callback@CompositorController@Core@Composition@UI@Windows@@QEAAXXZ.c)
 *     ??_ECommitCompletionWaiter@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180088DB0 (--_ECommitCompletionWaiter@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 *     ??1CompositionGraphicsDevice@Composition@UI@Windows@@UEAA@XZ @ 0x18008B924 (--1CompositionGraphicsDevice@Composition@UI@Windows@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>(
        _QWORD *a1)
{
  if ( *a1 )
    RaiseFailFastException(0LL, 0LL, 0);
  if ( *a1 )
  {
    *a1 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release();
  }
}
