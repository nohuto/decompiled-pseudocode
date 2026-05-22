/*
 * XREFs of ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC
 * Callers:
 *     ?SetDefaultInteraction@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z @ 0x18006D840 (-SetDefaultInteraction@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z.c)
 *     ?CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@Z @ 0x18015327C (-CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@.c)
 *     ?CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4SystemManipulationMode@@PEAPEAUICompositionManipulationPartner@234@@Z @ 0x18015344C (-CreateAndAttachManipulationTarget@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4.c)
 *     ?DetachManipulationTarget@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJXZ @ 0x1801535C0 (-DetachManipulationTarget@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJXZ.c)
 *     ?DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z @ 0x180153694 (-DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z.c)
 *     ?EnableFurtherProcessingForInput@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z @ 0x1801537A0 (-EnableFurtherProcessingForInput@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@U.c)
 *     ?EnableInputTransparency@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z @ 0x180153870 (-EnableInputTransparency@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z.c)
 *     ?EnablePalmRejection@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z @ 0x180153940 (-EnablePalmRejection@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z.c)
 *     ?SetMouseGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSITION_INTERACTION_TYPE_MOUSE@@@Z @ 0x180153B90 (-SetMouseGestures@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJW4DCOMPOSIT.c)
 *     ?SetMousewheelSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MousewheelGestures@Private@234@@Z @ 0x180153C6C (-SetMousewheelSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4MousewheelGe.c)
 *     ?SetPenSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4PenGestures@Private@234@II@Z @ 0x180153D9C (-SetPenSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4PenGestures@Private.c)
 *     ?SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4TouchGestures@Private@234@II@Z @ 0x180153F1C (-SetTouchSettings@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJW4TouchGestures@Pri.c)
 *     ?UpdateAllConfigs@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJW4Enum@InteractionProperty@@@Z @ 0x1801540B8 (-UpdateAllConfigs@CompositionPointerEventRouter@Composition@UI@Windows@@IEAAJW4Enum@InteractionP.c)
 * Callees:
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly(
        Windows::UI::Composition::CompositionPointerEventRouter *this)
{
  const char *v2; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (*((_BYTE *)this + 176) & 2) == 0 )
    return 0LL;
  wil::details::in1diag3::Return_HrMsg(
    retaddr,
    (void *)0x430,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
    (const char *)0x80070057LL,
    (int)"This shared interaction object is read only.",
    v2);
  return 2147942487LL;
}
