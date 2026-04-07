/*
 * XREFs of ?CleanupAnimationResources@CWindowIconic@@QEAAXXZ @ 0x180106788
 * Callers:
 *     ??1CWindowIconic@@MEAA@XZ @ 0x1801065F4 (--1CWindowIconic@@MEAA@XZ.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180107634 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x180038BB0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?StopIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x1800E6D28 (-StopIconicAnimation@CTopLevelWindow@@QEAAXXZ.c)
 */

void __fastcall CWindowIconic::CleanupAnimationResources(CWindowIconic *this)
{
  CTopLevelWindow *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  char v5; // al

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 11);
  if ( v2 )
    CTopLevelWindow::StopIconicAnimation(v2);
  CBitmapSourceArray::ReleaseContents((CWindowIconic *)((char *)this + 32), 1);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 8))-- == 1;
    v5 = CDesktopManager::s_fTimelineDirty;
    if ( v4 )
      v5 = 1;
    *((_QWORD *)this + 8) = 0LL;
    CDesktopManager::s_fTimelineDirty = v5;
  }
}
