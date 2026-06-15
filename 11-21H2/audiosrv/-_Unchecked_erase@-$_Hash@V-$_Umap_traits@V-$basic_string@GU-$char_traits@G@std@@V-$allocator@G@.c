/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@2@PEAU32@@Z @ 0x18014DEE8
 * Callers:
 *     ?GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180022E60 (-GetEndpointCharacteristics@CEndpointCharacteristicsCache@@UEAAJPEBGHHPEAPEAVCEndpointCharacteri.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18005A438 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>,0>>::_Unchecked_erase(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  bool v4; // cf
  __int64 v5; // r8
  const unsigned __int8 *v6; // rdx
  __int64 appended; // rax
  _QWORD *v8; // r11
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx

  v2 = a2 + 2;
  v4 = a2[5] < 8uLL;
  v5 = a2[4];
  v6 = (const unsigned __int8 *)(a2 + 2);
  if ( !v4 )
    v6 = (const unsigned __int8 *)*v2;
  appended = std::_Fnv1a_append_bytes(a1, v6, 2 * v5);
  v9 = v8[3];
  v10 = 2 * (v8[6] & appended);
  if ( *(_QWORD **)(v9 + 16 * (v8[6] & appended) + 8) == a2 )
  {
    if ( *(_QWORD **)(v9 + 16 * (v8[6] & appended)) == a2 )
    {
      v11 = v8[1];
      *(_QWORD *)(v9 + 8 * v10) = v11;
    }
    else
    {
      v11 = a2[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(_QWORD **)(v9 + 16 * (v8[6] & appended)) == a2 )
  {
    *(_QWORD *)(v9 + 16 * (v8[6] & appended)) = *a2;
  }
  v12 = *a2;
  --v8[2];
  *(_QWORD *)a2[1] = v12;
  *(_QWORD *)(v12 + 8) = a2[1];
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v2 + 4);
  v13 = v2[3];
  if ( v13 >= 8 )
    std::_Deallocate<16,0>((void *)*v2, 2 * v13 + 2);
  v2[3] = 7LL;
  v2[2] = 0LL;
  *(_WORD *)v2 = 0;
  std::_Deallocate<16,0>(a2, 0x38uLL);
  return v12;
}
