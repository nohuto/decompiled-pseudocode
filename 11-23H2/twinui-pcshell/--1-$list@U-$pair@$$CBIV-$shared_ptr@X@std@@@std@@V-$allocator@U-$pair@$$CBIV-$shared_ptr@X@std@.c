/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$shared_ptr@X@std@@@std@@V?$allocator@U?$pair@$$CBIV?$shared_ptr@X@std@@@std@@@2@@std@@QEAA@XZ @ 0x180416D90
 * Callers:
 *     _cereal::InputArchive_cereal::JSONInputArchive_0_::InputArchive_cereal::JSONInputArchive_0__::_1_::dtor$16 @ 0x1802C46AD (_cereal--InputArchive_cereal--JSONInputArchive_0_--InputArchive_cereal--JSONInputAr_ea_1802C46AD.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
