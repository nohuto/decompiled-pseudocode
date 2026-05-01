/*
 * XREFs of ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180085E80
 * Callers:
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x18011FE9C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ??$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAX$$QEAW4NodeType@JSONOutputArchive@cereal@@@Z @ 0x180086C28 (--$_Emplace_back_internal@W4NodeType@JSONOutputArchive@cereal@@@-$deque@W4NodeType@JSONOutputArc.c)
 *     ??$_Emplace_back_internal@I@?$deque@IV?$allocator@I@std@@@std@@AEAAX$$QEAI@Z @ 0x180086CEC (--$_Emplace_back_internal@I@-$deque@IV-$allocator@I@std@@@std@@AEAAX$$QEAI@Z.c)
 *     ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800871B0 (--0-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800874B0 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?startNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087AE0 (-startNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x180087B90 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x180087BE0 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x180087E30 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x180087F24 (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 *     ?_Tidy@?$deque@W4NodeType@JSONOutputArchive@cereal@@V?$allocator@W4NodeType@JSONOutputArchive@cereal@@@std@@@std@@AEAAXXZ @ 0x180089004 (-_Tidy@-$deque@W4NodeType@JSONOutputArchive@cereal@@V-$allocator@W4NodeType@JSONOutputArchive@ce.c)
 *     ?_Tidy@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXXZ @ 0x18008909C (-_Tidy@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@IEAAXXZ.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x180089160 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x1800891F0 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18010E4E8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x18034B8A4 (--$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@.c)
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x18034E364 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall tip::details::test_common_data<0>::data(_QWORD *a1, __int64 a2, unsigned int a3)
{
  void ***v6; // rax
  void ***v7; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r13
  char *v12; // r8
  char *v13; // rsi
  void **i; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rsi
  cereal::JSONOutputArchive *v18; // rdi
  void **v19; // r9
  _QWORD *v20; // rcx
  __int64 *v21; // rdi
  __int64 *v22; // r13
  __int64 v23; // rax
  __int64 v24; // rsi
  cereal::JSONOutputArchive *v25; // rdi
  __int64 v26; // r13
  _QWORD *v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // r15
  unsigned __int64 v30; // r8
  __int64 v31; // rdx
  void *v32; // rcx
  void *v33; // rcx
  void *v34; // rcx
  void *v35; // rdx
  _QWORD **v36; // rcx
  _QWORD *v37; // rcx
  void *v38; // rcx
  void *v39; // rdx
  _QWORD **v40; // rcx
  _QWORD *v41; // rcx
  void *v42; // rcx
  void *v43; // rdx
  _QWORD **v44; // rcx
  _QWORD *v45; // rcx
  void *v46; // rcx
  void *v47; // rdx
  _QWORD **v48; // rcx
  _QWORD *v49; // rcx
  __int64 v50; // rbx
  __int64 *v52; // rdx
  __int64 v53; // r12
  _QWORD *v54; // rdi
  _QWORD *v55; // rdi
  _QWORD *v56; // rdi
  _QWORD *v57; // rbx
  __int64 v58; // rdi
  void *v59; // [rsp+20h] [rbp-368h] BYREF
  int v60; // [rsp+28h] [rbp-360h]
  _QWORD *v61; // [rsp+30h] [rbp-358h]
  __int64 v62; // [rsp+38h] [rbp-350h]
  void **v63; // [rsp+40h] [rbp-348h] BYREF
  __int64 v64; // [rsp+48h] [rbp-340h]
  __int64 v65; // [rsp+50h] [rbp-338h]
  __int64 v66; // [rsp+58h] [rbp-330h]
  __int64 v67; // [rsp+60h] [rbp-328h]
  _QWORD **v68; // [rsp+70h] [rbp-318h]
  void *v69[2]; // [rsp+80h] [rbp-308h]
  __int64 v70; // [rsp+90h] [rbp-2F8h]
  _QWORD **v71; // [rsp+B0h] [rbp-2D8h]
  void *v72[2]; // [rsp+C0h] [rbp-2C8h]
  __int64 v73; // [rsp+D0h] [rbp-2B8h]
  _QWORD **v74; // [rsp+F8h] [rbp-290h]
  void *v75; // [rsp+108h] [rbp-280h]
  __int128 v76; // [rsp+110h] [rbp-278h]
  void *v77; // [rsp+140h] [rbp-248h]
  void *v78[2]; // [rsp+150h] [rbp-238h]
  __int64 v79; // [rsp+160h] [rbp-228h]
  void **v80; // [rsp+180h] [rbp-208h] BYREF
  void ***v81; // [rsp+188h] [rbp-200h] BYREF
  void *v82[2]; // [rsp+190h] [rbp-1F8h]
  void *Block[2]; // [rsp+1A0h] [rbp-1E8h]
  __m128i si128; // [rsp+1B0h] [rbp-1D8h]
  int v85; // [rsp+1C0h] [rbp-1C8h]
  char v86; // [rsp+1C4h] [rbp-1C4h]
  char v87; // [rsp+1C8h] [rbp-1C0h]
  __int64 v88; // [rsp+1CCh] [rbp-1BCh]
  __int64 v89; // [rsp+1D8h] [rbp-1B0h]
  void *v90[2]; // [rsp+1E0h] [rbp-1A8h] BYREF
  __int128 v91; // [rsp+1F0h] [rbp-198h]
  __int64 v92; // [rsp+200h] [rbp-188h]
  void *v93; // [rsp+208h] [rbp-180h] BYREF
  __int128 v94; // [rsp+210h] [rbp-178h]
  __int128 v95; // [rsp+220h] [rbp-168h]
  _QWORD v96[2]; // [rsp+230h] [rbp-158h] BYREF
  void *v97; // [rsp+240h] [rbp-148h] BYREF
  void **v98; // [rsp+248h] [rbp-140h] BYREF
  _BYTE v99[96]; // [rsp+250h] [rbp-138h] BYREF
  __int64 v100; // [rsp+2B0h] [rbp-D8h]
  int v101; // [rsp+2B8h] [rbp-D0h]
  _BYTE v102[104]; // [rsp+2C8h] [rbp-C0h] BYREF
  void *v103; // [rsp+330h] [rbp-58h] BYREF
  __int64 v104; // [rsp+338h] [rbp-50h]

  v61 = a1;
  v62 = a2;
  v60 = 0;
  if ( a3 )
  {
    v96[0] = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::istream'};
    v97 = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vbtable'{for `std::ostream'};
    std::ios::ios(v102);
    v60 = 2;
    std::iostream::basic_iostream<char>(v96, &v98, 0LL);
    *(_QWORD *)((char *)v96 + *(int *)(v96[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
    *(_DWORD *)((char *)&v95 + *(int *)(v96[0] + 4LL) + 12) = *(_DWORD *)(v96[0] + 4LL) - 152;
    std::streambuf::streambuf(&v98);
    v98 = &std::stringbuf::`vftable';
    v100 = 0LL;
    v101 = 0;
    cereal::OutputArchive<cereal::JSONOutputArchive,0>::OutputArchive<cereal::JSONOutputArchive,0>(&v63, &v63);
    v63 = &cereal::JSONOutputArchive::`vftable';
    v80 = &v97;
    v81 = &v80;
    *(_OWORD *)v82 = 0LL;
    *(_OWORD *)Block = 0LL;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v85 = 324;
    v86 = 0;
    v87 = 32;
    v88 = 4LL;
    v89 = 0LL;
    *(_OWORD *)v90 = 0LL;
    v91 = 0LL;
    v92 = 0LL;
    v6 = (void ***)std::_Allocate<16,std::_Default_allocate_traits,0>(16LL);
    v6[1] = 0LL;
    v90[0] = v6;
    *v6 = v90;
    v93 = 0LL;
    v94 = 0LL;
    v95 = 0LL;
    v7 = (void ***)std::_Allocate<16,std::_Default_allocate_traits,0>(16LL);
    v7[1] = 0LL;
    v93 = v7;
    *v7 = &v93;
    v85 = 324;
    v87 = 32;
    LODWORD(v88) = 4;
    LODWORD(v59) = 0;
    std::deque<unsigned int>::_Emplace_back_internal<unsigned int>(v90, &v59);
    LODWORD(v59) = 0;
    std::deque<enum cereal::JSONOutputArchive::NodeType>::_Emplace_back_internal<enum cereal::JSONOutputArchive::NodeType>(
      &v93,
      &v59);
    v8 = *(_DWORD *)(a1[1] + 20LL) << 8;
    v9 = *(_QWORD *)(*(_QWORD *)(v67 + 32) + 32LL);
    *(_QWORD *)(v9 + 408) = "version";
    v10 = *(_QWORD *)(v9 + 32);
    cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v10 + 32));
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 32) + 32LL);
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
      v11 + 328,
      6LL);
    v13 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)v8, (unsigned int)&v103, v12);
    for ( i = &v103; i != (void **)v13; i = (void **)((char *)i + 1) )
      std::ostream::put(**(_QWORD **)(v11 + 328), *(unsigned __int8 *)i);
    (*(void (__fastcall **)(_QWORD, void ***, _QWORD))(*(_QWORD *)*a1 + 8LL))(*a1, &v63, a3);
    if ( (a3 & 1) != 0 )
    {
      v15 = v67;
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 + 32) + 32LL) + 32LL);
      *(_QWORD *)(v16 + 408) = "log";
      v17 = *(_QWORD *)(v16 + 32);
      v18 = *(cereal::JSONOutputArchive **)(v17 + 32);
      cereal::JSONOutputArchive::writeName(v18);
      LODWORD(v59) = 0;
      std::deque<enum cereal::JSONOutputArchive::NodeType>::_Emplace_back_internal<enum cereal::JSONOutputArchive::NodeType>(
        (char *)v18 + 456,
        &v59);
      LODWORD(v59) = 0;
      std::deque<unsigned int>::_Emplace_back_internal<unsigned int>((char *)v18 + 416, &v59);
      v19 = *(void ***)(*(_QWORD *)(v17 + 32) + 32LL);
      v59 = v19;
      v20 = (_QWORD *)*((_QWORD *)v19[4] + 4);
      v104 = v20[60] + v20[61];
      v103 = v20 + 57;
      *(_DWORD *)(*(_QWORD *)(v20[58] + 8 * (((unsigned __int64)(v104 - 1) >> 2) & (v20[59] - 1LL)))
                + 4LL * (((_BYTE)v104 - 1) & 3)) = 2;
      v21 = (__int64 *)a1[7];
      v22 = (__int64 *)a1[8];
      while ( v21 != v22 )
      {
        v103 = v19[4];
        cereal::JSONOutputArchive::writeName(*((cereal::JSONOutputArchive **)v103 + 4));
        v52 = v21;
        if ( (unsigned __int64)v21[3] >= 0x10 )
          v52 = (__int64 *)*v21;
        tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
          *(_QWORD *)(*((_QWORD *)v103 + 4) + 32LL) + 328LL,
          v52,
          *((unsigned int *)v21 + 4));
        v21 += 4;
        v19 = (void **)v59;
      }
      cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v17 + 32));
      v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 32) + 32LL) + 32LL);
      *(_QWORD *)(v23 + 408) = "errors";
      v24 = *(_QWORD *)(v23 + 32);
      v25 = *(cereal::JSONOutputArchive **)(v24 + 32);
      cereal::JSONOutputArchive::writeName(v25);
      LODWORD(v59) = 0;
      std::deque<enum cereal::JSONOutputArchive::NodeType>::_Emplace_back_internal<enum cereal::JSONOutputArchive::NodeType>(
        (char *)v25 + 456,
        &v59);
      LODWORD(v59) = 0;
      std::deque<unsigned int>::_Emplace_back_internal<unsigned int>((char *)v25 + 416, &v59);
      v26 = *(_QWORD *)(*(_QWORD *)(v24 + 32) + 32LL);
      v27 = *(_QWORD **)(*(_QWORD *)(v26 + 32) + 32LL);
      v104 = v27[60] + v27[61];
      v103 = v27 + 57;
      *(_DWORD *)(*(_QWORD *)(v27[58] + 8 * (((unsigned __int64)(v104 - 1) >> 2) & (v27[59] - 1LL)))
                + 4LL * (((_BYTE)v104 - 1) & 3)) = 2;
      v28 = a1[4];
      v29 = a1[5];
      while ( v28 != v29 )
      {
        v53 = *(_QWORD *)(v26 + 32);
        cereal::JSONOutputArchive::startNode(*(cereal::JSONOutputArchive **)(v53 + 32));
        wil::save<cereal::JSONOutputArchive>(*(_QWORD *)(*(_QWORD *)(v53 + 32) + 32LL), v28);
        cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v53 + 32));
        v28 += 168LL;
      }
      cereal::JSONOutputArchive::finishNode(*(cereal::JSONOutputArchive **)(v24 + 32));
    }
    v63 = &cereal::JSONOutputArchive::`vftable';
    v103 = &v93;
    v104 = v95 + *((_QWORD *)&v95 + 1);
    v30 = (unsigned __int64)(v95 + *((_QWORD *)&v95 + 1) - 1) >> 2;
    v31 = ((_DWORD)v95 + DWORD2(v95) - 1) & 3;
    if ( *(_DWORD *)(*(_QWORD *)(v94 + 8 * (v30 & (*((_QWORD *)&v94 + 1) - 1LL))) + 4 * v31) == 1 )
    {
      tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject(&v81);
    }
    else
    {
      v103 = &v93;
      v104 = v95 + *((_QWORD *)&v95 + 1);
      if ( *(_DWORD *)(*(_QWORD *)(v94 + 8 * (v30 & (*((_QWORD *)&v94 + 1) - 1LL))) + 4 * v31) == 3 )
        tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndArray(&v81);
    }
    std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy(&v93);
    v32 = v93;
    v93 = 0LL;
    operator delete(v32, 0x10uLL);
    std::deque<enum cereal::JSONOutputArchive::NodeType>::_Tidy(v90);
    v33 = v90[0];
    v90[0] = 0LL;
    operator delete(v33, 0x10uLL);
    free(Block[0]);
    operator delete(v82[1], 1uLL);
    v34 = v78[0];
    v35 = (void *)(8 * (((char *)v78[1] - (char *)v78[0]) >> 3));
    v59 = v35;
    v103 = v78[0];
    if ( (unsigned __int64)v35 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v103, (unsigned __int64 *)&v59);
      v35 = v59;
      v34 = v103;
    }
    operator delete(v34, (unsigned __int64)v35);
    *(_OWORD *)v78 = 0LL;
    v79 = 0LL;
    v36 = (_QWORD **)v77;
    **((_QWORD **)v77 + 1) = 0LL;
    v37 = *v36;
    if ( v37 )
    {
      do
      {
        v54 = (_QWORD *)*v37;
        std::_Deallocate<16,0>(v37, 24LL);
        v37 = v54;
      }
      while ( v54 );
    }
    operator delete(v77, 0x18uLL);
    v38 = v75;
    v39 = (void *)(8 * ((__int64)(v76 - (_QWORD)v75) >> 3));
    v103 = v39;
    v59 = v75;
    if ( (unsigned __int64)v39 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v59, (unsigned __int64 *)&v103);
      v39 = v103;
      v38 = v59;
    }
    operator delete(v38, (unsigned __int64)v39);
    v75 = 0LL;
    v76 = 0LL;
    v40 = v74;
    *v74[1] = 0LL;
    v41 = *v40;
    if ( v41 )
    {
      do
      {
        v55 = (_QWORD *)*v41;
        std::_Deallocate<16,0>(v41, 32LL);
        v41 = v55;
      }
      while ( v55 );
    }
    std::_Deallocate<16,0>(v74, 32LL);
    v42 = v72[0];
    v43 = (void *)(8 * (((char *)v72[1] - (char *)v72[0]) >> 3));
    v103 = v43;
    v59 = v72[0];
    if ( (unsigned __int64)v43 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v59, (unsigned __int64 *)&v103);
      v43 = v103;
      v42 = v59;
    }
    operator delete(v42, (unsigned __int64)v43);
    *(_OWORD *)v72 = 0LL;
    v73 = 0LL;
    v44 = v71;
    *v71[1] = 0LL;
    v45 = *v44;
    if ( v45 )
    {
      do
      {
        v56 = (_QWORD *)*v45;
        std::_Deallocate<16,0>(v45, 32LL);
        v45 = v56;
      }
      while ( v56 );
    }
    std::_Deallocate<16,0>(v71, 32LL);
    v46 = v69[0];
    v47 = (void *)(8 * (((char *)v69[1] - (char *)v69[0]) >> 3));
    v103 = v47;
    v59 = v69[0];
    if ( (unsigned __int64)v47 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v59, (unsigned __int64 *)&v103);
      v47 = v103;
      v46 = v59;
    }
    operator delete(v46, (unsigned __int64)v47);
    *(_OWORD *)v69 = 0LL;
    v70 = 0LL;
    v48 = v68;
    *v68[1] = 0LL;
    v49 = *v48;
    if ( v49 )
    {
      do
      {
        v57 = (_QWORD *)*v49;
        std::_Deallocate<16,0>(v49, 40LL);
        v49 = v57;
      }
      while ( v57 );
    }
    std::_Deallocate<16,0>(v68, 40LL);
    v50 = v64;
    if ( v64 )
    {
      v58 = v65;
      if ( v64 != v65 )
      {
        do
        {
          std::_Func_class<void,>::_Tidy(v50);
          v50 += 64LL;
        }
        while ( v50 != v58 );
        v50 = v64;
      }
      std::_Deallocate<16,0>(v50, (v66 - v50) & 0xFFFFFFFFFFFFFFC0uLL);
    }
    std::stringbuf::str(&v98, a2);
    *(_QWORD *)((char *)v96 + *(int *)(v96[0] + 4LL)) = &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::`vftable';
    *(_DWORD *)((char *)&v95 + *(int *)(v96[0] + 4LL) + 12) = *(_DWORD *)(v96[0] + 4LL) - 152;
    v98 = &std::stringbuf::`vftable';
    std::stringbuf::_Tidy(&v98);
    std::streambuf::~streambuf<char,std::char_traits<char>>(&v98);
    std::iostream::~basic_iostream<char,std::char_traits<char>>(v99);
    std::ios::~ios<char,std::char_traits<char>>(v102);
    return a2;
  }
  else
  {
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 24) = 15LL;
    *(_BYTE *)a2 = 0;
    return a2;
  }
}
