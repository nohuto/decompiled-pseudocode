/*
 * XREFs of ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x1805F178C
 * Callers:
 *     _lambda_52a7597311830440b167c013db955118_::operator() @ 0x1801964A0 (_lambda_52a7597311830440b167c013db955118_--operator().c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18004C24C (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 */

__int64 __fastcall CSingleViewShellExperience::Reactivate(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  return ExperienceManagerUtils::RaiseReactivatedEvent(
           *((ExperienceManagerUtils **)this + 3),
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 32),
           *((HSTRING *)this + 1),
           *((HSTRING *)this + 2),
           a2,
           (HSTRING)a3);
}
