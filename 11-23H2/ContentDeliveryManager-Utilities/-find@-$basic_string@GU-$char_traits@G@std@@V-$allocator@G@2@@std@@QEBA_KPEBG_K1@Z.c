/*
 * XREFs of ?find@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA_KPEBG_K1@Z @ 0x1800644B4
 * Callers:
 *     _anonymous_namespace_::StartsWith @ 0x18005EC00 (_anonymous_namespace_--StartsWith.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18006F980 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 * Callees:
 *     ?find@?$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z @ 0x18006457C (-find@-$char_traits@G@std@@SAPEBGPEBG_KAEBG@Z.c)
 *     wmemcmp @ 0x180065790 (wmemcmp.c)
 */

__int64 __fastcall std::wstring::find(_QWORD *a1, const wchar_t *a2, __int64 a3, size_t a4)
{
  size_t v7; // rbx
  size_t v8; // rbx
  _QWORD *v9; // rsi
  const wchar_t *v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // r11
  __int64 v13; // rcx

  if ( !a4 )
    return 0LL;
  v7 = a1[2];
  if ( v7 && a4 <= v7 )
  {
    v8 = 1 - a4 + v7;
    if ( a1[3] < 8uLL )
      v9 = a1;
    else
      v9 = (_QWORD *)*a1;
    while ( 1 )
    {
      v10 = (const wchar_t *)std::char_traits<unsigned short>::find(v9, v8, a2);
      if ( !v10 )
        break;
      if ( !wmemcmp(v10, a2, a4) )
      {
        if ( v12[3] >= 8uLL )
          v12 = (_QWORD *)*v12;
        return (v11 - (__int64)v12) >> 1;
      }
      v13 = v11 - (_QWORD)v9;
      v9 = (_QWORD *)(v11 + 2);
      v8 += -1 - (v13 >> 1);
    }
  }
  return -1LL;
}
