/*
 * XREFs of ?DisableOutputPrediction@CompositionPointerEventRouter@Composition@UI@Windows@@QEAAJH@Z @ 0x180153694
 * Callers:
 *     ?DisableOutputPrediction@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJ_N@Z @ 0x18011D880 (-DisableOutputPrediction@Test@VisualInteractionSource@Interactions@Composition@UI@Windows@@UEAAJ.c)
 *     ?DisableOutputPrediction@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z @ 0x180153710 (-DisableOutputPrediction@Partner@CompositionPointerEventRouter@Composition@UI@Windows@@UEAAJH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ @ 0x18006D8DC (-EnsureNotReadOnly@CompositionPointerEventRouter@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z @ 0x1800707B0 (-ResourceSetIntegerProperty@CDevice@DirectComposition@@QEAAXII_J@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionPointerEventRouter::DisableOutputPrediction(
        Windows::UI::Composition::CompositionPointerEventRouter *this,
        int a2)
{
  __int64 v2; // rsi
  int Only; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  Only = Windows::UI::Composition::CompositionPointerEventRouter::EnsureNotReadOnly(this);
  v5 = Only;
  if ( Only >= 0 )
  {
    DirectComposition::CDevice::ResourceSetIntegerProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      15,
      v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x291,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtpointereventrouter.cpp",
      (const char *)(unsigned int)Only);
    return v5;
  }
}
