/*
 * XREFs of ?NotifyVisibleRectChanged@CSwitchItemGrid@@UEAAXAEBUtagRECT@@@Z @ 0x1804BF0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x18036F50C (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSwitchItemGrid::NotifyVisibleRectChanged(CSwitchItemGrid *this, const struct tagRECT *a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rdi
  Geometry::CRect *v6; // rax
  __int64 v7; // r11
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[16]; // [rsp+28h] [rbp-20h] BYREF

  v3 = (__int64 *)*((_QWORD *)this - 28);
  v4 = &v3[*((_QWORD *)this - 27)];
  while ( v3 != v4 )
  {
    v8 = *v3;
    v5 = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v8);
    v6 = (Geometry::CRect *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v5 + 88LL))(v5, v9);
    if ( Geometry::CRect::Intersects(v6, a2) )
      (*(void (__fastcall **)(__int64))(v7 + 136))(v5);
    else
      (*(void (__fastcall **)(__int64))(v7 + 144))(v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    ++v3;
  }
}
