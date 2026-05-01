/*
 * XREFs of Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_enum_Windows::Internal::Shell::Experience::ShellExperienceViewChangeType_&_long_&_ @ 0x18046F23C
 * Callers:
 *     ?_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Experience@Shell@Internal@Windows@@J@Z @ 0x180470100 (-_FireViewChanged@ShellExperienceView@Cortana@TwinUI@@AEAAJW4ShellExperienceViewChangeType@Exper.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$00@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewChangedArg@Experience@Shell@Internal@Windows@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18046EF2C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperience.c)
 *     _TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg::ShellExperienceViewChangedArg @ 0x18046F434 (_TwinUI--Cortana--ShellExperienceView--_FireViewChanged_--_2_--ShellExperienceViewChangedArg--Sh.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShellExperienceViewEventArg@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18046FAB0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIShe_ea_18046FAB0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize__TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg_Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg_enum_Windows::Internal::Shell::Experience::ShellExperienceViewChangeType___long___(
        _QWORD *a1,
        _DWORD *a2,
        int *a3)
{
  void *v6; // rax
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rbx

  *a1 = 0LL;
  v6 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v8 = TwinUI::Cortana::ShellExperienceView::_FireViewChanged_::_2_::ShellExperienceViewChangedArg::ShellExperienceViewChangedArg(v6);
    v9 = *a3;
    v10 = v8;
    *(_DWORD *)(v8 + 32) = *a2;
    *(_DWORD *)(v8 + 36) = v9;
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<1>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg>>(
           v8,
           &GUID_1b7d8b95_d5cb_4cff_874f_11fdf16217ac,
           a1);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v7;
}
