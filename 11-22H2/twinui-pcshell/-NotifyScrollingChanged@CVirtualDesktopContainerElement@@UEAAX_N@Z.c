/*
 * XREFs of ?NotifyScrollingChanged@CVirtualDesktopContainerElement@@UEAAX_N@Z @ 0x180592890
 * Callers:
 *     <none>
 * Callees:
 *     ??$VirtualDesktopScrollingChanged@AEA_NH@MultitaskingViewTelemetry@@SAXAEA_N$$QEAH@Z @ 0x180591138 (--$VirtualDesktopScrollingChanged@AEA_NH@MultitaskingViewTelemetry@@SAXAEA_N$$QEAH@Z.c)
 *     ?CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ @ 0x1805916B4 (-CalcMaxVisibleDesktopCount@CVirtualDesktopContainerElement@@IEAAHXZ.c)
 */

void __fastcall CVirtualDesktopContainerElement::NotifyScrollingChanged(CVirtualDesktopContainerElement *this, bool a2)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF
  bool v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = CVirtualDesktopContainerElement::CalcMaxVisibleDesktopCount((CVirtualDesktopContainerElement *)((char *)this - 224));
  MultitaskingViewTelemetry::VirtualDesktopScrollingChanged<bool &,int>(&v3, &v2);
}
