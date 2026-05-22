/*
 * XREFs of ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BA370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180080BA4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800B2754 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x1800DEF30 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     memcpy_s_1 @ 0x1800E6AA0 (memcpy_s_1.c)
 *     ??$emplace@AEAKUTargetingInfo@ButtonProcessor@@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUTargetingInfo@ButtonProcessor@@@Z @ 0x1801B9A58 (--$emplace@AEAKUTargetingInfo@ButtonProcessor@@@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonPr.c)
 *     ?ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z @ 0x1801B9DF8 (-ButtonEvent@ButtonProcessor@InputETW@@SAXK_N@Z.c)
 *     ?ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z @ 0x1801B9EE8 (-ButtonToVKeyMapping@ButtonProcessor@@AEAAJKPEAG@Z.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@ButtonProcessor@@@std@@PEAX@2@PEAU32@@Z @ 0x1801BA74C (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@KUTargetingInfo@ButtonProcessor@@V-$_Uhash_compare@KU-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ButtonProcessor::OnInputReport(ButtonProcessor *this, struct InputInfo *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned __int8 *v7; // rsi
  __int64 v8; // rcx
  rsize_t v9; // rdx
  rsize_t v10; // r9
  int v11; // eax
  __int64 appended; // rax
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 (__fastcall *v17)(__int64, _QWORD, _QWORD, _QWORD); // rsi
  int v18; // eax
  char v19; // si
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // edi
  int v23; // [rsp+20h] [rbp-E0h]
  unsigned __int16 v24; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v27[24]; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v28[4]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h]
  int v30; // [rsp+88h] [rbp-78h]
  unsigned __int16 v31; // [rsp+ACh] [rbp-54h]
  __int16 v32; // [rsp+CEh] [rbp-32h]
  _BYTE Destination[272]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  if ( *(char *)a2 >= 0 )
  {
    v4 = -2147024809;
    v5 = 168LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
      (const char *)v4);
    return v4;
  }
  v7 = (unsigned __int8 *)a2 + 64;
  InputETW::ButtonProcessor::ButtonEvent(*((_DWORD *)a2 + 16), *((_BYTE *)a2 + 68));
  if ( IsEdition(253345LL)
    && (*(_DWORD *)v7 > 0xDu || *((_BYTE *)this + 121))
    && *((_BYTE *)this + 120)
    && (int)ButtonProcessor::ButtonToVKeyMapping(this, *(_DWORD *)v7, &v24) >= 0 )
  {
    memset_0(v28, 0, 0x170uLL);
    v30 = 368;
    v28[1] = **((_DWORD **)this + 4);
    v28[0] = 4;
    v28[2] = *((_DWORD *)a2 + 2);
    v29 = *((_QWORD *)a2 + 2);
    v32 = 64;
    v31 = v24;
    if ( *((_BYTE *)a2 + 68) )
    {
      *((_BYTE *)this + v24 + 136) = 0x80;
    }
    else
    {
      v32 = 65;
      *((_BYTE *)this + v24 + 136) = 0;
    }
    memcpy_s_1(Destination, v9, (char *)this + 136, v10);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16), v28);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xD1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
        (const char *)(unsigned int)v11,
        v23);
  }
  else
  {
    appended = std::_Fnv1a_append_bytes(v8, v7, 4uLL);
    v13 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
            (_QWORD *)this + 5,
            &v26,
            v7,
            appended)[1];
    if ( !v13 || v13 == *((_QWORD *)this + 6) )
    {
      v25 = 0LL;
      v13 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::emplace<unsigned long &,ButtonProcessor::TargetingInfo>(
                         (float *)this + 10,
                         (__int64)v27,
                         v7,
                         &v25);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)&v25 + 1);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v25);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)(v13 + 24));
      v14 = InputContext::Create((struct InputContext **)(v13 + 24));
      if ( v14 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xDD,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
          (const char *)(unsigned int)v14,
          v23);
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
      v16 = v15;
      if ( !v15 )
      {
        v4 = -2147418113;
        v5 = 224LL;
        goto LABEL_3;
      }
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 64LL);
      Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)(v13 + 32));
      v18 = v17(v16, *((_QWORD *)this + 4), *(_QWORD *)(v13 + 24), 0LL);
      if ( v18 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE5,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
          (const char *)(unsigned int)v18,
          v13 + 32);
    }
    v19 = *((_BYTE *)a2 + 68);
    v20 = *(_QWORD *)(v13 + 32);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v20 + 24LL))(v20, a2);
      v22 = v21;
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xF5,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
          (const char *)(unsigned int)v21);
        return v22;
      }
    }
    if ( !v19 )
      std::_Hash<std::_Umap_traits<unsigned long,ButtonProcessor::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ButtonProcessor::TargetingInfo>>,0>>::_Unchecked_erase(
        (char *)this + 40,
        v13);
  }
  return 0LL;
}
