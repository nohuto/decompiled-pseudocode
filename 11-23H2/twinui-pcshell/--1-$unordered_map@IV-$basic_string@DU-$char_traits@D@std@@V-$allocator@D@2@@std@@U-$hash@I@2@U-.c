/*
 * XREFs of ??1?$unordered_map@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180416EB4
 * Callers:
 *     _cereal::InputArchive_cereal::JSONInputArchive_0_::InputArchive_cereal::JSONInputArchive_0__::_1_::dtor$4 @ 0x1802C4694 (_cereal--InputArchive_cereal--JSONInputArchive_0_--InputArchive_cereal--JSONInputAr_ea_1802C4694.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::unordered_map<unsigned int,std::string>::~unordered_map<unsigned int,std::string>(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rsi
  void *v6; // rcx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

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
      v4 = v3[6];
      v5 = (_QWORD *)*v3;
      if ( v4 >= 0x10 )
      {
        v6 = (void *)v3[3];
        v7 = v4 + 1;
        v8 = v6;
        if ( v4 + 1 >= 0x1000 )
        {
          std::_Adjust_manually_vector_aligned(&v8, &v7);
          v6 = v8;
        }
        operator delete(v6);
      }
      v3[5] = 0LL;
      v3[6] = 15LL;
      *((_BYTE *)v3 + 24) = 0;
      std::_Deallocate<16,0>(v3, 0x38uLL);
      v3 = v5;
    }
    while ( v5 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 8), 0x38uLL);
}
