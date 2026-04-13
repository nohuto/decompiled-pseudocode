/*
 * XREFs of ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x180096A38
 * Callers:
 *     ??0?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18008F7CC (--0-$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Resetp@VISettingsContainer@CommonHelper@CreativeFramework@@@?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@@Z @ 0x18009AC34 (--$_Resetp@VISettingsContainer@CommonHelper@CreativeFramework@@@-$shared_ptr@VISettingsContainer.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060494 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
