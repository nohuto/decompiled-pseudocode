/*
 * XREFs of ??_EXamlLauncher@@UEAAPEAXI@Z @ 0x18019ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XamlLauncher@@UEAA@XZ @ 0x18019ED1C (--1XamlLauncher@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

XamlLauncher *__fastcall XamlLauncher::`vector deleting destructor'(XamlLauncher *this, char a2)
{
  XamlLauncher::~XamlLauncher(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x200uLL);
  return this;
}
