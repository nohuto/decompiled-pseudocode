/*
 * XREFs of ??$_Resetp@VLaunchUriService@Actions@CreativeFramework@@@?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEAAXPEAVLaunchUriService@Actions@CreativeFramework@@@Z @ 0x1800B121C
 * Callers:
 *     ?MakeLaunchUriService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x1800B4490 (-MakeLaunchUriService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Actions@Creat.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004724 (--2@YAPEAX_K@Z.c)
 *     ?_Reset0@?$_Ptr_base@VIActionService@Actions@CreativeFramework@@@std@@QEAAXPEAVIActionService@Actions@CreativeFramework@@PEAV_Ref_count_base@2@@Z @ 0x1800B56D4 (-_Reset0@-$_Ptr_base@VIActionService@Actions@CreativeFramework@@@std@@QEAAXPEAVIActionService@Ac.c)
 */

__int64 __fastcall std::shared_ptr<CreativeFramework::Actions::IActionService>::_Resetp<CreativeFramework::Actions::LaunchUriService>(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, __int64))
{
  _DWORD *v4; // rax
  __int64 result; // rax

  try
  {
    v4 = operator new(0x18uLL);
    if ( v4 )
    {
      v4[2] = 1;
      v4[3] = 1;
      *(_QWORD *)v4 = &std::_Ref_count<CreativeFramework::Actions::AppInstallService>::`vftable';
      *((_QWORD *)v4 + 2) = a2;
    }
    result = std::_Ptr_base<CreativeFramework::Actions::IActionService>::_Reset0(a1, a2, v4);
  }
  catch ( ... )
  {
    if ( a2 )
      (**a2)(a2, 1LL);
    throw;
  }
  return result;
}
