/*
 * XREFs of ??$load@VJSONInputArchive@cereal@@@wil@@YAXAEAVJSONInputArchive@cereal@@AEAVStoredFailureInfo@0@@Z @ 0x180349A10
 * Callers:
 *     ??$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONInputArchive@0@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x180349E64 (--$load@VJSONInputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@.c)
 * Callees:
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x180090D90 (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1802E911C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAG@2@V32@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@1$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x18034A774 (--$process@V-$NameValuePair@AEAJ@cereal@@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@s.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall wil::load<cereal::JSONInputArchive>(int a1, wil::StoredFailureInfo *a2)
{
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // r8
  void *v8; // rcx
  __int64 v9; // r8
  void *v10; // rcx
  void *v11; // rcx
  unsigned __int16 v12; // [rsp+40h] [rbp-C0h] BYREF
  int v13; // [rsp+44h] [rbp-BCh] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  void *v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  void *v16[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v18[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v20[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v21[2]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v22[6]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v23; // [rsp+D8h] [rbp-28h]
  _QWORD *v24; // [rsp+F8h] [rbp-8h]
  int v25; // [rsp+100h] [rbp+0h]
  _QWORD *v26; // [rsp+108h] [rbp+8h]
  _QWORD *v27; // [rsp+140h] [rbp+40h]
  _QWORD v28[2]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v29; // [rsp+170h] [rbp+70h]
  unsigned __int64 v30; // [rsp+178h] [rbp+78h]
  _QWORD v31[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v32; // [rsp+190h] [rbp+90h]
  unsigned __int64 v33; // [rsp+198h] [rbp+98h]
  _QWORD v34[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v35; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v36; // [rsp+1B8h] [rbp+B8h]
  _QWORD v37[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v38; // [rsp+1D0h] [rbp+D0h]
  unsigned __int64 v39; // [rsp+1D8h] [rbp+D8h]

  v13 = 0;
  v35 = 0LL;
  v36 = 15LL;
  LOBYTE(v34[0]) = 0;
  v12 = 0;
  v32 = 0LL;
  v33 = 15LL;
  LOBYTE(v31[0]) = 0;
  v14 = 0;
  v38 = 0LL;
  v39 = 7LL;
  LOWORD(v37[0]) = 0;
  v29 = 0LL;
  v30 = 15LL;
  LOBYTE(v28[0]) = 0;
  v16[0] = "context";
  v16[1] = v28;
  v15[0] = "message";
  v15[1] = v37;
  v17[0] = "type";
  v17[1] = &v14;
  v18[0] = "module";
  v18[1] = v31;
  v19[0] = "line";
  v19[1] = &v12;
  v20[0] = "file";
  v20[1] = v34;
  v21[0] = "hr";
  v21[1] = &v13;
  cereal::InputArchive<cereal::JSONInputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
    a1,
    (unsigned int)v21,
    (unsigned int)v20,
    (unsigned int)v19,
    (__int64)v18,
    (__int64)v17,
    (__int64)v15,
    (__int64)v16);
  memset_0(v22, 0, 0x98uLL);
  v22[2] = v13;
  if ( v35 )
  {
    v3 = v34;
    if ( v36 >= 0x10 )
      v3 = (_QWORD *)v34[0];
  }
  else
  {
    v3 = 0LL;
  }
  v24 = v3;
  v25 = v12;
  if ( v32 )
  {
    v4 = v31;
    if ( v33 >= 0x10 )
      v4 = (_QWORD *)v31[0];
  }
  else
  {
    v4 = 0LL;
  }
  v27 = v4;
  v22[0] = v14;
  if ( v38 )
  {
    v5 = v37;
    if ( v39 >= 8 )
      v5 = (_QWORD *)v37[0];
  }
  else
  {
    v5 = 0LL;
  }
  v23 = v5;
  if ( v29 )
  {
    v6 = v28;
    if ( v30 >= 0x10 )
      v6 = (_QWORD *)v28[0];
  }
  else
  {
    v6 = 0LL;
  }
  v26 = v6;
  wil::StoredFailureInfo::SetFailureInfo(a2, (const struct wil::FailureInfo *)v22);
  if ( v30 >= 0x10 )
  {
    v15[0] = (void *)(v30 + 1);
    v8 = (void *)v28[0];
    v16[0] = (void *)v28[0];
    if ( v30 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v16, (unsigned __int64 *)v15, v7);
      v8 = v16[0];
    }
    operator delete(v8);
  }
  v29 = 0LL;
  v30 = 15LL;
  LOBYTE(v28[0]) = 0;
  std::wstring::_Tidy_deallocate((__int64)v37);
  if ( v33 >= 0x10 )
  {
    v16[0] = (void *)(v33 + 1);
    v10 = (void *)v31[0];
    v15[0] = (void *)v31[0];
    if ( v33 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v15, (unsigned __int64 *)v16, v9);
      v10 = v15[0];
    }
    operator delete(v10);
  }
  v32 = 0LL;
  v33 = 15LL;
  LOBYTE(v31[0]) = 0;
  if ( v36 >= 0x10 )
  {
    v16[0] = (void *)(v36 + 1);
    v11 = (void *)v34[0];
    v15[0] = (void *)v34[0];
    if ( v36 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v15, (unsigned __int64 *)v16, v9);
      v11 = v15[0];
    }
    operator delete(v11);
  }
}
