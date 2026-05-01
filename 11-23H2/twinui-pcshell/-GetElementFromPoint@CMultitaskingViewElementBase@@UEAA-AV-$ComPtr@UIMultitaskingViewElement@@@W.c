/*
 * XREFs of ?GetElementFromPoint@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x180574740
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1803BF370 (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x18057604C (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CMultitaskingViewElementBase::GetElementFromPoint(__int64 a1, __int64 *a2, __int64 *a3)
{
  _DWORD *v6; // rax
  int v7; // ecx
  __int64 *v8; // rax
  __int64 v10; // [rsp+28h] [rbp-8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+68h] [rbp+38h] BYREF

  v12 = (__int64)a2;
  *a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 112LL))(a1, a3) )
  {
    CMultitaskingViewElementBase::_HitTestChildren(a1, &v13, a3);
    if ( v13 )
    {
      v6 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 120LL))(a1, &v10);
      v11 = *a3;
      v7 = v6[1];
      LODWORD(v11) = *v6 + v11;
      HIDWORD(v11) += v7;
      v8 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v13 + 128LL))(
                        v13,
                        &v10,
                        &v11);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, v8);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    }
    if ( !*a2 )
    {
      v12 = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      v12 = *a2;
      *a2 = a1;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  }
  return a2;
}
