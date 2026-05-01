/*
 * XREFs of ??4?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804904E4
 * Callers:
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x180491B74 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@AEBV01@@Z @ 0x18017ADC8 (--0-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 *__fastcall std::shared_ptr<PenWorkspace::Discover::AppUsageData>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  std::_Ref_count_base *v7; // rcx
  std::_Ref_count_base *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = std::shared_ptr<PenWorkspace::Discover::AppUsageData>::shared_ptr<PenWorkspace::Discover::AppUsageData>(v9, a2);
  v4 = *v3;
  *v3 = *a1;
  v5 = a1[1];
  *a1 = v4;
  v6 = v3[1];
  v3[1] = v5;
  v7 = v9[1];
  a1[1] = v6;
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
  return a1;
}
