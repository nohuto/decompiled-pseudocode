/*
 * XREFs of ?IsEqualByView@CTaskWindow@@UEBA_NPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180068A00
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

bool __fastcall CTaskWindow::IsEqualByView(struct IUnknown **this, struct IUnknown *a2)
{
  return (unsigned int)SHIsSameObject(this[6], a2) != 0;
}
