/*
 * XREFs of ??1CompositorController@Core@Composition@UI@Windows@@UEAA@XZ @ 0x180010194
 * Callers:
 *     ??_GCompositorController@Core@Composition@UI@Windows@@UEAAPEAXI@Z @ 0x180010150 (--_GCompositorController@Core@Composition@UI@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAA@XZ @ 0x18000C7E8 (--1-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windo.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Core::CompositorController::~CompositorController(
        Windows::UI::Composition::Core::CompositorController *this)
{
  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::~ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>((_QWORD *)this + 10);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease((char *)this + 72);
  Microsoft::WRL2::ContextRuntimeClass::~ContextRuntimeClass(this);
}
