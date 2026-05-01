/*
 * XREFs of ?IsEqualByView@CSnappedWindow@@UEBA_NPEAUIApplicationView@@@Z @ 0x1802E9A60
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CSnappedWindow::IsEqualByView(struct IUnknown **this, struct IUnknown *a2)
{
  return (unsigned int)SHIsSameObject(a2, this[4]) != 0;
}
