/*
 * XREFs of ??$MakeAndInitialize@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@UIInspectable@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@@Z @ 0x180316154
 * Callers:
 *     ?ActivateInstance@?$SimpleActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@$0A@@WRL@Microsoft@@UEAAJPEAPEAUIInspectable@@@Z @ 0x1803163C0 (-ActivateInstance@-$SimpleActivationFactory@VCustomShellExperienceRepository@CustomShell@Shell@I.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802E6D20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmB_ea_1802E6D20.c)
 *     ??0CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@QEAA@XZ @ 0x180316230 (--0CustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIInspectable@@VFtmBase@23@UIWeakReferenceSource@@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1803163D0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIInspectable@@VFtmBas.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository,IInspectable,>(
        __int64 *a1)
{
  Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *v2; // rax
  int CanCastTo; // edi
  __int64 v4; // rbx
  _DWORD *v5; // rcx
  __int64 v6; // rdx

  *a1 = 0LL;
  v2 = (Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository *)operator new(
                                                                                   0x48uLL,
                                                                                   (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = Windows::Internal::Shell::CustomShell::CustomShellExperienceRepository::CustomShellExperienceRepository(v2);
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v5, v5) )
    {
      *a1 = v4;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,IInspectable,Microsoft::WRL::FtmBase,IWeakReferenceSource,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::CanCastTo(
                    v4,
                    v6,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(v4);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
