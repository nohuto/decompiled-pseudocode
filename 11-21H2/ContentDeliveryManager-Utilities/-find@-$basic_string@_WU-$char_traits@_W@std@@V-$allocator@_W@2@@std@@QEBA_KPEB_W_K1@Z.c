/*
 * XREFs of ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x1800C28DC
 * Callers:
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A5E7C (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W@Z @ 0x1800BEAE4 (-GetFriendlySubscriptionNameFromPlacementId@SubscribedContentUtils@CreativeFramework@@YA-AV-$bas.c)
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800D447C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800D672C (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800D6A60 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800E6EEC (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     ?GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA?AU_FILETIME@@PEB_W_N@Z @ 0x1800E860C (-GetFileTimeFromString@StringUtils@CommonHelper@CreativeFramework@@YA-AU_FILETIME@@PEB_W_N@Z.c)
 *     ?RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800E885C (-RemoveSubstring@StringUtils@CommonHelper@CreativeFramework@@YA-AV-$basic_string@_WU-$char_trait.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::wstring::find(char *a1, _WORD *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  char *v6; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r8
  _QWORD *v11; // rax
  char *v12; // rsi
  unsigned __int64 v13; // rax
  char *i; // rdx
  unsigned __int64 v15; // rbx
  _WORD *v16; // rcx
  __int64 v17; // rcx

  v6 = a1;
  if ( !a4 && a3 <= *((_QWORD *)a1 + 2) )
    return a3;
  v8 = *((_QWORD *)a1 + 2);
  if ( a3 < v8 )
  {
    v9 = v8 - a3;
    if ( a4 <= v9 )
    {
      v10 = 1 - a4 + v9;
      if ( *((_QWORD *)a1 + 3) < 8uLL )
        v11 = a1;
      else
        v11 = *(_QWORD **)a1;
      v12 = (char *)v11 + 2 * a3;
      while ( v10 )
      {
        v13 = v10;
        for ( i = v12; *(_WORD *)i != *a2; i += 2 )
        {
          if ( !--v13 )
            return -1LL;
        }
        if ( !i )
          break;
        if ( !a4 )
        {
LABEL_20:
          if ( *((_QWORD *)v6 + 3) >= 8uLL )
            v6 = *(char **)v6;
          return (i - v6) >> 1;
        }
        v15 = a4;
        v16 = a2;
        while ( *(_WORD *)((char *)v16 + i - (char *)a2) == *v16 )
        {
          ++v16;
          if ( !--v15 )
            goto LABEL_20;
        }
        v17 = i - v12;
        v12 = i + 2;
        v10 += -1 - (v17 >> 1);
      }
    }
  }
  return -1LL;
}
