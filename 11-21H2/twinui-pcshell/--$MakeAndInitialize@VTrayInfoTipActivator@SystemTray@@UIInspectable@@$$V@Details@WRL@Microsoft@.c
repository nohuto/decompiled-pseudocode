/*
 * XREFs of ??$MakeAndInitialize@VTrayInfoTipActivator@SystemTray@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x1801545B0
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1801545A0 (-ActivateInstance@-$SimpleActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ??0TrayInfoTipActivator@SystemTray@@QEAA@XZ @ 0x180154690 (--0TrayInfoTipActivator@SystemTray@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivator@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180156E60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivato.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022A46C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakRefe_ea_18022A46C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipActivator,IInspectable,>(
        __int64 *a1)
{
  SystemTray::TrayInfoTipActivator *v2; // rax
  __int64 v3; // rbx
  _DWORD *v4; // rcx
  _DWORD *v5; // r9
  _DWORD *v6; // rcx
  __int64 v7; // r9
  int CanCastTo; // edi

  *a1 = 0LL;
  v2 = (SystemTray::TrayInfoTipActivator *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return (unsigned int)-2147024882;
  v3 = SystemTray::TrayInfoTipActivator::TrayInfoTipActivator(v2);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v4, v5) )
  {
    *a1 = v3;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    CanCastTo = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, &GUID_6152e266_8805_4b1e_9fc9_4df263e44e8b) )
    {
      *a1 = v3;
      CanCastTo = 0;
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
      goto LABEL_7;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::CanCastTo(
                  v3 + 8,
                  v7,
                  a1);
    if ( CanCastTo >= 0 )
      goto LABEL_6;
  }
LABEL_7:
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::Release(v3);
  return (unsigned int)CanCastTo;
}
