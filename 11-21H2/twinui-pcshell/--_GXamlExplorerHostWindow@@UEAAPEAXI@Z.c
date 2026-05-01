/*
 * XREFs of ??_GXamlExplorerHostWindow@@UEAAPEAXI@Z @ 0x180420450
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1XamlExplorerHostWindow@@UEAA@XZ @ 0x180428944 (--1XamlExplorerHostWindow@@UEAA@XZ.c)
 */

XamlExplorerHostWindow *__fastcall XamlExplorerHostWindow::`scalar deleting destructor'(
        XamlExplorerHostWindow *this,
        char a2)
{
  XamlExplorerHostWindow::~XamlExplorerHostWindow(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
