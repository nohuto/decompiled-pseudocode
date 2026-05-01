/*
 * XREFs of ??_EXamlExplorerHostShellComponent@@UEAAPEAXI@Z @ 0x18041D2FC
 * Callers:
 *     ??_EXamlExplorerHostShellComponent@@WDA@EAAPEAXI@Z @ 0x1801FD210 (--_EXamlExplorerHostShellComponent@@WDA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ??1XamlExplorerHostShellComponent@@UEAA@XZ @ 0x18041D060 (--1XamlExplorerHostShellComponent@@UEAA@XZ.c)
 */

XamlExplorerHostShellComponent *__fastcall XamlExplorerHostShellComponent::`vector deleting destructor'(
        XamlExplorerHostShellComponent *this,
        char a2)
{
  XamlExplorerHostShellComponent::~XamlExplorerHostShellComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
