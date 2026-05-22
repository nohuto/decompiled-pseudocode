/*
 * XREFs of ??0?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18013E158
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x18013E550 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 * Callees:
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18005D7EC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     ??$_Uninitialized_copy@PEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x18013E098 (--$_Uninitialized_copy@PEAV-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?_Buy_raw@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x18013E82C (-_Buy_raw@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<InputSite>>::vector<Microsoft::WRL::ComPtr<InputSite>>(
        __int64 a1,
        __int64 **a2)
{
  unsigned __int64 v4; // rdx

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v4 = a2[1] - *a2;
  if ( v4 )
  {
    if ( v4 > 0x1FFFFFFFFFFFFFFFLL )
      std::vector<INPUT_SPACE_PAYLOAD>::_Xlength();
    std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Buy_raw();
    *(_QWORD *)(a1 + 8) = std::_Uninitialized_copy<Microsoft::WRL::ComPtr<InputSite> *,std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(
                            *a2,
                            a2[1],
                            *(__int64 **)a1);
  }
  return a1;
}
