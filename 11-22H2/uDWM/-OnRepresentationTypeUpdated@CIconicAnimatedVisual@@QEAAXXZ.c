/*
 * XREFs of ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800C25C0
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C4774 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CIconicAnimatedVisual::OnRepresentationTypeUpdated(CIconicAnimatedVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  (*(void (__fastcall **)(CIconicAnimatedVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 128LL);
  v2 = (CBaseObject *)*((_QWORD *)this + 39);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 39) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 43) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 37) = 0LL;
  }
  (*(void (__fastcall **)(CIconicAnimatedVisual *))(*(_QWORD *)this + 64LL))(this);
}
