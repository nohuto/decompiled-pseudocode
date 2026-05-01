/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x180763ECC
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$CustomBox@VSize@Foundation@Windows@@@23@WCA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1802ADF70 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$CustomBox@VSize@Foundation@Windows@.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$WriteOnlyArray@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@WBI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x1802AFB80 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$WriteOnlyArray@PE$AAUISwitchItemCon.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$CustomBox@VSize@Foundation@Windows@@@23@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180766EF4 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_180766EF4.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform____WriteOnlyArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_3_UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi

  v1 = __abi_winrt_ptr_ctor(*(_QWORD *)(a1 + 56));
  v2 = __abi_winrt_ptr_ctor(v1);
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  return v2;
}
