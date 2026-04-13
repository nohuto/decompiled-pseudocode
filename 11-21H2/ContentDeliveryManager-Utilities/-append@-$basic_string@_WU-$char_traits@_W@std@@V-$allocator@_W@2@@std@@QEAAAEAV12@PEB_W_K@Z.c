/*
 * XREFs of ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800AF020
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800ABDC0 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 *     ?GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAVCreativeRule@23@@Z @ 0x1800B0D68 (-GetFileNameForRule@DiagTrackRuleSetHandler@RuleSetHandlers@CreativeFramework@@AEAA-AV-$basic_st.c)
 *     ?GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@PEB_W0@Z @ 0x1800BED70 (-GetHashedTileAlias@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AVHString@Wrapper.c)
 *     ?LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ @ 0x1800CEBBC (-LaunchCortana@LaunchCortanaService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA?AV?$unordered_set@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@XZ @ 0x1800D672C (-GetMacros@ToastHelpers@NotificationManager@CreativeFramework@@AEAA-AV-$unordered_set@V-$basic_s.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800D6A60 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800A3D30 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800AEF3C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

char *__fastcall std::wstring::append(char *a1, char *a2, unsigned __int64 a3)
{
  char *v5; // rbx
  char *v6; // rax
  char *v7; // rax
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rcx
  char *v11; // rax

  v5 = a1;
  if ( !a2 )
    goto LABEL_13;
  v6 = *((_QWORD *)a1 + 3) < 8uLL ? a1 : *(char **)a1;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  if ( &a1[2 * *((_QWORD *)v5 + 2)] > a2 )
  {
    if ( *((_QWORD *)v5 + 3) < 8uLL )
      v7 = v5;
    else
      v7 = *(char **)v5;
    return (char *)std::wstring::append(v5, v5, (a2 - v7) >> 1, a3);
  }
  else
  {
LABEL_13:
    if ( ~*((_QWORD *)v5 + 2) <= a3 )
      std::wstring::_Xlen();
    if ( a3 )
    {
      v9 = *((_QWORD *)v5 + 2) + a3;
      if ( std::wstring::_Grow((__int64)v5, v9, 0) )
      {
        if ( *((_QWORD *)v5 + 3) < 8uLL )
          v10 = v5;
        else
          v10 = *(_QWORD **)v5;
        memcpy_0((char *)v10 + 2 * *((_QWORD *)v5 + 2), a2, 2 * a3);
        if ( *((_QWORD *)v5 + 3) < 8uLL )
          v11 = v5;
        else
          v11 = *(char **)v5;
        *((_QWORD *)v5 + 2) = v9;
        *(_WORD *)&v11[2 * v9] = 0;
      }
    }
    return v5;
  }
}
