/*
 * XREFs of ?SetApplicationView@CClassicWindow@@UEAAXPEAUIApplicationView@@@Z @ 0x1801712C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CClassicWindow::SetApplicationView(CClassicWindow *this, struct IApplicationView *a2)
{
  Microsoft::WRL::ComPtr<IApplicationView>::operator=((char *)this + 80, a2);
}
