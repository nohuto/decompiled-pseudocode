/*
 * XREFs of ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800BF8A4
 * Callers:
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800C0978 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z @ 0x18009FE98 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18009FED0 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?reserve@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x1800B052C (-reserve@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::NotificationManager::ToastHelpers::Encode(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 *v3; // rsi
  _QWORD *v5; // r14
  _BYTE *v6; // rbx
  _BYTE *v7; // rsi

  v3 = a3;
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v5 = a3 + 2;
  std::wstring::reserve((__int64)a2, a3[2]);
  if ( (unsigned __int64)v3[3] < 8 )
  {
    v6 = v3;
  }
  else
  {
    v6 = (_BYTE *)*v3;
    v3 = (__int64 *)*v3;
  }
  v7 = (char *)v3 + 2 * *v5;
  while ( v6 != v7 )
  {
    if ( *(_WORD *)v6 == 38 )
      std::wstring::append((__int64)a2, L"&amp;");
    else
      std::wstring::append(a2, v6, 1uLL);
    v6 += 2;
  }
  return a2;
}
