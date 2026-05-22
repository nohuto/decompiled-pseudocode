/*
 * XREFs of ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4@AEAPEAUICoreWindow@Core@34@$$TPEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@AEAPEAUIDispatcherQueue@System@6@AEAPEAUICoreWindow@Core@56@$$QEA$$T$$QEAPEAVCompositorController@Core@456@$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003CAC0
 * Callers:
 *     ?RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@@Z @ 0x18003C96C (-RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQu.c)
 * Callees:
 *     ?RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@PEAUIUnknown@@PEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001CFA4 (-RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PE.c)
 *     ?Attach@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositor@Composition@UI@Windows@@@Z @ 0x18003E140 (-Attach@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@QEAAXPEAVCompositor@Composi.c)
 *     ??0Compositor@Composition@UI@Windows@@QEAA@XZ @ 0x18004000C (--0Compositor@Composition@UI@Windows@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A1230 (--1-$MakeAllocator@VInjectionAnimation@Composition@UI@Windows@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Compositor,Windows::UI::Composition::Compositor,Windows::System::IDispatcherQueue * &,Windows::UI::Core::ICoreWindow * &,std::nullptr_t,Windows::UI::Composition::Core::CompositorController *,enum Windows::UI::Composition::CompositorCommon::CreationFlags>(
        _QWORD *a1,
        __int64 *a2,
        __int64 (__fastcall ****a3)(_QWORD, GUID *, struct IUnknown **),
        __int64 *a4,
        __int64 *a5,
        int *a6)
{
  void *v10; // rax
  Windows::UI::Composition::Compositor *v11; // rax
  _QWORD *v12; // rsi
  int v13; // ebx
  void *v15; // [rsp+40h] [rbp-28h] BYREF
  _QWORD *v16; // [rsp+70h] [rbp+8h] BYREF

  *a1 = 0LL;
  v16 = 0LL;
  v10 = DefaultHeap::Alloc(0x4B0uLL);
  v15 = v10;
  if ( !v10 )
  {
    v13 = -2147024882;
LABEL_8:
    Microsoft::WRL::Details::MakeAllocator<Windows::UI::Composition::InjectionAnimation>::~MakeAllocator<Windows::UI::Composition::InjectionAnimation>(&v15);
    goto LABEL_6;
  }
  v11 = (Windows::UI::Composition::Compositor *)memset_0(v10, 0, 0x4B0uLL);
  if ( v11 )
    v11 = (Windows::UI::Composition::Compositor *)Windows::UI::Composition::Compositor::Compositor(v11);
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::Attach(&v16, v11);
  v12 = v16;
  v15 = 0LL;
  v16[1] = &Windows::UI::Composition::Compositor::s_InterfaceType;
  v13 = Windows::UI::Composition::Compositor::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
  if ( v13 < 0 )
    goto LABEL_8;
  v16 = 0LL;
  v13 = 0;
  *a1 = v12;
LABEL_6:
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(&v16);
  return (unsigned int)v13;
}
