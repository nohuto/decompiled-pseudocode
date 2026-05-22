/*
 * XREFs of ?_Move_assign@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@AEAAXAEAV12@U_Equal_allocators@2@@Z @ 0x1800893F4
 * Callers:
 *     ?ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimation@234@PEAV?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@@std@@PEAPEAVCompositionPropertyAnimator@234@@Z @ 0x18004DF00 (-ConnectAnimation@ProxyObject@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEAVCompositionAnimati.c)
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UParameterOverrideEntry@Composition@UI@Windows@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180089490 (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UPa.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,Windows::UI::Composition::ParameterOverrideEntry,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Windows::UI::Composition::ParameterOverrideEntry>>,0>>::_Move_assign(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx

  std::_Hash<std::_Umap_traits<std::wstring,Windows::UI::Composition::ParameterOverrideEntry,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,Windows::UI::Composition::ParameterOverrideEntry>>,0>>::clear();
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 8) = v4;
  v6 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = v5;
  v7 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = v6;
  v8 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v7;
  v9 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v8;
  v10 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = v9;
  v11 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 32) = v10;
  v12 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v11;
  v13 = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a2 + 40) = v12;
  v14 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = v13;
  result = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v14;
  v16 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 56) = result;
  *(_QWORD *)(a2 + 56) = v16;
  return result;
}
