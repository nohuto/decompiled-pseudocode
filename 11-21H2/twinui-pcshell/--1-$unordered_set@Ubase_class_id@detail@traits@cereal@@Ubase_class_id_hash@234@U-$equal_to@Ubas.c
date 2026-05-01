/*
 * XREFs of ??1?$unordered_set@Ubase_class_id@detail@traits@cereal@@Ubase_class_id_hash@234@U?$equal_to@Ubase_class_id@detail@traits@cereal@@@std@@V?$allocator@Ubase_class_id@detail@traits@cereal@@@7@@std@@QEAA@XZ @ 0x18034CE30
 * Callers:
 *     _cereal::OutputArchive_cereal::JSONOutputArchive_0_::OutputArchive_cereal::JSONOutputArchive_0__::_1_::dtor$2 @ 0x180218A90 (_cereal--OutputArchive_cereal--JSONOutputArchive_0_--OutputArchive_cereal--JSONOutp_ea_180218A90.c)
 *     _cereal::InputArchive_cereal::JSONInputArchive_0_::InputArchive_cereal::JSONInputArchive_0__::_1_::dtor$2 @ 0x18034C099 (_cereal--InputArchive_cereal--JSONInputArchive_0_--InputArchive_cereal--JSONInputAr_ea_18034C099.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>::~unordered_set<cereal::traits::detail::base_class_id,cereal::traits::detail::base_class_id_hash,std::equal_to<cereal::traits::detail::base_class_id>,std::allocator<cereal::traits::detail::base_class_id>>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void *v4; // rcx
  _QWORD **v5; // rcx
  _QWORD *v6; // rcx
  _QWORD *v7; // rbx
  unsigned __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  void *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(void **)(a1 + 24);
  v9 = v4;
  v8 = (*(_QWORD *)(a1 + 32) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v8 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v9, &v8, a3);
    v4 = v9;
  }
  operator delete(v4);
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD ***)(a1 + 8);
  *v5[1] = 0LL;
  v6 = *v5;
  if ( v6 )
  {
    do
    {
      v7 = (_QWORD *)*v6;
      std::_Deallocate<16,0>(v6, 0x28uLL);
      v6 = v7;
    }
    while ( v7 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x28uLL);
}
