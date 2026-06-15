/*
 * XREFs of ??0?$unordered_map@U_GUID@@W4ValidEffectPackConfigurationSettings@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@4@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@@std@@QEAA@V?$initializer_list@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@1@@Z @ 0x1800538C8
 * Callers:
 *     _dynamic_initializer_for__s_validSettingsForSchema__ @ 0x1800017A0 (_dynamic_initializer_for__s_validSettingsForSchema__.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@1@AEBV?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@1@@Z @ 0x180053940 (--0-$_Hash@V-$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V-$_Uhash_compare@U_G.c)
 *     ??$emplace@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@1@@Z @ 0x1800539E4 (--$emplace@AEBU-$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@-$_Hash@V-$_Uma.c)
 */

// Hidden C++ exception states: #wind=1
int *__fastcall std::unordered_map<_GUID,enum ValidEffectPackConfigurationSettings>::unordered_map<_GUID,enum ValidEffectPackConfigurationSettings>(
        __int64 a1,
        __m128i *a2)
{
  __int64 v3; // rcx
  __m128i v4; // xmm0
  __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  char v8[24]; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]
  int *v11; // [rsp+48h] [rbp+10h]

  v10 = HIDWORD(a1);
  v11 = &dword_1801D0160;
  v9 = 0;
  std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>(
    a1,
    &v9);
  v4 = *a2;
  v5 = a2->m128i_i64[0];
  v6 = _mm_srli_si128(v4, 8).m128i_u64[0];
  while ( v5 != v6 )
  {
    std::_Hash<std::_Umap_traits<_GUID,enum ValidEffectPackConfigurationSettings,std::_Uhash_compare<_GUID,std::hash<_GUID>,std::equal_to<_GUID>>,std::allocator<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings>>,0>>::emplace<std::pair<_GUID const,enum ValidEffectPackConfigurationSettings> const &>(
      v3,
      v8,
      v5);
    v5 += 20LL;
  }
  return &dword_1801D0160;
}
