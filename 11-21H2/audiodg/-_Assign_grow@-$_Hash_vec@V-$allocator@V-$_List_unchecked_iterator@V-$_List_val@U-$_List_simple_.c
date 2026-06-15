/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1400228E8
 * Callers:
 *     ??0CAPOProcessingHost@@QEAA@XZ @ 0x14002272C (--0CAPOProcessingHost@@QEAA@XZ.c)
 *     ??0?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@1@AEBV?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x140022870 (--0-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessingHostObject@@U.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1400666EC (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessing.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x140066868 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14001CBBC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x140022970 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>>>>>::_Assign_grow(
        unsigned __int64 **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v5; // rdx
  unsigned __int64 v7; // rbp
  size_t size_of; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v11; // rcx

  v5 = a1[1];
  v7 = v5 - *a1;
  if ( v7 >= a2 )
  {
    result = 0LL;
    v11 = (unsigned __int64)((char *)v5 - (char *)*a1 + 7) >> 3;
    if ( *a1 > v5 )
      v11 = 0LL;
    if ( v11 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*a1, a3, v11);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v7 )
      std::_Deallocate<16,0>(*a1, 8 * v7);
    result = &v9[a2];
    *a1 = v9;
    a1[1] = result;
    a1[2] = result;
    while ( v9 != result )
      *v9++ = a3;
  }
  return result;
}
