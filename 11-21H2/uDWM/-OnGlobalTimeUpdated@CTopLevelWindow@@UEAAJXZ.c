/*
 * XREFs of ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x1800E5680
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001DB80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180101340 (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CTopLevelWindow::OnGlobalTimeUpdated(CTopLevelWindow *this)
{
  if ( (*((_BYTE *)this + 248) & 0x40) != 0 )
    CWindowIconic::OnGlobalTimeUpdated(*(CWindowIconic **)(*((_QWORD *)this + 94) + 488LL));
  if ( *((_DWORD *)this + 63) )
    CVisual::SetDirtyFlags(this, 0x800000);
  return 0LL;
}
