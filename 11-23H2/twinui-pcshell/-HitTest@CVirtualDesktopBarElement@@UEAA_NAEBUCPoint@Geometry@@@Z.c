/*
 * XREFs of ?HitTest@CVirtualDesktopBarElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x180581360
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z @ 0x1802E2D4C (-Contains@CRect@Geometry@@QEBA_NAEBUtagPOINT@@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x18057604C (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 */

char __fastcall CVirtualDesktopBarElement::HitTest(CVirtualDesktopBarElement *this, const struct Geometry::CPoint *a2)
{
  char v2; // bl
  char v4; // di
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  LODWORD(v7) = 0;
  v4 = 0;
  if ( Geometry::CRect::Contains((CVirtualDesktopBarElement *)((char *)this + 56), (const struct tagPOINT *)a2) )
  {
    if ( !*(_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92))
      || (v4 = 1, *CMultitaskingViewElementBase::_HitTestChildren(this, &v7, (__int64 *)a2)) )
    {
      v2 = 1;
    }
  }
  if ( (v4 & 1) != 0 )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v7);
  return v2;
}
