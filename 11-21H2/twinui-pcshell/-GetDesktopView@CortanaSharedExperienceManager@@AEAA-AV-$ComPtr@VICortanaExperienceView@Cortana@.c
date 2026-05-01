/*
 * XREFs of ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x180359004
 * Callers:
 *     ?Close@CortanaSharedExperienceManager@@UEAAJXZ @ 0x180358510 (-Close@CortanaSharedExperienceManager@@UEAAJXZ.c)
 *     ?get_LockCurtainShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z @ 0x18035F480 (-get_LockCurtainShowing@CortanaSharedExperienceManager@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@VICortanaExperienceView@Cortana@TwinUI@@@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803558A8 (--$As@VICortanaExperienceView@Cortana@TwinUI@@@-$ComPtr@UIShellExperiencePositioner@Experience@S.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall CortanaSharedExperienceManager::GetDesktopView(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, __int64, _QWORD); // rbx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+10h]

  v7 = a2;
  *a2 = 0LL;
  v6 = 0LL;
  v3 = *(_QWORD *)(a1 + 424);
  v4 = *(int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 16LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  if ( v4(v3, 1LL, &v6) >= 0 )
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::As<TwinUI::Cortana::ICortanaExperienceView>(
      &v6,
      a2);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  return a2;
}
