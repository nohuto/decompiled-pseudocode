/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x14006B054
 * Callers:
 *     ?GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14006CCCC (-GetEndpointNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCAPOEndpointNotif.c)
 *     ?GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x14006D13C (-GetMicBoostNotificationHandler@CAPOProcessingHost@@AEAAJPEAUIMMDevice@@PEAPEAVCMicBoostNotifica.c)
 *     ?OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z @ 0x14006D540 (-OnPropertyValueChanged@CAPOProcessingHost@@UEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x140020F38 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x14006AA28 (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Hash@V-$_Umap_tr.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // r8
  const unsigned __int8 *v7; // rdx
  __int64 appended; // rax
  char *v9; // r11
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = *(_QWORD *)(a3 + 16);
  v7 = (const unsigned __int8 *)a3;
  if ( *(_QWORD *)(a3 + 24) >= 8uLL )
    v7 = *(const unsigned __int8 **)a3;
  appended = std::_Fnv1a_append_bytes((__int64)a1, v7, 2 * v5);
  v10 = std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::_Find_last<std::wstring>(
          a1,
          v12,
          v9,
          appended)[1];
  if ( !v10 )
    v10 = a1[1];
  *a2 = v10;
  return a2;
}
