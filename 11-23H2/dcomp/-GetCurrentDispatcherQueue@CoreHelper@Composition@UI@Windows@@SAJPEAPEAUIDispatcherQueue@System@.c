/*
 * XREFs of ?GetCurrentDispatcherQueue@CoreHelper@Composition@UI@Windows@@SAJPEAPEAUIDispatcherQueue@System@4@@Z @ 0x18003DADC
 * Callers:
 *     ?ActivateInstance@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18003C560 (-ActivateInstance@CompositorFactory@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z.c)
 *     ?ActivateInstance@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAPEAUIInspectable@@@Z @ 0x18003CA00 (-ActivateInstance@CompositorControllerFactory@Core@Composition@UI@Windows@@UEAAJPEAPEAUIInspecta.c)
 *     ?Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z @ 0x18003CC38 (-Create@CompositionCapabilities@Composition@UI@Windows@@SAJPEAPEAV1234@@Z.c)
 *     ?RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIInteropCompositorPartnerCallback@234@W4DeviceVersion@DirectComposition@@@Z @ 0x18003DA04 (-RuntimeClassInitialize@InteropCompositor@Composition@UI@Windows@@QEAAJPEAUIUnknown@@PEAUIIntero.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CoreHelper::GetCurrentDispatcherQueue(
        struct Windows::System::IDispatcherQueue **a1)
{
  int DispatcherQueueForCurrentThread; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a1 = 0LL;
  DispatcherQueueForCurrentThread = GetDispatcherQueueForCurrentThread();
  v2 = DispatcherQueueForCurrentThread;
  if ( DispatcherQueueForCurrentThread >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x54,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionroot.cpp",
    (const char *)(unsigned int)DispatcherQueueForCurrentThread);
  return v2;
}
