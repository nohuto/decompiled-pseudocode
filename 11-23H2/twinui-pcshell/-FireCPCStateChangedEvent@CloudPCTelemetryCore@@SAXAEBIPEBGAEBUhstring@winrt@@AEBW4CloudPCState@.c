/*
 * XREFs of ?FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@Shell@Internal@Windows@3@30@Z @ 0x180735E98
 * Callers:
 *     ?HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x180736060 (-HandleConnectionStateChange@ConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAA.c)
 * Callees:
 *     ??$?0Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBUhstring@winrt@@AEBV?$allocator@G@1@@Z @ 0x1800B53B8 (--$-0Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBU.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18014DC58 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??R_lambda_d00b9a672eac66a5b2fa14c54f0daf95_@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4CloudPCState@Shell@Internal@Windows@winrt@@@Z @ 0x180284668 (--R_lambda_d00b9a672eac66a5b2fa14c54f0daf95_@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??$_Find_last@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@PEAX@std@@@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@_K@Z @ 0x18071ED4C (--$_Find_last@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$_Has_ea_18071ED4C.c)
 *     ??$CPCStateChanged@AEBIAEBIAEAPEBGPEBGPEBGPEBGAEAI@CloudPCTelemetryCore@@SAXAEBI0AEAPEBG$$QEAPEBG22AEAI@Z @ 0x180734FC0 (--$CPCStateChanged@AEBIAEBIAEAPEBGPEBGPEBGPEBGAEAI@CloudPCTelemetryCore@@SAXAEBI0AEAPEBG$$QEAPEB.c)
 *     ??$_Try_emplace@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unordered_map@W4CloudPCState@Shell@Internal@Windows@winrt@@IU?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@@2@@std@@PEAX@std@@_N@1@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180735550 (--$_Try_emplace@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$_ea_180735550.c)
 *     ??$_Try_emplace@AEBW4CloudPCState@Shell@Internal@Windows@winrt@@$$V@?$_Hash@V?$_Umap_traits@W4CloudPCState@Shell@Internal@Windows@winrt@@IV?$_Uhash_compare@W4CloudPCState@Shell@Internal@Windows@winrt@@U?$hash@W4CloudPCState@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4CloudPCState@Shell@Internal@Windows@winrt@@@7@@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@7@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@_N@1@AEBW4CloudPCState@Shell@Internal@Windows@winrt@@@Z @ 0x1807356D8 (--$_Try_emplace@AEBW4CloudPCState@Shell@Internal@Windows@winrt@@$$V@-$_Hash@V-$_Umap_traits@W4Cl.c)
 *     ?AddNewCPCIdToStateChangedCountsMap@CloudPCTelemetryCore@@CAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180735BB8 (-AddNewCPCIdToStateChangedCountsMap@CloudPCTelemetryCore@@CAXAEBV-$basic_string@GU-$char_traits@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CloudPCTelemetryCore::FireCPCStateChangedEvent(
        unsigned int *a1,
        const unsigned __int16 *a2,
        const struct winrt::hstring *a3,
        const enum winrt::Windows::Internal::Shell::CloudPCState *a4,
        const enum winrt::Windows::Internal::Shell::CloudPCState *a5,
        unsigned int *a6)
{
  __int64 v9; // rcx
  const unsigned __int8 *v10; // rdx
  __int64 appended; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rax
  int *v21; // r8
  __int64 v22[2]; // [rsp+40h] [rbp-89h] BYREF
  _QWORD *v23; // [rsp+50h] [rbp-79h] BYREF
  const unsigned __int16 *v24; // [rsp+58h] [rbp-71h] BYREF
  __int64 v25[2]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v26[16]; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int8 *v27[4]; // [rsp+80h] [rbp-49h] BYREF
  _QWORD v28[4]; // [rsp+A0h] [rbp-29h] BYREF
  _QWORD v29[4]; // [rsp+C0h] [rbp-9h] BYREF

  v24 = a2;
  std::wstring::wstring(v27);
  v10 = (const unsigned __int8 *)v27;
  if ( v27[3] >= (unsigned __int8 *)8 )
    v10 = v27[0];
  appended = std::_Fnv1a_append_bytes(v9, v10, 2 * (__int64)v27[2]);
  v13 = std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Find_last<std::wstring>(
          v12,
          v22,
          v27,
          appended)[1];
  if ( !v13 || v13 == qword_18098F228 )
    CloudPCTelemetryCore::AddNewCPCIdToStateChangedCountsMap((unsigned __int8 *)v27);
  v14 = std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Try_emplace<std::wstring const &,>(
          v13,
          (__int64)v22,
          (unsigned __int8 *)v27);
  v15 = *(_QWORD *)std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>,0>>::_Try_emplace<enum winrt::Windows::Internal::Shell::CloudPCState const &,>(
                     (_QWORD *)(*(_QWORD *)v14 + 48LL),
                     (__int64)v25,
                     (unsigned __int8 *)a5);
  ++*(_DWORD *)(v15 + 20);
  _lambda_d00b9a672eac66a5b2fa14c54f0daf95_::operator()(v15, v29, *(_DWORD *)a4);
  _lambda_d00b9a672eac66a5b2fa14c54f0daf95_::operator()(v16, v28, *(_DWORD *)a5);
  v18 = std::_Hash<std::_Umap_traits<std::wstring,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unordered_map<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int>>>,0>>::_Try_emplace<std::wstring const &,>(
          v17,
          (__int64)v22,
          (unsigned __int8 *)v27);
  std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::CloudPCState,std::hash<enum winrt::Windows::Internal::Shell::CloudPCState>,std::equal_to<enum winrt::Windows::Internal::Shell::CloudPCState>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>,0>>::_Try_emplace<enum winrt::Windows::Internal::Shell::CloudPCState const &,>(
    (_QWORD *)(*(_QWORD *)v18 + 48LL),
    (__int64)v26,
    (unsigned __int8 *)a5);
  v19 = v28;
  if ( v28[3] >= 8uLL )
    v19 = (_QWORD *)v28[0];
  v23 = v19;
  v20 = v29;
  if ( v29[3] >= 8uLL )
    v20 = (_QWORD *)v29[0];
  v25[0] = (__int64)v20;
  v22[0] = (__int64)winrt::hstring::c_str(a3);
  CloudPCTelemetryCore::CPCStateChanged<unsigned int const &,unsigned int const &,unsigned short const * &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned int &>(
    a1,
    (int *)a6,
    (__int64 *)&v24,
    v22,
    v25,
    (__int64 *)&v23,
    v21);
  std::wstring::_Tidy_deallocate((__int64)v28);
  std::wstring::_Tidy_deallocate((__int64)v29);
  std::wstring::_Tidy_deallocate((__int64)v27);
}
