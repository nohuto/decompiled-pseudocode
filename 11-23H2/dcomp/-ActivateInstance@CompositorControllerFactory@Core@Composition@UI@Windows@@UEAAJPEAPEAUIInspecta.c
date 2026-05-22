/*
 * XREFs of ?ActivateInstance@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18003CA00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQueue@System@5@PEAUICoreWindow@245@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositorController@Core@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@7@$$QEAPEAUICoreWindow@467@@Z @ 0x18003C858 (--$MakeAndInitialize2@VCompositorController@Core@Composition@UI@Windows@@V12345@PEAUIDispatcherQ.c)
 *     ?GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z @ 0x18003D8D8 (-GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z.c)
 *     ?GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@4@@Z @ 0x18003DADC (-GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 */

__int64 __fastcall Windows::UI::Composition::Core::CompositorControllerFactory::ActivateInstance(
        Windows::UI::Composition::Core::CompositorControllerFactory *this,
        struct IInspectable **a2)
{
  int CurrentDispatcherQueue; // eax
  unsigned int v4; // ebx
  int CurrentCoreWindow; // eax
  int v6; // eax
  struct Windows::UI::Core::ICoreWindow *v8; // [rsp+20h] [rbp-10h] BYREF
  struct Windows::System::IDispatcherQueue *v9; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct Windows::UI::Core::ICoreWindow *v11; // [rsp+58h] [rbp+28h] BYREF
  struct Windows::System::IDispatcherQueue *v12; // [rsp+60h] [rbp+30h] BYREF
  Windows::UI::Composition::Core::CompositorController *v13; // [rsp+68h] [rbp+38h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  CurrentDispatcherQueue = Windows::UI::Composition::CoreHelper::GetCurrentDispatcherQueue(&v12);
  v4 = CurrentDispatcherQueue;
  if ( CurrentDispatcherQueue < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositorcontroller.cpp",
      (const char *)(unsigned int)CurrentDispatcherQueue);
    goto LABEL_5;
  }
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  CurrentCoreWindow = Windows::UI::Composition::CoreHelper::GetCurrentCoreWindow(&v11);
  v4 = CurrentCoreWindow;
  if ( CurrentCoreWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x156,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositorcontroller.cpp",
      (const char *)(unsigned int)CurrentCoreWindow);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
    goto LABEL_5;
  }
  v13 = 0LL;
  v8 = v11;
  v9 = v12;
  v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Core::CompositorController,Windows::UI::Composition::Core::CompositorController,Windows::System::IDispatcherQueue *,Windows::UI::Core::ICoreWindow *>(
         &v13,
         &v9,
         &v8);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15C,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositorcontroller.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v13);
    goto LABEL_9;
  }
  *a2 = (struct IInspectable *)(((unsigned __int64)v13 + 40) & -(__int64)(v13 != 0LL));
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  v4 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return v4;
}
