/*
 * XREFs of ?ActivateInstance@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18003C560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@$$T$$TW4CreationFlags@CompositorCommon@234@@Details@WRL2@Microsoft@@YAJPEAPEAVCompositor@Composition@UI@Windows@@$$QEAPEAUIDispatcherQueue@System@6@$$QEAPEAUICoreWindow@Core@56@$$QEA$$T3$$QEAW4CreationFlags@CompositorCommon@456@@Z @ 0x18003C6E8 (--$MakeAndInitialize2@VCompositor@Composition@UI@Windows@@V1234@PEAUIDispatcherQueue@System@4@PE.c)
 *     ?GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z @ 0x18003D8D8 (-GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z.c)
 *     ?GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@4@@Z @ 0x18003DADC (-GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositorFactory::ActivateInstance(
        Windows::UI::Composition::CompositorFactory *this,
        struct IInspectable **a2)
{
  int CurrentDispatcherQueue; // eax
  unsigned int v4; // ebx
  int CurrentCoreWindow; // eax
  int v6; // eax
  __int64 v7; // rax
  struct Windows::System::IDispatcherQueue *v9; // [rsp+30h] [rbp-30h] BYREF
  int v10[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h] BYREF
  struct Windows::UI::Core::ICoreWindow *v12; // [rsp+48h] [rbp-18h] BYREF
  struct Windows::System::IDispatcherQueue *v13; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v15; // [rsp+88h] [rbp+28h] BYREF
  __int64 v16; // [rsp+90h] [rbp+30h] BYREF
  struct Windows::UI::Core::ICoreWindow *v17; // [rsp+98h] [rbp+38h] BYREF

  *a2 = 0LL;
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  CurrentDispatcherQueue = Windows::UI::Composition::CoreHelper::GetCurrentDispatcherQueue(&v9);
  v4 = CurrentDispatcherQueue;
  if ( CurrentDispatcherQueue < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22D3,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)CurrentDispatcherQueue);
    goto LABEL_5;
  }
  v17 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  CurrentCoreWindow = Windows::UI::Composition::CoreHelper::GetCurrentCoreWindow(&v17);
  v4 = CurrentCoreWindow;
  if ( CurrentCoreWindow < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22D6,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)CurrentCoreWindow);
LABEL_9:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
    goto LABEL_5;
  }
  v16 = 0LL;
  *(_QWORD *)v10 = 0LL;
  v11 = 0LL;
  v12 = v17;
  v13 = v9;
  v15 = 1;
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(&v16);
  v6 = Microsoft::WRL2::Details::MakeAndInitialize2<Windows::UI::Composition::Compositor,Windows::UI::Composition::Compositor,Windows::System::IDispatcherQueue *,Windows::UI::Core::ICoreWindow *,std::nullptr_t,std::nullptr_t,enum Windows::UI::Composition::CompositorCommon::CreationFlags>(
         (unsigned int)&v16,
         (unsigned int)&v13,
         (unsigned int)&v12,
         (unsigned int)&v11,
         (__int64)v10,
         (__int64)&v15);
  v4 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22DF,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositor.cpp",
      (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(&v16);
    goto LABEL_9;
  }
  v7 = v16;
  v16 = 0LL;
  *a2 = (struct IInspectable *)((v7 + 1080) & -(__int64)(v7 != 0));
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease(&v16);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
  v4 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v9);
  return v4;
}
