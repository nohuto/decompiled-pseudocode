/*
 * XREFs of ?_Reset0@?$_Ptr_base@VIActionService@Actions@CreativeFramework@@@std@@QEAAXPEAVIActionService@Actions@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800B5684
 * Callers:
 *     ??$_Resetp@VLaunchUriService@Actions@CreativeFramework@@@?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEAAXPEAVLaunchUriService@Actions@CreativeFramework@@@Z @ 0x1800B11CC (--$_Resetp@VLaunchUriService@Actions@CreativeFramework@@@-$shared_ptr@VIActionService@Actions@Cr.c)
 *     ??$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEAAXPEAVSetLockScreenHotspotsService@Actions@CreativeFramework@@@Z @ 0x1800BAC10 (--$_Resetp@VSetLockScreenHotspotsService@Actions@CreativeFramework@@@-$shared_ptr@VIActionServic.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180060444 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Ptr_base<CreativeFramework::Actions::IActionService>::_Reset0(_QWORD *a1, __int64 a2, __int64 a3)
{
  std::_Ref_count_base *v5; // rcx

  v5 = (std::_Ref_count_base *)a1[1];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *a1 = a2;
  a1[1] = a3;
}
