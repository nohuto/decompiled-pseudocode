/*
 * XREFs of ?CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@Z @ 0x18015327C
 * Callers:
 *     ?TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJAEBUtagPOINTER_INFO@@@Z @ 0x18011E4FC (-TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJAE.c)
 *     ?CaptureManipulationInCompositor@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJI_K@Z @ 0x180153330 (-CaptureManipulationInCompositor@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@U.c)
 *     ?TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPEAUIPointerPoint@Input@45@@Z @ 0x1801622A8 (-TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?InteractionCapturePointer@CDevice@DirectComposition@@QEAAJIII_K@Z @ 0x1800F2170 (-InteractionCapturePointer@CDevice@DirectComposition@@QEAAJIII_K@Z.c)
 *     ?TryRedirectForManipulation@DComp@InputTraceLogging@@SAXK_KJ@Z @ 0x180153FDC (-TryRedirectForManipulation@DComp@InputTraceLogging@@SAXK_KJ@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::CaptureManipulationInCompositor(
        Windows::UI::Composition::CompositionPointerEventRouter *this,
        unsigned int a2,
        unsigned __int64 a3)
{
  int Only; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly(this);
  if ( Only < 0 )
  {
    v7 = 204LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
    return (unsigned int)Only;
  }
  Only = DirectComposition::CDevice::InteractionCapturePointer(
           *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
           *((_DWORD *)this + 32),
           1,
           a2,
           a3);
  InputTraceLogging::DComp::TryRedirectForManipulation(a2, a3, Only);
  if ( Only != -2147024891 && Only < 0 )
  {
    v7 = 230LL;
    goto LABEL_3;
  }
  return 0LL;
}
