/*
 * XREFs of ?push_back@?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAAX$$QEAUIAsyncAction@Foundation@Windows@winrt@@@Z @ 0x1806C8CB4
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1 @ 0x180256050 (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_Resum.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<winrt::Windows::Foundation::IAsyncAction>::push_back(__int64 *a1, __int64 *a2)
{
  char **v2; // r9
  char *result; // rax

  v2 = (char **)a1[1];
  if ( v2 == (char **)a1[2] )
    return std::vector<winrt::Windows::Foundation::IAsyncAction>::_Emplace_reallocate<winrt::Windows::Foundation::IAsyncAction>(
             a1,
             a1[1],
             a2);
  result = (char *)*a2;
  *a2 = 0LL;
  *v2 = result;
  a1[1] += 8LL;
  return result;
}
