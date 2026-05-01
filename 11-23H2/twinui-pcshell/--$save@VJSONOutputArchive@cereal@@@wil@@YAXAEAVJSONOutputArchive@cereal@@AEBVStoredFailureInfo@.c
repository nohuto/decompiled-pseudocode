/*
 * XREFs of ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x18041623C
 * Callers:
 *     ??$process@AEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800BD588 (--$process@AEAV-$vector@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@.c)
 *     ?data@?$test_common_data@$00@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800BE188 (-data@-$test_common_data@$00@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloca.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x18018AB94 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1803920BC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAG@2@V32@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@1$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1804154E0 (--$process@V-$NameValuePair@AEAJ@cereal@@V-$NameValuePair@AEAV-$basic_string@DU-$ch_ea_1804154E0.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall wil::save<cereal::JSONOutputArchive>(__int64 a1, int *a2)
{
  const wchar_t *v4; // rbx
  const wchar_t *v5; // rdx
  const wchar_t *v6; // rdx
  WCHAR *v7; // rdx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  __int16 v11; // [rsp+40h] [rbp-C0h] BYREF
  void *v12[2]; // [rsp+48h] [rbp-B8h] BYREF
  void *v13[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+68h] [rbp-98h] BYREF
  int v15; // [rsp+6Ch] [rbp-94h] BYREF
  _QWORD v16[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v17[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v18[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v19[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v20[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v21[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+D8h] [rbp-28h]
  _QWORD v23[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+F8h] [rbp-8h]
  _QWORD v25[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v26; // [rsp+118h] [rbp+18h]
  _QWORD v27[4]; // [rsp+120h] [rbp+20h] BYREF

  v15 = a2[2];
  v4 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
  v5 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
  if ( *((_QWORD *)a2 + 7) )
    v5 = (const wchar_t *)*((_QWORD *)a2 + 7);
  std::string::string(v25, (__int64)v5);
  v11 = *((_WORD *)a2 + 32);
  v6 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
  if ( *((_QWORD *)a2 + 16) )
    v6 = (const wchar_t *)*((_QWORD *)a2 + 16);
  std::string::string(v23, (__int64)v6);
  v14 = *a2;
  v7 = (WCHAR *)&LocaleName;
  if ( *((_QWORD *)a2 + 3) )
    v7 = (WCHAR *)*((_QWORD *)a2 + 3);
  std::wstring::wstring(v27, v7);
  if ( *((_QWORD *)a2 + 9) )
    v4 = (const wchar_t *)*((_QWORD *)a2 + 9);
  std::string::string(v21, (__int64)v4);
  v13[0] = "context";
  v13[1] = v21;
  v12[0] = "message";
  v12[1] = v27;
  v16[0] = "type";
  v16[1] = &v14;
  v17[0] = "module";
  v17[1] = v23;
  v18[0] = "line";
  v18[1] = &v11;
  v19[0] = "file";
  v19[1] = v25;
  v20[0] = "hr";
  v20[1] = &v15;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
    *(_QWORD *)(a1 + 32),
    v20,
    (int)v19,
    (int)v18,
    (__int64)v17,
    (__int64)v16,
    (__int64)v12,
    (__int64)v13);
  if ( v22 >= 0x10 )
  {
    v12[0] = (void *)(v22 + 1);
    v8 = (void *)v21[0];
    v13[0] = (void *)v21[0];
    if ( v22 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v13, (unsigned __int64 *)v12);
      v8 = v13[0];
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
    v9 = (void *)v23[0];
    v12[0] = (void *)v23[0];
    if ( v24 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v12, (unsigned __int64 *)v13);
      v9 = v12[0];
    }
    operator delete(v9);
  }
  v23[2] = 0LL;
  v24 = 15LL;
  LOBYTE(v23[0]) = 0;
  if ( v26 >= 0x10 )
  {
    v13[0] = (void *)(v26 + 1);
    v10 = (void *)v25[0];
    v12[0] = (void *)v25[0];
    if ( v26 + 1 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(v12, (unsigned __int64 *)v13);
      v10 = v12[0];
    }
    operator delete(v10);
  }
}
