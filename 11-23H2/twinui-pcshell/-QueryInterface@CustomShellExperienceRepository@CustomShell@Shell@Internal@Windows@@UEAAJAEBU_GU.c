/*
 * XREFs of ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E54E0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180293550 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23.c)
 *     ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180293570 (-QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WCI@EAAJAEBU.c)
 *     ?QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180293590 (-QueryInterface@CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@WDA@EAAJAEBU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803E5250 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIInspectable@@VFtmBas.c)
 */

__int64 __fastcall Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::QueryInterface(
        Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *this,
        struct _GUID *a2,
        void **a3)
{
  _DWORD *v3; // rcx
  __int64 *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // r10
  int CanCastTo; // ebx
  _QWORD *v8; // r8

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::CanCastTo(
                  v5,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
  }
  return (unsigned int)CanCastTo;
}
