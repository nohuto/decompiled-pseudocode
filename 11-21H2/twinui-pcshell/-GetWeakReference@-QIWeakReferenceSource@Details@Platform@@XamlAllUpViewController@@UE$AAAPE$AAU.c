/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180030CB0
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180030C70 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferenceSource@Deta.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WCI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x180202BA0 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WCI@E$AAAPE$.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WKA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x180202BC0 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAllUpViewController@@WKA@E$AAAPE$.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAllUpViewController__UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 128));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
