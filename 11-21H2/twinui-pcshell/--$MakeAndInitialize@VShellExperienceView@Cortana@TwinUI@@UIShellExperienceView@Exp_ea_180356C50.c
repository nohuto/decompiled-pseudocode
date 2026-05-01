/*
 * XREFs of ??$MakeAndInitialize@VShellExperienceView@Cortana@TwinUI@@UIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIServiceProvider@@PEAUHSTRING__@@PEAUHSTRING__@@PEAUHSTRING__@@W4ZBID@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIShellExperienceView@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIServiceProvider@@$$QEAPEAUHSTRING__@@22$$QEAW4ZBID@@@Z @ 0x180356C50
 * Callers:
 *     ?_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18035D19C (-_CreateShellExperienceView@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ @ 0x18038AFFC (-_CreateShellExperienceView@SearchAppExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5,
        _DWORD *a6)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<TwinUI::Cortana::ShellExperienceView,Windows::Internal::Shell::Experience::IShellExperienceView,IServiceProvider *,HSTRING__ *,HSTRING__ *,HSTRING__ *,enum ZBID>(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6);
}
