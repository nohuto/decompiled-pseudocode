/*
 * XREFs of ??1?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x18034C7B8
 * Callers:
 *     _cereal::JSONInputArchive::JSONInputArchive_::_1_::dtor$0 @ 0x18034C5E0 (_cereal--JSONInputArchive--JSONInputArchive_--_1_--dtor$0.c)
 *     ??1JSONInputArchive@cereal@@UEAA@XZ @ 0x18034D288 (--1JSONInputArchive@cereal@@UEAA@XZ.c)
 *     ??_G?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x18034D770 (--_G-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1803490BC (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIV-$basic_string@DU-$char_traits@D@std@.c)
 */

void __fastcall cereal::InputArchive<cereal::JSONInputArchive,0>::~InputArchive<cereal::JSONInputArchive,0>(__int64 a1)
{
  _QWORD **v2; // rcx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  _QWORD **v7; // rcx
  _QWORD *v8; // rbx
  std::_Ref_count_base *v9; // rcx
  _QWORD *v10; // rsi
  __int64 v11; // r8
  void *v12; // rcx
  __int64 v13; // rdx
  _QWORD **v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  char *v18; // rbx
  char *v19; // rsi
  unsigned __int64 v20; // [rsp+40h] [rbp+8h] BYREF
  void *v21; // [rsp+48h] [rbp+10h] BYREF

  std::_Deallocate<16,0>(*(void **)(a1 + 256), (*(_QWORD *)(a1 + 264) - *(_QWORD *)(a1 + 256)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  v2 = *(_QWORD ***)(a1 + 240);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 240), 0x20uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 192), (*(_QWORD *)(a1 + 200) - *(_QWORD *)(a1 + 192)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  std::_List_node<std::pair<unsigned int const,std::string>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,std::string>,void *>>>(
    v5,
    *(_QWORD ***)(a1 + 176),
    v6);
  std::_Deallocate<16,0>(*(void **)(a1 + 176), 0x38uLL);
  std::_Deallocate<16,0>(*(void **)(a1 + 128), (*(_QWORD *)(a1 + 136) - *(_QWORD *)(a1 + 128)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v7 = *(_QWORD ***)(a1 + 112);
  *v7[1] = 0LL;
  v8 = *v7;
  if ( *v7 )
  {
    do
    {
      v9 = (std::_Ref_count_base *)v8[4];
      v10 = (_QWORD *)*v8;
      if ( v9 )
        std::_Ref_count_base::_Decref(v9);
      std::_Deallocate<16,0>(v8, 0x28uLL);
      v8 = v10;
    }
    while ( v10 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 112), 0x28uLL);
  v12 = *(void **)(a1 + 64);
  v13 = *(_QWORD *)(a1 + 72) - (_QWORD)v12;
  v21 = v12;
  v20 = v13 & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (v13 & 0xFFFFFFFFFFFFFFF8uLL) >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v21, &v20, v11);
    v12 = v21;
  }
  operator delete(v12);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v14 = *(_QWORD ***)(a1 + 48);
  *v14[1] = 0LL;
  v15 = *v14;
  if ( v15 )
  {
    do
    {
      v16 = (_QWORD *)*v15;
      std::_Deallocate<16,0>(v15, 0x28uLL);
      v15 = v16;
    }
    while ( v16 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 48), 0x28uLL);
  v18 = *(char **)(a1 + 8);
  if ( v18 )
  {
    v19 = *(char **)(a1 + 16);
    if ( v18 != v19 )
    {
      do
      {
        std::_Func_class<void,>::_Tidy((__int64)v18, v17);
        v18 += 64;
      }
      while ( v18 != v19 );
      v18 = *(char **)(a1 + 8);
    }
    std::_Deallocate<16,0>(v18, (*(_QWORD *)(a1 + 24) - (_QWORD)v18) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
