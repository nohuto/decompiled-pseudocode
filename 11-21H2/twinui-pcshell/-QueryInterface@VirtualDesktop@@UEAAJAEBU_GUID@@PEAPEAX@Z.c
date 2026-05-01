/*
 * XREFs of ?QueryInterface@VirtualDesktop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DA8B0
 * Callers:
 *     ?QueryInterface@VirtualDesktop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206EC0 (-QueryInterface@VirtualDesktop@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206EE0 (-QueryInterface@VirtualDesktop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206F00 (-QueryInterface@VirtualDesktop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180206F20 (-QueryInterface@VirtualDesktop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopInternal@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800DAA74 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIVirtualDesktopInterna.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktop::QueryInterface(VirtualDesktop *this, struct _GUID *a2, void **a3)
{
  _DWORD *v4; // rcx
  void *v5; // r8
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  char *v8; // r8
  _DWORD *v9; // rcx
  __int64 v10; // r9
  int CanCastTo; // ebx

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *a3 = v5;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_ec6e8d5a_3efb_5952_b98a_c11f3376f828)
    || InlineIsEqualGUID(v7, &_uuidof__AUIWeakReferenceSource_Details_Platform__)
    || InlineIsEqualGUID(v9, &GUID_cd403e52_deed_4c13_b437_b98380f2b1e8) )
  {
    *a3 = v8;
    CanCastTo = 0;
    goto LABEL_7;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IVirtualDesktopInternal,Microsoft::WRL::FtmBase>::CanCastTo(
                v8 + 8,
                v10,
                a3);
  if ( CanCastTo >= 0 )
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)CanCastTo;
}
