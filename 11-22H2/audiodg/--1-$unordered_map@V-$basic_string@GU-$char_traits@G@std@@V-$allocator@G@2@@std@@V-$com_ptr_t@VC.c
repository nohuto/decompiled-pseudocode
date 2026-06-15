/*
 * XREFs of ??1?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@@std@@QEAA@XZ @ 0x14006BB64
 * Callers:
 *     _CAPOProcessingHost::CAPOProcessingHost_::_1_::dtor$3 @ 0x14006B5DA (_CAPOProcessingHost--CAPOProcessingHost_--_1_--dtor$3.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCMicBoostNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x14006AAAC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 */

void __fastcall std::unordered_map<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>::~unordered_map<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 v2; // rcx

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,wil::com_ptr_t<CMicBoostNotificationsHandler,wil::err_returncode_policy>>,void *>>>(
    v2,
    *(_QWORD *)(a1 + 8));
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x38uLL);
}
