/*
 * XREFs of ??1JSONOutputArchive@cereal@@UEAA@XZ @ 0x1800C2604
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BD634 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BE188 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 *     _tip::details::test_common_data_0_::data_::_1_::dtor$1 @ 0x1802B9B27 (_tip--details--test_common_data_0_--data_--_1_--dtor$1.c)
 *     ??_EJSONOutputArchive@cereal@@UEAAPEAXI@Z @ 0x180417BB0 (--_EJSONOutputArchive@cereal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@std@@IEAAXXZ @ 0x1800875EC (-_Tidy@-$_Func_class@XAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@w.c)
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800C0DF8 (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 *     ?_Tidy@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAXXZ @ 0x1800C0FB4 (-_Tidy@-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@ce.c)
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800C1A18 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 */

void __fastcall cereal::JSONOutputArchive::~JSONOutputArchive(cereal::JSONOutputArchive *this)
{
  void **v2; // rbx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD **v9; // rcx
  _QWORD *v10; // rcx
  void *v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD **v13; // rcx
  _QWORD *v14; // rcx
  void *v15; // rcx
  unsigned __int64 v16; // rdx
  _QWORD **v17; // rcx
  _QWORD *v18; // rcx
  void *v19; // rcx
  unsigned __int64 v20; // rdx
  _QWORD **v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rbx
  __int64 v25; // rsi
  _QWORD *v26; // rbx
  _QWORD *v27; // rbx
  _QWORD *v28; // rbx
  _QWORD *v29; // rbx
  unsigned __int64 v30; // [rsp+50h] [rbp+30h] BYREF
  void *v31; // [rsp+58h] [rbp+38h] BYREF

  *(_QWORD *)this = &cereal::JSONOutputArchive::`vftable';
  v2 = (void **)((char *)this + 456);
  v3 = (unsigned __int64)(*((_QWORD *)this + 61) - 1LL + *((_QWORD *)this + 60)) >> 2;
  v4 = (*((_DWORD *)this + 122) - 1 + *((_DWORD *)this + 120)) & 3;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8 * (v3 & (*((_QWORD *)this + 59) - 1LL))) + 4 * v4) == 1 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject((_QWORD **)this + 41);
  }
  else if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8 * (v3 & (*((_QWORD *)this + 59) - 1LL))) + 4 * v4) == 3 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndArray(
      (_QWORD **)this + 41,
      v3);
  }
  std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy(v2);
  v5 = *v2;
  *v2 = 0LL;
  operator delete(v5, 0x10uLL);
  std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy((_QWORD *)this + 52);
  v6 = (void *)*((_QWORD *)this + 52);
  *((_QWORD *)this + 52) = 0LL;
  operator delete(v6, 0x10uLL);
  free(*((void **)this + 44));
  operator delete(*((void **)this + 43), 1uLL);
  v7 = (void *)*((_QWORD *)this + 34);
  v8 = (*((_QWORD *)this + 35) - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF8uLL;
  v30 = v8;
  v31 = v7;
  if ( v8 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v31, &v30);
    v8 = v30;
    v7 = v31;
  }
  operator delete(v7, v8);
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  v9 = (_QWORD **)*((_QWORD *)this + 32);
  *v9[1] = 0LL;
  v10 = *v9;
  if ( v10 )
  {
    do
    {
      v26 = (_QWORD *)*v10;
      std::_Deallocate<16,0>(v10, 24LL);
      v10 = v26;
    }
    while ( v26 );
  }
  operator delete(*((void **)this + 32), 0x18uLL);
  v11 = (void *)*((_QWORD *)this + 25);
  v12 = (*((_QWORD *)this + 26) - (_QWORD)v11) & 0xFFFFFFFFFFFFFFF8uLL;
  v30 = v12;
  v31 = v11;
  if ( v12 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v31, &v30);
    v12 = v30;
    v11 = v31;
  }
  operator delete(v11, v12);
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  v13 = (_QWORD **)*((_QWORD *)this + 23);
  *v13[1] = 0LL;
  v14 = *v13;
  if ( v14 )
  {
    do
    {
      v27 = (_QWORD *)*v14;
      std::_Deallocate<16,0>(v14, 32LL);
      v14 = v27;
    }
    while ( v27 );
  }
  operator delete(*((void **)this + 23), 0x20uLL);
  v15 = (void *)*((_QWORD *)this + 16);
  v16 = (*((_QWORD *)this + 17) - (_QWORD)v15) & 0xFFFFFFFFFFFFFFF8uLL;
  v30 = v16;
  v31 = v15;
  if ( v16 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v31, &v30);
    v16 = v30;
    v15 = v31;
  }
  operator delete(v15, v16);
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v17 = (_QWORD **)*((_QWORD *)this + 14);
  *v17[1] = 0LL;
  v18 = *v17;
  if ( v18 )
  {
    do
    {
      v28 = (_QWORD *)*v18;
      std::_Deallocate<16,0>(v18, 32LL);
      v18 = v28;
    }
    while ( v28 );
  }
  operator delete(*((void **)this + 14), 0x20uLL);
  v19 = (void *)*((_QWORD *)this + 8);
  v20 = (*((_QWORD *)this + 9) - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL;
  v30 = v20;
  v31 = v19;
  if ( v20 >= 0x1000 )
  {
    std::_Adjust_manually_vector_aligned(&v31, &v30);
    v20 = v30;
    v19 = v31;
  }
  operator delete(v19, v20);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  v21 = (_QWORD **)*((_QWORD *)this + 6);
  *v21[1] = 0LL;
  v22 = *v21;
  if ( v22 )
  {
    do
    {
      v29 = (_QWORD *)*v22;
      std::_Deallocate<16,0>(v22, 40LL);
      v22 = v29;
    }
    while ( v29 );
  }
  std::_Deallocate<16,0>(*((_QWORD *)this + 6), 40LL);
  v24 = *((_QWORD *)this + 1);
  if ( v24 )
  {
    v25 = *((_QWORD *)this + 2);
    while ( v24 != v25 )
    {
      std::_Func_class<void,winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &>::_Tidy(
        v24,
        v23);
      v24 += 64LL;
    }
    std::_Deallocate<16,0>(
      *((_QWORD *)this + 1),
      (*((_QWORD *)this + 3) - *((_QWORD *)this + 1)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
