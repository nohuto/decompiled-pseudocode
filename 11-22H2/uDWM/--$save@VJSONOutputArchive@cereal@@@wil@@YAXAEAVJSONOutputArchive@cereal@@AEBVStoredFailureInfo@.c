/*
 * XREFs of ??$save@VJSONOutputArchive@cereal@@@wil@@YAXAEAVJSONOutputArchive@cereal@@AEBVStoredFailureInfo@0@@Z @ 0x1800F0458
 * Callers:
 *     ??$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800F0750 (--$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180018F98 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18001921C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ??$process@V?$NameValuePair@AEAJ@cereal@@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$NameValuePair@AEAG@2@V32@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V32@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAJ@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAG@1@1$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@1@Z @ 0x1800F022C (--$process@V-$NameValuePair@AEAJ@cereal@@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@s.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800F0B30 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall wil::save<cereal::JSONOutputArchive>(__int64 a1, int *a2)
{
  const unsigned __int16 *v4; // rbx
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 *v6; // rdx
  wchar_t *v7; // rdx
  __int64 result; // rax
  __int16 v9; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+44h] [rbp-BCh] BYREF
  int v11; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v14[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v15[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v16[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v17[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v18[2]; // [rsp+B0h] [rbp-50h] BYREF
  void *v19[3]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v20; // [rsp+D8h] [rbp-28h]
  void *v21[3]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v22; // [rsp+F8h] [rbp-8h]
  void *v23[3]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v24; // [rsp+118h] [rbp+18h]
  _QWORD v25[4]; // [rsp+120h] [rbp+20h] BYREF

  v11 = a2[2];
  v4 = &word_18011F0C0;
  v5 = &word_18011F0C0;
  if ( *((_QWORD *)a2 + 7) )
    v5 = (const unsigned __int16 *)*((_QWORD *)a2 + 7);
  std::string::string(v23, v5);
  v9 = *((_WORD *)a2 + 32);
  v6 = &word_18011F0C0;
  if ( *((_QWORD *)a2 + 16) )
    v6 = (const unsigned __int16 *)*((_QWORD *)a2 + 16);
  std::string::string(v21, v6);
  v10 = *a2;
  v7 = word_18011F0C4;
  if ( *((_QWORD *)a2 + 3) )
    v7 = (wchar_t *)*((_QWORD *)a2 + 3);
  std::wstring::wstring(v25, (__int64)v7);
  if ( *((_QWORD *)a2 + 9) )
    v4 = (const unsigned __int16 *)*((_QWORD *)a2 + 9);
  std::string::string(v19, v4);
  v12[0] = "context";
  v12[1] = v19;
  v13[0] = "message";
  v13[1] = v25;
  v14[0] = "type";
  v14[1] = &v10;
  v15[0] = "module";
  v15[1] = v21;
  v16[0] = "line";
  v16[1] = &v9;
  v17[0] = "file";
  v17[1] = v23;
  v18[0] = "hr";
  v18[1] = &v11;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<long &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned short &>,cereal::NameValuePair<std::string &>,cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
    *(_QWORD *)(a1 + 32),
    v18,
    (int)v17,
    (int)v16,
    (__int64)v15,
    (__int64)v14,
    (__int64)v13,
    (__int64)v12);
  if ( v20 >= 0x10 )
    std::_Deallocate<16,0>(v19[0], v20 + 1);
  v19[2] = 0LL;
  v20 = 15LL;
  LOBYTE(v19[0]) = 0;
  result = std::wstring::_Tidy_deallocate((__int64)v25);
  if ( v22 >= 0x10 )
    result = std::_Deallocate<16,0>(v21[0], v22 + 1);
  v21[2] = 0LL;
  v22 = 15LL;
  LOBYTE(v21[0]) = 0;
  if ( v24 >= 0x10 )
    return std::_Deallocate<16,0>(v23[0], v24 + 1);
  return result;
}
