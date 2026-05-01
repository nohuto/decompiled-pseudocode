/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceViewChangedArg@?1??_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z@UIShellExperienceViewChangedArg@789Windows@@AEAW46789Windows@@AEAJ@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@AEAW4ShellExperienceViewChangeType@4567@AEAJ@Z @ 0x180390BAC
 * Callers:
 *     ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x180391D00 (-_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Exper.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg::ShellExperienceViewChangedArg @ 0x180390E78 (_TwinUI--Cortana--ShellExperienceView--_FireViewChanged_--_2_--ShellExperienceViewChangedArg--Sh.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180391120 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@UIShellExperienceViewC.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803916C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShe_ea_1803916C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ___MakeAndInitialize_VShellExperienceViewChangedArg__1___FireViewChanged_ShellExperienceView_Cortana_TwinUI__AEAAJW4ShellExperienceViewChangeType_Experience_Shell_Internal_Windows__J_Z_UIShellExperienceViewChangedArg_789Windows__AEAW46789Windows__AEAJ_Details_WRL_Microsoft__YAJPEAPEAUIShellExperienceViewChangedArg_Experience_Shell_Internal_Windows__AEAW4ShellExperienceViewChangeType_4567_AEAJ_Z(
        _QWORD *a1,
        _DWORD *a2,
        int *a3)
{
  void *v6; // rax
  int CanCastTo; // ebx
  _DWORD *v8; // rdi
  int v9; // edx
  _DWORD *v10; // rcx
  __int64 v11; // rcx

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = (_DWORD *)TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg::ShellExperienceViewChangedArg(v6);
    v9 = *a3;
    v8[8] = *a2;
    v8[9] = v9;
    *a1 = 0LL;
    if ( InlineIsEqualGUID(&GUID_1b7d8b95_d5cb_4cff_874f_11fdf16217ac, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v10, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v8;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg,IWeakReferenceSource>::CanCastTo(
                    v8,
                    v11,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
