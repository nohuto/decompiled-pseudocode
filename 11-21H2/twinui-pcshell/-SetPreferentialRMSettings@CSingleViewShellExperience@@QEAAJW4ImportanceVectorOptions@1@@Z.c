/*
 * XREFs of ?SetPreferentialRMSettings@CSingleViewShellExperience@@QEAAJW4ImportanceVectorOptions@1@@Z @ 0x1800C92C8
 * Callers:
 *     ?OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18003CB40 (-OnViewCreated@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18003D100 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C9000 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180364320 (-OnViewCreated@CToastCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180369370 (-OnViewCreated@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewCreated@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18036B490 (-OnViewCreated@CPeopleBarJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?SetPreferentialRMSettings@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ImportanceVectorOptions@CSingleViewShellExperience@@@Z @ 0x180391A50 (-SetPreferentialRMSettings@ShellExperienceView@Cortana@TwinUI@@UEAAJW4ImportanceVectorOptions@CS.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z @ 0x18009C8E0 (-SetImportanceValues@CSingleViewShellExperience@@AEAAJW4ImportanceVectorOptions@1@@Z.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009C9E8 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSingleViewShellExperience::SetPreferentialRMSettings(__int64 a1, int a2)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 24);
  if ( !*(_QWORD *)(a1 + 24) || *(_DWORD *)(a1 + 160) == a2 )
    return 0LL;
  *(_DWORD *)(a1 + 160) = a2;
  v3 = CSingleViewShellExperience::SetImportanceValues(a1, a2 & 0xFD);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x443,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v3);
  }
  else
  {
    v9 = 0LL;
    v5 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v2,
           &v9);
    v4 = v5;
    if ( v5 < 0 )
    {
      v7 = 1094LL;
    }
    else
    {
      v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 80LL))(v9, 2LL);
      v4 = v5;
      if ( v5 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
        return 0LL;
      }
      v7 = 1095LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
  }
  return v4;
}
