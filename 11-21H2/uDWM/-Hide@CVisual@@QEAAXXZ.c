/*
 * XREFs of ?Hide@CVisual@@QEAAXXZ @ 0x180010F7C
 * Callers:
 *     ?OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180023F78 (-OnSourceConstantAlphaUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027570 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180029A50 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x180069AB0 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x1800C9A00 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CVisual::Hide(CVisual *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 24);
  if ( !v1 )
  {
    (*(void (__fastcall **)(CVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 256LL);
    v1 = *((_DWORD *)this + 24);
  }
  *((_DWORD *)this + 24) = v1 + 1;
}
