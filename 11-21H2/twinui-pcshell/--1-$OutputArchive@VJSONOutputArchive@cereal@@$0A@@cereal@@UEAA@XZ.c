/*
 * XREFs of ??1?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAA@XZ @ 0x180121154
 * Callers:
 *     ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x180121074 (--1JSONOutputArchive@cereal@@UEAA@XZ.c)
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$7 @ 0x180218940 (_tip--details--test_common_data_0_--data_--_1_--dtor$7.c)
 *     _cereal::JSONOutputArchive::JSONOutputArchive_::_1_::dtor$0 @ 0x1802201E1 (_cereal--JSONOutputArchive--JSONOutputArchive_--_1_--dtor$0.c)
 *     ??_E?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z @ 0x18034D830 (--_E-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::~OutputArchive<cereal::JSONOutputArchive,0>(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rdx
  _QWORD **v4; // rcx
  _QWORD *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _QWORD **v14; // rcx
  _QWORD *v15; // rcx
  void *v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  _QWORD **v19; // rcx
  _QWORD *v20; // rcx
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  _QWORD *v24; // rbx
  _QWORD *v25; // rbx
  _QWORD *v26; // rbx
  _QWORD *v27; // rbx
  __int64 v28; // rsi
  unsigned __int64 v29; // [rsp+50h] [rbp+30h] BYREF
  void *v30; // [rsp+58h] [rbp+38h] BYREF

  v2 = *(void **)(a1 + 272);
  v30 = v2;
  v3 = (*(_QWORD *)(a1 + 280) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL;
  v29 = v3;
  if ( v3 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v30, &v29);
    v3 = v29;
    v2 = v30;
  }
  operator delete(v2, v3);
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_QWORD *)(a1 + 288) = 0LL;
  v4 = *(_QWORD ***)(a1 + 256);
  *v4[1] = 0LL;
  v5 = *v4;
  if ( v5 )
  {
    do
    {
      v24 = (_QWORD *)*v5;
      std::_Deallocate<16,0>(v5, 24LL);
      v5 = v24;
    }
    while ( v24 );
  }
  operator delete(*(void **)(a1 + 256), 0x18uLL);
  v6 = *(void **)(a1 + 200);
  v7 = *(_QWORD *)(a1 + 208) - (_QWORD)v6;
  v30 = v6;
  v8 = v7 & 0xFFFFFFFFFFFFFFF8uLL;
  v29 = v8;
  if ( v8 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v30, &v29);
    v8 = v29;
    v6 = v30;
  }
  operator delete(v6, v8);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  v9 = *(_QWORD ***)(a1 + 184);
  *v9[1] = 0LL;
  v10 = *v9;
  if ( v10 )
  {
    do
    {
      v25 = (_QWORD *)*v10;
      std::_Deallocate<16,0>(v10, 32LL);
      v10 = v25;
    }
    while ( v25 );
  }
  operator delete(*(void **)(a1 + 184), 0x20uLL);
  v11 = *(void **)(a1 + 128);
  v12 = *(_QWORD *)(a1 + 136) - (_QWORD)v11;
  v30 = v11;
  v13 = v12 & 0xFFFFFFFFFFFFFFF8uLL;
  v29 = v13;
  if ( v13 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v30, &v29);
    v13 = v29;
    v11 = v30;
  }
  operator delete(v11, v13);
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  v14 = *(_QWORD ***)(a1 + 112);
  *v14[1] = 0LL;
  v15 = *v14;
  if ( v15 )
  {
    do
    {
      v26 = (_QWORD *)*v15;
      std::_Deallocate<16,0>(v15, 32LL);
      v15 = v26;
    }
    while ( v26 );
  }
  operator delete(*(void **)(a1 + 112), 0x20uLL);
  v16 = *(void **)(a1 + 64);
  v17 = *(_QWORD *)(a1 + 72) - (_QWORD)v16;
  v30 = v16;
  v18 = v17 & 0xFFFFFFFFFFFFFFF8uLL;
  v29 = v18;
  if ( v18 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v30, &v29);
    v18 = v29;
    v16 = v30;
  }
  operator delete(v16, v18);
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v19 = *(_QWORD ***)(a1 + 48);
  *v19[1] = 0LL;
  v20 = *v19;
  if ( v20 )
  {
    do
    {
      v27 = (_QWORD *)*v20;
      std::_Deallocate<16,0>(v20, 40LL);
      v20 = v27;
    }
    while ( v27 );
  }
  result = std::_Deallocate<16,0>(*(_QWORD *)(a1 + 48), 40LL);
  v23 = *(_QWORD *)(a1 + 8);
  if ( v23 )
  {
    v28 = *(_QWORD *)(a1 + 16);
    if ( v23 != v28 )
    {
      do
      {
        std::_Func_class<void,>::_Tidy(v23, v22);
        v23 += 64LL;
      }
      while ( v23 != v28 );
      v23 = *(_QWORD *)(a1 + 8);
    }
    result = std::_Deallocate<16,0>(v23, (*(_QWORD *)(a1 + 24) - v23) & 0xFFFFFFFFFFFFFFC0uLL);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
