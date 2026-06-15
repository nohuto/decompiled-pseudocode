/*
 * XREFs of ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x140026B74
 * Callers:
 *     ?GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z @ 0x1400269F4 (-GetModuleName@@YAXAEBU_GUID@@PEAUIComCatalog@@PEAPEAG@Z.c)
 *     ??$emplace@AEAPEBGAEAPEAVCAPOEndpointNotificationsHandler@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEBGAEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14006471C (--$emplace@AEAPEBGAEAPEAVCAPOEndpointNotificationsHandler@@@-$_Hash@V-$_Umap_traits@V-$basic_str.c)
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140065A98 (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEBGPEAUIMMDevice@@PEAPEAVCAPOEndpointN.c)
 *     ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x140065E60 (-OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x140026BB8 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::wstring::wstring(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8

  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v3 = -1LL;
  do
    ++v3;
  while ( *(_WORD *)(a2 + 2 * v3) );
  std::wstring::assign(a1);
  return a1;
}
