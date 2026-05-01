/*
 * XREFs of ?AreAnimationsEnabled@CUndockedSearchAppExperienceManagerConfig@@UEAA_NXZ @ 0x18006B620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CUndockedSearchAppExperienceManagerConfig::AreAnimationsEnabled(
        CUndockedSearchAppExperienceManagerConfig *this)
{
  return winrt::impl::consume_Windows_UI_ViewManagement_IUISettings<winrt::Windows::UI::ViewManagement::IUISettings>::AnimationsEnabled((char *)this + 16);
}
