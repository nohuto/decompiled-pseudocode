/*
 * XREFs of ??0Compositor@Composition@UI@Windows@@QEAA@XZ @ 0x18004000C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@6@$$QEAPEAUICoreWindow@Core@56@$$QEA$$T3$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003C6E8 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PE.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4@AEAPEAUICoreWindow@Core@34@$$TPEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@AEAPEAUIDispatcherQueue@System@6@AEAPEAUICoreWindow@Core@56@$$QEA$$T$$QEAPEAVCompositorController@Core@456@$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003CAC0 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4.c)
 *     ??0InteropCompositor@Composition@UI@Windows@@QEAA@XZ @ 0x18003DC70 (--0InteropCompositor@Composition@UI@Windows@@QEAA@XZ.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEA$$T111$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003E174 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@$$T$$T$$T$$TW4CreationFlags@Comp.c)
 * Callees:
 *     ??0CompositorCommon@Composition@UI@Windows@@IEAA@XZ @ 0x1800400D0 (--0CompositorCommon@Composition@UI@Windows@@IEAA@XZ.c)
 */

Windows::UI::Composition::Compositor *__fastcall Windows::UI::Composition::Compositor::Compositor(
        Windows::UI::Composition::Compositor *this)
{
  Windows::UI::Composition::CompositorCommon::CompositorCommon(this);
  *(_QWORD *)this = &Windows::UI::Composition::Compositor::`vftable'{for `Microsoft::WRL2::ContextSession'};
  *((_QWORD *)this + 148) = 0LL;
  *((_QWORD *)this + 149) = 0LL;
  *((_QWORD *)this + 19) = &Windows::UI::Composition::Compositor::`vftable'{for `DirectComposition::IDeviceOwner'};
  *((_QWORD *)this + 135) = &Windows::UI::Composition::Compositor::Api::`vftable';
  *((_QWORD *)this + 136) = &Windows::UI::Composition::Compositor::Api::`vftable'{for `Windows::UI::Composition::ICompositor3'};
  *((_QWORD *)this + 137) = &Windows::UI::Composition::Compositor::Api::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::ICompositorWithBlurredWallpaperBackdropBrush>'};
  *((_QWORD *)this + 139) = &Windows::UI::Composition::Compositor::Internal::`vftable';
  *((_QWORD *)this + 141) = &Windows::UI::Composition::Compositor::SystemOnly::`vftable'{for `Windows::UI::Composition::ICompositorInterop'};
  *((_QWORD *)this + 142) = &Windows::UI::Composition::Compositor::SystemOnly::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Desktop::ICompositorDesktopInterop,Windows::UI::Composition::ICompositorWithCompositionIslands,Windows::UI::Composition::Private::ICompositorForSystemPartner>'};
  *((_QWORD *)this + 143) = &Windows::UI::Composition::Compositor::SystemOnly::`vftable'{for `Windows::UI::Composition::ICompositorWithCompositionIslands'};
  *((_QWORD *)this + 144) = &Windows::UI::Composition::Compositor::SystemOnly::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::UI::Composition::Private::ICompositorForSystemPartner>'};
  *((_QWORD *)this + 146) = &Windows::UI::Composition::Compositor::CompositionTextures::`vftable';
  return this;
}
