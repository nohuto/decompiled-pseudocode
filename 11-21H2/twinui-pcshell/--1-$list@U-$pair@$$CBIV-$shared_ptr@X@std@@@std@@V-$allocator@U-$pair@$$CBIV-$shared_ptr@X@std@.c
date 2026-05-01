/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$shared_ptr@X@std@@@std@@V?$allocator@U?$pair@$$CBIV?$shared_ptr@X@std@@@std@@@2@@std@@QEAA@XZ @ 0x18034CB40
 * Callers:
 *     _cereal::InputArchive_cereal::JSONInputArchive_0_::InputArchive_cereal::JSONInputArchive_0__::_1_::dtor$16 @ 0x18034C0A9 (_cereal--InputArchive_cereal--JSONInputArchive_0_--InputArchive_cereal--JSONInputAr_ea_18034C0A9.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned int const,std::shared_ptr<void>>>::~list<std::pair<unsigned int const,std::shared_ptr<void>>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rbx
  std::_Ref_count_base *v4; // rcx
  _QWORD *v5; // rsi

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
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
  std::_Deallocate<16,0>(*a1, 0x28uLL);
}
