/*
 * XREFs of ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E6208
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18004B790 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x1800102FC (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x1800E5248 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StartIconicAnimation(CTopLevelWindow *this)
{
  char v2; // dl
  struct CVisual *v3; // rcx

  if ( (*((_BYTE *)this + 248) & 0x40) == 0 )
  {
    if ( !CTopLevelWindow::HasAnimation(this) )
    {
      CDesktopManager::RegisterForGlobalTimeChangeNotification(v3);
      v2 = *((_BYTE *)this + 248);
    }
    *((_BYTE *)this + 248) = v2 | 0x40;
  }
}
