/*
 * XREFs of ??1?$tuple@Uhstring@winrt@@$$CBW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@std@@QEAA@XZ @ 0x18045AC80
 * Callers:
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$2 @ 0x18045F3FC (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$2.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$4 @ 0x18045F414 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$4.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$6 @ 0x18045F42C (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$6.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$8 @ 0x18045F444 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$8.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$10 @ 0x18045F45C (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$10.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$12 @ 0x18045F474 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$12.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$14 @ 0x18045F48C (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$14.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$16 @ 0x18045F4A4 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$16.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$18 @ 0x18045F4BC (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$18.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$20 @ 0x18045F4D4 (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$20.c)
 *     __anonymous_namespace_::GetViewTypeFromExperienceId_::_1_::dtor$22 @ 0x18045F4EC (__anonymous_namespace_--GetViewTypeFromExperienceId_--_1_--dtor$22.c)
 * Callees:
 *     <none>
 */

void __fastcall std::tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>::~tuple<winrt::hstring,enum Windows::UI::Internal::Text::Core::CoreKeyboardViewType const>(
        volatile signed __int32 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 1, a2, a3, a4);
}
