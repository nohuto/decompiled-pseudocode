/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1802F28A0
 * Callers:
 *     ?_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802FD200 (-_ShowAsViewModeWorker@CAppViewManager@@AEAAJPEAUIViewEventArgsForShowAsViewMode@ViewManagerInte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ActivateInstance@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@1@@Z @ 0x1802F27F4 (--$ActivateInstance@UIModalExperienceDefaultOptions@ModalExperience@Shell@Internal@Windows@@@Fou.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return Windows::Foundation::ActivateInstance<Windows::Internal::Shell::ModalExperience::IModalExperienceDefaultOptions>(
           a1,
           a2);
}
