/*
 * XREFs of ??$load@VJSONInputArchive@cereal@@@wil@@YAXAEAVJSONInputArchive@cereal@@AEAVStoredFailureInfo@0@@Z @ 0x180414AA8
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1801B2110 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180045680 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAG@2@V32@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@1$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x180415418 (--$process@V-$NameValuePair@AEAJ@cereal@@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@s.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall wil::load<cereal::JSONInputArchive>(int a1, wil::StoredFailureInfo *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  unsigned __int16 v10; // [rsp+40h] [rbp-C0h] BYREF
  int v11; // [rsp+44h] [rbp-BCh] BYREF
  int v12; // [rsp+48h] [rbp-B8h] BYREF
  void *v13[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v14[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v15[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v16[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v17[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v18[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v19[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v20[6]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v21; // [rsp+D8h] [rbp-28h]
  _QWORD *v22; // [rsp+F8h] [rbp-8h]
  int v23; // [rsp+100h] [rbp+0h]
  _QWORD *v24; // [rsp+108h] [rbp+8h]
  _QWORD *v25; // [rsp+140h] [rbp+40h]
  _QWORD v26[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v27; // [rsp+170h] [rbp+70h]
  unsigned __int64 v28; // [rsp+178h] [rbp+78h]
  _QWORD v29[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v30; // [rsp+190h] [rbp+90h]
  unsigned __int64 v31; // [rsp+198h] [rbp+98h]
  _QWORD v32[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v33; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v34; // [rsp+1B8h] [rbp+B8h]
  _QWORD v35[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v36; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v37; // [rsp+1D8h] [rbp+D8h]

  v11 = 0;
  v32[0] = 0LL;
  v33 = 0LL;
  v34 = 15LL;
  v10 = 0;
  v29[0] = 0LL;
  v30 = 0LL;
  v31 = 15LL;
  v12 = 0;
  v35[0] = 0LL;
  v36 = 0LL;
  v37 = 7LL;
  v26[0] = 0LL;
  v27 = 0LL;
  v28 = 15LL;
  v14[0] = "context";
  v14[1] = v26;
  v13[0] = "message";
  v13[1] = v35;
  v15[0] = "type";
  v15[1] = &v12;
  v16[0] = "module";
  v16[1] = v29;
  v17[0] = "line";
  v17[1] = &v10;
  v18[0] = "file";
  v18[1] = v32;
  v19[0] = "hr";
  v19[1] = &v11;
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
    a1,
    (unsigned int)v19,
    (unsigned int)v18,
    (unsigned int)v17,
    (__int64)v16,
    (__int64)v15,
    (__int64)v13,
    (__int64)v14);
  memset_0(v20, 0, 0x98uLL);
  v20[2] = v11;
  if ( v33 )
  {
    v3 = v32;
    if ( v34 >= 0x10 )
      v3 = (_QWORD *)v32[0];
  }
  else
  {
    v3 = 0LL;
  }
  v22 = v3;
  v23 = v10;
  if ( v30 )
  {
    v4 = v29;
    if ( v31 >= 0x10 )
      v4 = (_QWORD *)v29[0];
  }
  else
  {
    v4 = 0LL;
  }
  v25 = v4;
  v20[0] = v12;
  if ( v36 )
  {
    v5 = v35;
    if ( v37 >= 8 )
      v5 = (_QWORD *)v35[0];
  }
  else
  {
    v5 = 0LL;
  }
  v21 = v5;
  if ( v27 )
  {
    v6 = v26;
    if ( v28 >= 0x10 )
      v6 = (_QWORD *)v26[0];
  }
  else
  {
    v6 = 0LL;
  }
  v24 = v6;
  wil::StoredFailureInfo::SetFailureInfo(a2, (const struct wil::FailureInfo *)v20);
  if ( v28 >= 0x10 )
  {
    v13[0] = (void *)(v28 + 1);
    v7 = (void *)v26[0];
    v14[0] = (void *)v26[0];
    if ( v28 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v14, (unsigned __int64 *)v13);
      v7 = v14[0];
    }
    operator delete(v7);
  }
  v27 = 0LL;
  v28 = 15LL;
  LOBYTE(v26[0]) = 0;
  std::wstring::_Tidy_deallocate((__int64)v35);
  if ( v31 >= 0x10 )
  {
    v14[0] = (void *)(v31 + 1);
    v8 = (void *)v29[0];
    v13[0] = (void *)v29[0];
    if ( v31 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v13, (unsigned __int64 *)v14);
      v8 = v13[0];
    }
    operator delete(v8);
  }
  v30 = 0LL;
  v31 = 15LL;
  LOBYTE(v29[0]) = 0;
  if ( v34 >= 0x10 )
  {
    v14[0] = (void *)(v34 + 1);
    v9 = (void *)v32[0];
    v13[0] = (void *)v32[0];
    if ( v34 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v13, (unsigned __int64 *)v14);
      v9 = v13[0];
    }
    operator delete(v9);
  }
}
