/*
 * XREFs of ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803490BC
 * Callers:
 *     ??1?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x18034C7B8 (--1-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAA@XZ.c)
 *     ??1?$list@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18034CB14 (--1-$list@U-$pair@$$CBIV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@std@@V-$al.c)
 *     ??1?$unordered_map@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@I@2@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18034CCA8 (--1-$unordered_map@IV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@U-$hash@I@2@U-.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall std::_List_node<std::pair<unsigned int const,std::string>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::string>,void *>>>(
        unsigned __int64 a1,
        _QWORD **a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rdi
  void *v6; // rcx
  unsigned __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  v7 = a1;
  *a2[1] = 0LL;
  v3 = *a2;
  if ( *a2 )
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
          std::_Adjust_manually_vector_aligned(&v8, &v7, a3);
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
}
