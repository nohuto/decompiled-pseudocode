/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlBaseViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18043466C
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1801FF720 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@C.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x18043B6E0 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_18043B6E0.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlBaseViewController__UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 120));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
