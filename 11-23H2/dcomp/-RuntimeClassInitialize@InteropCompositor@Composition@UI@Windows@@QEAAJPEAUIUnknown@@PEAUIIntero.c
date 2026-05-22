/*
 * XREFs of ?RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18003DA04
 * Callers:
 *     ??$MakeAndInitialize2@VInteropCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@234@@Details@WRL2@Microsoft@@YAJPEAPEAVInteropCompositor@Composition@UI@Windows@@AEAPEAUIUnknown@@AEAPEAUIInteropCompositorPartnerCallback@456@@Z @ 0x18003DBC4 (--$MakeAndInitialize2@VInteropCompositor@Composition@UI@Windows@@V1234@AEAPEAUIUnknown@@AEAPEAUI.c)
 *     ?RuntimeClassInitialize@InteropDwmCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@@Z @ 0x18015BCDC (-RuntimeClassInitialize@InteropDwmCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInt.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PEAUICoreWindow@Core@34@PEAUIUnknown@@PEAVCompositorController@8234@W4CreationFlags@CompositorCommon@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18001CFA4 (-RuntimeClassInitialize@Compositor@Composition@UI@Windows@@QEAAJPEAUIDispatcherQueue@System@4@PE.c)
 *     ?GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z @ 0x18003D8D8 (-GetCurrentCoreWindow@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUICoreWindow@Core@34@@Z.c)
 *     ?GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@4@@Z @ 0x18003DADC (-GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::RuntimeClassInitialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int CurrentDispatcherQueue; // eax
  unsigned int v7; // ebx
  int CurrentCoreWindow; // eax
  __int64 v10; // rdx
  struct Windows::UI::Core::ICoreWindow *v11; // [rsp+40h] [rbp-10h] BYREF
  struct Windows::System::IDispatcherQueue *v12; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  CurrentDispatcherQueue = Windows::UI::Composition::CoreHelper::GetCurrentDispatcherQueue(&v12);
  v7 = CurrentDispatcherQueue;
  if ( CurrentDispatcherQueue < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcompositor.cpp",
      (const char *)(unsigned int)CurrentDispatcherQueue);
    goto LABEL_5;
  }
  v11 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  CurrentCoreWindow = Windows::UI::Composition::CoreHelper::GetCurrentCoreWindow(&v11);
  v7 = CurrentCoreWindow;
  if ( CurrentCoreWindow < 0 )
  {
    v10 = 85LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtinteropcompositor.cpp",
      (const char *)(unsigned int)CurrentCoreWindow);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
    goto LABEL_5;
  }
  CurrentCoreWindow = Windows::UI::Composition::Compositor::RuntimeClassInitialize(
                        (_QWORD *)a1,
                        (__int64)v12,
                        (__int64 (__fastcall ***)(_QWORD, GUID *, struct IUnknown **))v11,
                        a2,
                        0LL,
                        0);
  v7 = CurrentCoreWindow;
  if ( CurrentCoreWindow < 0 )
  {
    v10 = 96LL;
    goto LABEL_9;
  }
  *(_DWORD *)(a1 + 32) |= 0x40u;
  *(_QWORD *)(a1 + 1280) = a3;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  v7 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v12);
  return v7;
}
