/*
 * XREFs of ?IsEqualByView@CSnappedWindow@@UEBA_NPEAUIApplicationView@@@Z @ 0x1805AB580
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CSnappedWindow::IsEqualByView(struct IUnknown **this, struct IUnknown *a2)
{
  return (unsigned int)SHIsSameObject(a2, this[4]) != 0;
}
