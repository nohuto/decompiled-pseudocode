/*
 * XREFs of ??_EXamlLauncher@@UEAAPEAXI@Z @ 0x180149850
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlLauncher@@UEAA@XZ @ 0x18014988C (--1XamlLauncher@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

XamlLauncher *__fastcall XamlLauncher::`vector deleting destructor'(XamlLauncher *this, char a2)
{
  XamlLauncher::~XamlLauncher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1D0uLL);
  return this;
}
