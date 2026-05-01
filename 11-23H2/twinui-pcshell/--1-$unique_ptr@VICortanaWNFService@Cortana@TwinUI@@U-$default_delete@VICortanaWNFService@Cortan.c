/*
 * XREFs of ??1?$unique_ptr@VICortanaWNFService@Cortana@TwinUI@@U?$default_delete@VICortanaWNFService@Cortana@TwinUI@@@wistd@@@wistd@@QEAA@XZ @ 0x180476D78
 * Callers:
 *     _SearchAppDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18047C324 (_SearchAppDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _SearchAppDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18047C4DB (_SearchAppDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$1 @ 0x180487388 (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CortanaDesktopExperienceView::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18048766B (_CortanaDesktopExperienceView--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::~unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>(
        __int64 a1)
{
  return wistd::unique_ptr<TwinUI::Cortana::ICortanaWNFService,wistd::default_delete<TwinUI::Cortana::ICortanaWNFService>>::reset(
           a1,
           0LL);
}
