/*
 * XREFs of ?reserve@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_K@Z @ 0x1800B052C
 * Callers:
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800ADB40 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ?Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV45@@Z @ 0x1800BF8A4 (-Encode@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$basic_string@_WU-$char_trai.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800C0978 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800968B8 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 */

void __fastcall std::wstring::reserve(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // rsi
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdi

  v2 = (unsigned __int64 *)(a1 + 16);
  v3 = (_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 <= a2 && *(_QWORD *)(a1 + 24) != a2 && std::wstring::_Grow(a1, a2, 1) )
  {
    if ( v3[3] >= 8uLL )
      v3 = (_QWORD *)*v3;
    *v2 = v4;
    *((_WORD *)v3 + v4) = 0;
  }
}
