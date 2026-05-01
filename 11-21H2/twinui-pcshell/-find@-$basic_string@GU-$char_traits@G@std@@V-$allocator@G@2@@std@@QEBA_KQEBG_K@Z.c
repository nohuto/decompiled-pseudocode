/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KQEBG_K@Z @ 0x1803901E8
 * Callers:
 *     XamlLauncher::SearchDismissRequested$_ResumeCoro$1 @ 0x1801ABD40 (XamlLauncher--SearchDismissRequested$_ResumeCoro$1.c)
 *     ?OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z @ 0x180462A30 (-OnInputAppPropertyChanged@TouchKeyboardExperienceManager@@QEAAJPEAUHSTRING__@@0@Z.c)
 *     ?OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@Text@Internal@UI@Windows@@PEAUICoreTextPropertyBagPropertyValueChangedEventArgs@45678@@Z @ 0x1804731C0 (-OnInputAppPropertiesChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreTextPropertyBag@Core@T.c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z @ 0x1804826E8 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@QEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180126FC0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ?find@?$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x180384D10 (-find@-$_WChar_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 */

__int64 __fastcall std::wstring::find(_QWORD *a1, __int16 *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r11
  _QWORD *v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  char *v9; // rsi
  char *i; // r10
  char *v11; // rax
  __int64 v12; // r11
  __int64 v13; // r10

  v3 = a3;
  v4 = -1LL;
  v6 = a1;
  do
    ++v4;
  while ( a2[v4] );
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
    for ( i = (char *)v6 + 2 * a3; ; i = (char *)(v13 + 2) )
    {
      v11 = (char *)std::_WChar_traits<unsigned short>::find(i, (v9 - i) >> 1, a2);
      if ( !v11 )
        break;
      if ( !(unsigned int)std::_WChar_traits<unsigned short>::compare(v11, (char *)a2, v12) )
        return (v13 - (__int64)v6) >> 1;
    }
    return -1LL;
  }
  return v3;
}
