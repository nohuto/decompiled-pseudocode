/*
 * XREFs of ?Destroy@CompositorController@Core@Composition@UI@Windows@@UEAAXXZ @ 0x18000F1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@?$ContextEventSource@U?$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL2@Microsoft@@QEAAXPEAVContextSession@23@@Z @ 0x18000F23C (-Destroy@-$ContextEventSource@U-$ITypedEventHandler@PEAVCompositorController@Core@Composition@UI.c)
 *     ?Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ @ 0x1800292C0 (-Dispose@ContextRuntimeClass@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::UI::Composition::Core::CompositorController::Destroy(
        Windows::UI::Composition::Core::CompositorController *this)
{
  Microsoft::WRL2::ContextRuntimeClass *v2; // rcx

  Microsoft::WRL2::ContextEventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Core::CompositorController *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Destroy(
    (char *)this + 80,
    *((_QWORD *)this + 3));
  v2 = (Microsoft::WRL2::ContextRuntimeClass *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    Microsoft::WRL2::ContextRuntimeClass::Dispose(v2);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease((char *)this + 72);
  }
  Microsoft::WRL2::ContextRuntimeClass::Destroy(this);
}
