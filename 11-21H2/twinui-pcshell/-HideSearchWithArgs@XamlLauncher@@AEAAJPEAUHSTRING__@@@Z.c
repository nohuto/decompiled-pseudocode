/*
 * XREFs of ?HideSearchWithArgs@XamlLauncher@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AAA4C
 * Callers:
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x1801ABD40 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XamlLauncher::HideSearchWithArgs(XamlLauncher *this, HSTRING a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 43);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v2 + 88LL))(v2, a2);
  else
    return 2147943568LL;
}
