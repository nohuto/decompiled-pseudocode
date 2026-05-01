/*
 * XREFs of _anonymous_namespace_::ContextToSearchShowArgs @ 0x18044ABB0
 * Callers:
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x1801AC440 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUhstring@0@PEBG@Z @ 0x1800FC0AC (--8winrt@@YA_NAEBUhstring@0@PEBG@Z.c)
 */

const wchar_t *__fastcall anonymous_namespace_::ContextToSearchShowArgs(__int64 a1)
{
  __int64 v1; // r11
  winrt::hstring *v3; // r11

  if ( (unsigned __int8)winrt::operator==(a1, (__int64)L"TaskbarSearchBox") )
    return L"StartMode=Proactive&QuerySource=TaskBarSearchBox";
  if ( (unsigned __int8)winrt::operator==(v1, (__int64)L"SearchButton") )
    return L"StartMode=Proactive&QuerySource=SearchButton";
  return winrt::hstring::c_str(v3);
}
