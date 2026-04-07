/*
 * XREFs of ?SetSuppressBorderUpdates@CTopLevelWindow@@QEAAX_N@Z @ 0x1800E6B94
 * Callers:
 *     ??1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800FABA8 (--1TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTransition@345@AEBURect@Foundation@Windows@5@@Z @ 0x1800FB460 (-StartAnimation@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAAXAEBW4ShellTr.c)
 * Callees:
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180037860 (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 */

void __fastcall CTopLevelWindow::SetSuppressBorderUpdates(CTopLevelWindow *this, char a2)
{
  int v2; // eax

  if ( *((_BYTE *)this + 864) != a2 )
  {
    *((_BYTE *)this + 864) = a2;
    if ( !a2 )
    {
      v2 = *((_DWORD *)this + 22);
      if ( (v2 & 0x100000) == 0 )
      {
        *((_DWORD *)this + 22) = v2 | 0x100000;
        CVisual::PropagateDirtyChildren(this);
      }
    }
  }
}
