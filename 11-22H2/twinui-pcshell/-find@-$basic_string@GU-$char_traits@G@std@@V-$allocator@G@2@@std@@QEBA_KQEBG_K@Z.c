/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x180038680
 * Callers:
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x180200960 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC (_lambda_5a9ec3bdba9975d084688ff203e80696_--operator().c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180534320 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x180038744 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x18008FF20 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 */

__int64 __fastcall std::wstring::find(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // rbx
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *v9; // rbp
  char *i; // r11
  __int64 v11; // rax
  __int64 v12; // r11

  v3 = a3;
  v4 = -1LL;
  v6 = a1;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  v7 = a1[2];
  if ( a1[3] >= 8uLL )
    v6 = (_QWORD *)*a1;
  if ( v4 > v7 )
    return -1LL;
  v8 = v7 - v4;
  if ( a3 > v8 )
    return -1LL;
  if ( v4 )
  {
    v9 = (char *)v6 + 2 * v8 + 2;
    for ( i = (char *)v6 + 2 * a3; ; i = (char *)(v12 + 2) )
    {
      v11 = std::_WChar_traits<unsigned short>::find(i, (v9 - i) >> 1, a2);
      if ( !v11 )
        break;
      if ( !(unsigned int)std::_WChar_traits<unsigned short>::compare(v11, a2, v4) )
        return (v12 - (__int64)v6) >> 1;
    }
    return -1LL;
  }
  return v3;
}
