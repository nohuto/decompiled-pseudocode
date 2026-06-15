/*
 * XREFs of ??1?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@std@@QEAA@XZ @ 0x180029900
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180029824 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@_ea_180029824.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x180029C38 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??1?$list@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@2@@std@@QEAA@XZ @ 0x18002B2A0 (--1-$list@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_pt.c)
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$1 @ 0x180045D16 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800025F0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::unique_ptr<CStreamClassPolicyGains>::~unique_ptr<CStreamClassPolicyGains>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    `eh vector destructor iterator'(
      (char *)(v1 + 232),
      8LL,
      24LL,
      (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    `eh vector destructor iterator'(
      (char *)(v1 + 40),
      8LL,
      24LL,
      (void (*)(void *))std::forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>::~forward_list<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>>);
    DeleteCriticalSection((LPCRITICAL_SECTION)v1);
    operator delete((void *)v1);
  }
}
