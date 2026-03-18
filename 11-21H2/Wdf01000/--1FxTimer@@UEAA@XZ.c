/*
 * XREFs of ??1FxTimer@@UEAA@XZ @ 0x1C00186F8
 * Callers:
 *     ??_EFxTimer@@UEAAPEAXI@Z @ 0x1C001B320 (--_EFxTimer@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0006180 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ??1MxTimer@@QEAA@XZ @ 0x1C0016E64 (--1MxTimer@@QEAA@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxTimer::~FxTimer(FxTimer *this, __int64 a2)
{
  bool v2; // zf
  unsigned int v4; // edx
  const void *_a1; // rax

  v2 = this->m_Object == 0LL;
  this->__vftable = (FxTimer_vtbl *)FxTimer::`vftable';
  if ( !v2 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(this->m_Globals, 2u, 0x12u, 0xAu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  MxTimer::~MxTimer(&this->m_Timer, a2);
  FxNonPagedObject::~FxNonPagedObject(this, v4);
}
