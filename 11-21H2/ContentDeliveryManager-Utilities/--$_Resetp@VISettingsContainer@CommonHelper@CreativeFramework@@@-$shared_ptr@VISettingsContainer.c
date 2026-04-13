/*
 * XREFs of ??$_Resetp@VISettingsContainer@CommonHelper@CreativeFramework@@@?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@@Z @ 0x1800A89C4
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800ABDC0 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004094 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISettingsContainer@CommonHelper@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800A3EB8 (-_Reset0@-$_Ptr_base@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@QEAAXPEAVISetting.c)
 */

__int64 __fastcall std::shared_ptr<CreativeFramework::CommonHelper::ISettingsContainer>::_Resetp<CreativeFramework::CommonHelper::ISettingsContainer>(
        _QWORD *a1)
{
  _DWORD *v2; // rax
  __int64 result; // rax

  try
  {
    v2 = operator new(0x18uLL);
    if ( v2 )
    {
      v2[2] = 1;
      v2[3] = 1;
      *(_QWORD *)v2 = &std::_Ref_count<CreativeFramework::CommonHelper::ISettingsContainer>::`vftable';
      *((_QWORD *)v2 + 2) = 0LL;
    }
    result = std::_Ptr_base<CreativeFramework::CommonHelper::ISettingsContainer>::_Reset0(a1, 0LL, (__int64)v2);
  }
  catch ( ... )
  {
    operator delete(0LL);
    throw;
  }
  return result;
}
