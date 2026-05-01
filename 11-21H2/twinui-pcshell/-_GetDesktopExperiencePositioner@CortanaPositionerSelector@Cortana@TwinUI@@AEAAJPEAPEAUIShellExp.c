/*
 * XREFs of ?_GetDesktopExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x180390920
 * Callers:
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x180390590 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@YAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@AEAPEAUIServiceProvider@@AEAPEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x1803A50D8 (--$MakeAndInitialize@VCortanaDesktopExperienceView@@UIShellExperiencePositioner@Experience@Shell.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner(
        TwinUI::Cortana::CortanaPositionerSelector *this,
        struct Windows::Internal::Shell::Experience::IShellExperiencePositioner **a2)
{
  __int64 *v4; // rbx
  struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = (__int64 *)((char *)this + 16);
  v5 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*((_QWORD *)this + 2);
  if ( !v5 )
  {
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
    v10 = *((_QWORD *)this + 5);
    v11 = *((_QWORD *)this + 4);
    *v4 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CortanaDesktopExperienceView,Windows::Internal::Shell::Experience::IShellExperiencePositioner,IServiceProvider * &,TwinUI::Cortana::ICortanaExperienceManagerNotification * &>(
           v4,
           &v11,
           &v10);
    v7 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC1A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v6);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanapositioner.cpp",
        (const char *)v7);
      return v7;
    }
    v5 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v4;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *))(*(_QWORD *)v5 + 8LL))(v5);
    v5 = (struct Windows::Internal::Shell::Experience::IShellExperiencePositioner *)*v4;
  }
  *a2 = v5;
  return 0LL;
}
