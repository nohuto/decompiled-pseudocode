/*
 * XREFs of ??$_Emplace_reallocate@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@QEAU21@$$QEAU21@@Z @ 0x1803F52A0
 * Callers:
 *     ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x1803FEA1C (-GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV-$vector@U-$pair@KV-$ba.c)
 * Callees:
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x1800C28A0 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@YAPEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@QEAU10@0PEAU10@AEAV?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@0@@Z @ 0x1803F66B8 (--$_Uninitialized_move@PEAU-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 *     ?_Change_array@?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@AEAAXQEAU?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@_K1@Z @ 0x1804099DC (-_Change_array@-$vector@U-$pair@KV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@.c)
 */

char *__fastcall std::vector<std::pair<unsigned long,std::wstring>>::_Emplace_reallocate<std::pair<unsigned long,std::wstring>>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rax
  __int64 v13; // rdi
  char *v14; // rsi
  __int64 v15; // rdx
  char *v16; // r8
  __int64 v17; // rcx
  char *result; // rax
  char *v19; // [rsp+20h] [rbp-48h]
  void *v20; // [rsp+20h] [rbp-48h]
  __int64 v21; // [rsp+70h] [rbp+8h]

  v5 = (a2 - *a1) / 40;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  v7 = 0x666666666666666LL;
  if ( v6 == 0x666666666666666LL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 3);
  v10 = v9 >> 1;
  if ( v9 <= 0x666666666666666LL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v8;
  }
  size_of = std::_Get_size_of_n<40>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (__int64)v12;
  v19 = v12;
  v14 = &v12[40 * v5];
  try
  {
    *(_DWORD *)v14 = *(_DWORD *)a3;
    *((_QWORD *)v14 + 1) = 0LL;
    *((_QWORD *)v14 + 3) = 0LL;
    *((_QWORD *)v14 + 4) = 0LL;
    *(_OWORD *)(v14 + 8) = *(_OWORD *)(a3 + 8);
    *(_OWORD *)(v14 + 24) = *(_OWORD *)(a3 + 24);
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_QWORD *)(a3 + 32) = 7LL;
    *(_WORD *)(a3 + 8) = 0;
    v21 = (__int64)v14;
    v15 = a1[1];
    v16 = v12;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<std::pair<unsigned long,std::wstring> *,std::allocator<std::pair<unsigned long,std::wstring>>>(
        v17,
        a2,
        v12);
      v21 = v13;
      v16 = v14 + 40;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<std::pair<unsigned long,std::wstring> *,std::allocator<std::pair<unsigned long,std::wstring>>>(
      v17,
      v15,
      v16);
    std::vector<std::pair<unsigned long,std::wstring>>::_Change_array(a1, v13, v8, v7, v19);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::pair<unsigned long,std::wstring>>>(v21, (__int64)(v14 + 40));
    std::_Deallocate<16,0>(v20, 40 * v7);
    throw;
  }
  return result;
}
