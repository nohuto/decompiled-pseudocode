/*
 * XREFs of ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x180034B64
 * Callers:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x18001CE70 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C90 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180035D2C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180036450 (-OnSWRInvalidated@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z @ 0x1801003B0 (-SetDirtyFlags@UdwmBottomVisual@@UEAAXK@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::PropagateDirtyChildren(CVisual *this)
{
  __int64 i; // rbx

  for ( i = *((_QWORD *)this + 3); i && (*(_BYTE *)(i + 88) & 1) == 0; i = *(_QWORD *)(i + 24) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)i + 32LL))(i);
}
