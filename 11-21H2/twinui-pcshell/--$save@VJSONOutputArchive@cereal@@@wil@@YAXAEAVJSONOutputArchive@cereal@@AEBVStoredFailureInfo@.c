/*
 * XREFs of ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x18034B8A4
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180085E80 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x180120CE4 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180089570 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??$process@AEAJ@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z @ 0x1801554EC (--$process@AEAJ@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAG@2@V12@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@0$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x18034A90C (--$process@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@_ea_18034A90C.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18034C21C (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall wil::save<cereal::JSONOutputArchive>(__int64 a1, int *a2)
{
  WCHAR *v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // r8
  void *v10; // rcx
  void *v11; // rcx
  __int16 v12; // [rsp+40h] [rbp-C0h] BYREF
  void *v13[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *v14[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+68h] [rbp-98h] BYREF
  int v16; // [rsp+6Ch] [rbp-94h] BYREF
  _QWORD v17[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v18[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v20[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v21[3]; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v22; // [rsp+C8h] [rbp-38h]
  _QWORD v23[3]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v24; // [rsp+E8h] [rbp-18h]
  _QWORD v25[3]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int64 v26; // [rsp+108h] [rbp+8h]
  _QWORD v27[4]; // [rsp+110h] [rbp+10h] BYREF

  v16 = a2[2];
  std::string::string(v25);
  v12 = *((_WORD *)a2 + 32);
  std::string::string(v23);
  v15 = *a2;
  v4 = (WCHAR *)&LocaleName;
  if ( *((_QWORD *)a2 + 3) )
    v4 = (WCHAR *)*((_QWORD *)a2 + 3);
  std::wstring::wstring(v27, v4);
  std::string::string(v21);
  v14[0] = "context";
  v14[1] = v21;
  v13[0] = "message";
  v13[1] = v27;
  v17[0] = "type";
  v17[1] = &v15;
  v18[0] = "module";
  v18[1] = v23;
  v19[0] = "line";
  v19[1] = &v12;
  v20[0] = "file";
  v20[1] = v25;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v6 + 408) = "hr";
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<long &>(*(_QWORD *)(v6 + 32), &v16);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
    *(_QWORD *)(v5 + 32),
    v20,
    (__int64)v19,
    (int)v18,
    (__int64)v17,
    (__int64)v13,
    (__int64)v14);
  if ( v22 >= 0x10 )
  {
    v13[0] = (void *)(v22 + 1);
    v8 = (void *)v21[0];
    v14[0] = (void *)v21[0];
    if ( v22 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v14, (unsigned __int64 *)v13, v7);
      v8 = v14[0];
    }
    operator delete(v8);
  }
  v21[2] = 0LL;
  v22 = 15LL;
  LOBYTE(v21[0]) = 0;
  std::wstring::_Tidy_deallocate((__int64)v27);
  if ( v24 >= 0x10 )
  {
    v13[0] = (void *)(v24 + 1);
    v10 = (void *)v23[0];
    v14[0] = (void *)v23[0];
    if ( v24 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v14, (unsigned __int64 *)v13, v9);
      v10 = v14[0];
    }
    operator delete(v10);
  }
  v23[2] = 0LL;
  v24 = 15LL;
  LOBYTE(v23[0]) = 0;
  if ( v26 >= 0x10 )
  {
    v14[0] = (void *)(v26 + 1);
    v11 = (void *)v25[0];
    v13[0] = (void *)v25[0];
    if ( v26 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v13, (unsigned __int64 *)v14, v9);
      v11 = v13[0];
    }
    operator delete(v11);
  }
}
