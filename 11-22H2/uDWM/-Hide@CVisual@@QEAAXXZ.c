/*
 * XREFs of ?Hide@CVisual@@QEAAXXZ @ 0x18005660C
 * Callers:
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18001D34C (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x18002B800 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180030C60 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180034E90 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D374 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800CDFE0 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::Hide(CVisual *this)
{
  if ( !*((_DWORD *)this + 24) )
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 256LL);
  ++*((_DWORD *)this + 24);
}
