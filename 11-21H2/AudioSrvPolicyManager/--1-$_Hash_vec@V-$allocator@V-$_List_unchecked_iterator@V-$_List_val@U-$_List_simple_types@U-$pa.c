/*
 * XREFs of ??1?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180008904
 * Callers:
 *     _TSSession::TSSession_::_1_::dtor$19 @ 0x180044A53 (_TSSession--TSSession_--_1_--dtor$19.c)
 *     __dynamic_initializer_for__TsSessionList___::_1_::dtor$2 @ 0x180045E9A (__dynamic_initializer_for__TsSessionList___--_1_--dtor$2.c)
 *     _TSSession::Create_::_1_::dtor$14 @ 0x180045F3B (_TSSession--Create_--_1_--dtor$14.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>>::~_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>>>>>(
        __int64 a1)
{
  __int64 result; // rax

  std::_Deallocate<16,0>(*(char **)a1, (*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
