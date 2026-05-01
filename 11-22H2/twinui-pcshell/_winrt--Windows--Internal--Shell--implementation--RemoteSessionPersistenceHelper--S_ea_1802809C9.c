/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveHostProcessDataToStorage_::_1_::catch$3 @ 0x1802809C9
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@AEAAXAEB_KAEBUhstring@6@AEB_N@Z @ 0x1807279FC (-DeleteIdFromStorage@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::SaveHostProcessDataToStorage_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 120),
    (void *)0x88,
    (unsigned int)"pcshell\\twinui\\cloudpc\\lib\\remotesessionpersistencehelper.cpp",
    a4);
  *(_BYTE *)(a2 + 152) = 1;
  *(_QWORD *)(a2 + 72) = ***(unsigned int ***)(a2 + 136);
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteIdFromStorage(
    *(winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **)(a2 + 128),
    (const unsigned __int64 *)(a2 + 72),
    (const struct winrt::hstring *)(a2 + 48),
    (const bool *)(a2 + 152));
  return 0LL;
}
