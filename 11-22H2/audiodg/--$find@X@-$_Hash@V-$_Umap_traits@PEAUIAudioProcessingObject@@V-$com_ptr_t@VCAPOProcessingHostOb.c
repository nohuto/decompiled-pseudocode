/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@1@AEBQEAUIAudioProcessingObject@@@Z @ 0x1400064B4
 * Callers:
 *     ?RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140006270 (-RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServiceProvider@@@Z @ 0x140006740 (-GetServiceProviderForAPO@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@PEAPEAUIServicePr.c)
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x1400227E0 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 *     ?UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z @ 0x14006DC90 (-UnregisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@@Z.c)
 * Callees:
 *     ??$_Find_last@PEAUIAudioProcessingObject@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAUIAudioProcessingObject@@_K@Z @ 0x140006510 (--$_Find_last@PEAUIAudioProcessingObject@@@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x140020F38 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::find<void>(
        unsigned __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 appended; // rax
  __int64 v6; // r11
  __int64 v7; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  v7 = *(_QWORD *)(std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::_Find_last<IAudioProcessingObject *>(
                     a1,
                     v9,
                     v6,
                     appended)
                 + 8);
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 8);
  *a2 = v7;
  return a2;
}
