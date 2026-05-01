/*
 * XREFs of ??R_lambda_d5baf9e97843045c2618cd983def5f01_@@QEBA?AUhstring@winrt@@AEBUIUriEscapeStatics@Foundation@Windows@2@@Z @ 0x18038E5CC
 * Callers:
 *     ?Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045B90 (-Show@UndockedSearchAppExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experie.c)
 * Callees:
 *     ?UnescapeComponent@?$consume_Windows_Foundation_IUriEscapeStatics@UIUriEscapeStatics@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AUhstring@3@AEBU4param@3@@Z @ 0x18038FBB8 (-UnescapeComponent@-$consume_Windows_Foundation_IUriEscapeStatics@UIUriEscapeStatics@Foundation@.c)
 */

__int64 __fastcall _lambda_d5baf9e97843045c2618cd983def5f01_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_Windows_Foundation_IUriEscapeStatics<winrt::Windows::Foundation::IUriEscapeStatics>::UnescapeComponent(
    a3,
    a2,
    *a1);
  return a2;
}
