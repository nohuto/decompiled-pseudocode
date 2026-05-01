/*
 * XREFs of ??1?$unordered_map@IV?$shared_ptr@X@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@X@std@@@std@@@2@@std@@QEAA@XZ @ 0x18034CCF8
 * Callers:
 *     _cereal::InputArchive_cereal::JSONInputArchive_0_::InputArchive_cereal::JSONInputArchive_0__::_1_::dtor$3 @ 0x18034C0C9 (_cereal--InputArchive_cereal--JSONInputArchive_0_--InputArchive_cereal--JSONInputAr_ea_18034C0C9.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::unordered_map<unsigned int,std::shared_ptr<void>>::~unordered_map<unsigned int,std::shared_ptr<void>>(
        __int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rbx
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rsi

  std::_Deallocate<16,0>(*(void **)(a1 + 24), (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v2 = *(_QWORD ***)(a1 + 8);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (std::_Ref_count_base *)v3[4];
      v5 = (_QWORD *)*v3;
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      std::_Deallocate<16,0>(v3, 0x28uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x28uLL);
}
