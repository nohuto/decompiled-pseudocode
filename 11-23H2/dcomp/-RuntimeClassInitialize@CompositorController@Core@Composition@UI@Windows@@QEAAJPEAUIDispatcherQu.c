/*
 * XREFs of ?RuntimeClassInitialize@CompositorController@Core@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@@Z @ 0x18003C96C
 * Callers:
 *     ??$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositorController@Core@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@7@$$QEAPEAUICoreWindow@467@@Z @ 0x18003C858 (--$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQ.c)
 *     ??$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQueue@System@5@AEAPEAUICoreWindow@245@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositorController@Core@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@7@AEAPEAUICoreWindow@467@@Z @ 0x18012C980 (--$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEA_ea_18012C980.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4@AEAPEAUICoreWindow@Core@34@$$TPEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@AEAPEAUIDispatcherQueue@System@6@AEAPEAUICoreWindow@Core@56@$$QEA$$T$$QEAPEAVCompositorController@Core@456@$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003CAC0 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@AEAPEAUIDispatcherQueue@System@4.c)
 *     ?RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z @ 0x180058910 (-RuntimeClassInitialize@ContextRuntimeClass@WRL2@Microsoft@@QEAAJPEAVContextSession@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::Core::CompositorController::RuntimeClassInitialize(
        Windows::UI::Composition::Core::CompositorController *this,
        struct Windows::System::IDispatcherQueue *a2,
        struct Windows::UI::Core::ICoreWindow *a3)
{
  struct Microsoft::WRL2::ContextSession **v3; // rsi
  int v5; // ebx
  __int64 v7; // rdx
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v10; // [rsp+60h] [rbp+8h] BYREF
  struct Windows::System::IDispatcherQueue *v11; // [rsp+68h] [rbp+10h] BYREF
  struct Windows::UI::Core::ICoreWindow *v12; // [rsp+70h] [rbp+18h] BYREF
  Windows::UI::Composition::Core::CompositorController *v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  v8 = 0LL;
  v3 = (struct Microsoft::WRL2::ContextSession **)((char *)this + 72);
  v13 = this;
  v10 = 1;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease((char *)this + 72);
  v5 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Compositor,Windows::UI::Composition::Compositor,Windows::System::IDispatcherQueue * &,Windows::UI::Core::ICoreWindow * &,std::nullptr_t,Windows::UI::Composition::Core::CompositorController *,enum Windows::UI::Composition::CompositorCommon::CreationFlags>(
         (_DWORD)v3,
         (unsigned int)&v11,
         (unsigned int)&v12,
         (unsigned int)&v8,
         (__int64)&v13,
         (__int64)&v10);
  if ( v5 < 0 )
  {
    v7 = 84LL;
  }
  else
  {
    v5 = Microsoft::WRL2::ContextRuntimeClass::RuntimeClassInitialize(this, *v3);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 86LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositorcontroller.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
