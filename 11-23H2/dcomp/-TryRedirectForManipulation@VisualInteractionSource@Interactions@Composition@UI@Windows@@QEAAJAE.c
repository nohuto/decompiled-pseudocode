/*
 * XREFs of ?TryRedirectForManipulation@VisualInteractionSource@Interactions@Composition@UI@Windows@@QEAAJAEBUtagPOINTER_INFO@@@Z @ 0x18011E4FC
 * Callers:
 *     ?TryRedirectForManipulation@Interop@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJAEBUtagPOINTER_INFO@@@Z @ 0x18011E470 (-TryRedirectForManipulation@Interop@VisualInteractionSource@Interactions@Composition@UI@Windows@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E4E88 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@Z @ 0x18015327C (-CaptureManipulationInCompositor@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJI_K@.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::VisualInteractionSource::TryRedirectForManipulation(
        Windows::UI::Composition::Interactions::VisualInteractionSource *this,
        const struct tagPOINTER_INFO *a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // r11
  int v7; // eax
  const char *v8; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)(*(_DWORD *)a2 - 2) > 1 )
  {
    v4 = -2147024809;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      (void *)0x41F,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)0x80070057LL,
      (int)"Invalid PointerDeviceType specified. Touch or Pen is expected.",
      v8);
    return v4;
  }
  v6 = *((_QWORD *)this + 34);
  if ( !v6 )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x422,
             (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
             a4);
  v7 = Windows::UI::Composition::CompositionPointerEventRouter::CaptureManipulationInCompositor(
         *((Windows::UI::Composition::CompositionPointerEventRouter **)this + 30),
         *((_DWORD *)a2 + 1),
         *((_QWORD *)this + 35) * (*((_QWORD *)a2 + 10) % v6) / v6
       + *((_QWORD *)this + 35) * (*((_QWORD *)a2 + 10) / v6));
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x424,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositioninteractionsource.cpp",
      (const char *)(unsigned int)v7);
    return v4;
  }
  return 0LL;
}
