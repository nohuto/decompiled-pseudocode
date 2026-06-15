/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x180132D8C
 * Callers:
 *     wil::details::lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___::_lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___ @ 0x180130DC4 (wil--details--lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___--_lambda_call__lambda_0ae8.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x1801311DC (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x1801324F0 (-OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z.c)
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180132540 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180133050 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180066930 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180131A14 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x180131B84 (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x1801329A0 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIEndpointDevice@@$1?_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180132C64 (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIEndpointDevice@@$1-_GUID_04dcfacc_3f8f_4642_82f7_326ba5600a6.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180133B74 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180133D1C (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        struct IUnknown *a3,
        char a4,
        bool (*const a5)[9])
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  int v9; // eax
  int refreshed; // ebx
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r12
  _QWORD *v17; // rbx
  bool *v18; // r14
  __int64 v19; // r15
  __int64 v20; // r13
  _QWORD *v21; // rax
  __int64 v22; // rax
  struct IUnknown *v23; // r15
  char v24; // bl
  DynamicAudioEndpointManager *v26; // rcx
  __int64 v27; // rdx
  _BYTE v28[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-1Ch]
  __int64 v30; // [rsp+38h] [rbp-18h] BYREF
  __int64 v31[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v33; // [rsp+90h] [rbp+40h] BYREF
  struct IUnknown *v34; // [rsp+A0h] [rbp+50h]
  char v35; // [rsp+A8h] [rbp+58h]

  v35 = a4;
  v34 = a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v31[1] = (__int64)v8;
  v30 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
         &v30);
  refreshed = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E8,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)v9);
    v11 = 608LL;
LABEL_25:
    v14 = (unsigned int)refreshed;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v14);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)refreshed;
  }
  v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 64LL))(v30);
  v12 = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, _BYTE *, char *))(*(_QWORD *)v30 + 80LL))(
          v30,
          a2,
          v28,
          &v33);
  refreshed = v12;
  if ( v12 < 0 )
  {
    v14 = (unsigned int)v12;
    v11 = 614LL;
    goto LABEL_26;
  }
  if ( v28[0] )
  {
    v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)a2 + 408LL))(
            a2,
            this,
            a3);
    refreshed = v15;
    if ( v15 < 0 )
    {
      v14 = (unsigned int)v15;
      v11 = 620LL;
      goto LABEL_26;
    }
  }
  v16 = 0LL;
  v17 = (_QWORD *)((char *)this + 56);
  v31[0] = 2LL;
  v18 = (bool *)a5;
  do
  {
    v19 = 0LL;
    v20 = 9LL;
    do
    {
      v21 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
              v17,
              v30,
              v13);
      if ( v21 )
      {
        v18[v16 + v19] = 1;
        if ( v33 )
          ATL::CAtlList<ATL::CComQIPtr<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>,ATL::CComQIPtrElementTraits<IEndpointDevice,&__s_GUID const _GUID_04dcfacc_3f8f_4642_82f7_326ba5600a61>>::RemoveAt(
            v17,
            v21);
      }
      v17 += 6;
      ++v19;
      --v20;
    }
    while ( v20 );
    v16 += 9LL;
    --v31[0];
  }
  while ( v31[0] );
  if ( v33 )
  {
    v22 = **((_QWORD **)this + 121);
    v23 = v34;
LABEL_17:
    v31[0] = v22;
    while ( v22 != *((_QWORD *)this + 121) )
    {
      if ( *(struct IUnknown **)(v22 + 40) == v23 )
      {
        v22 = std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Erase_unchecked(
                (char *)this + 968,
                v22);
        goto LABEL_17;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(v31);
      v22 = v31[0];
    }
  }
  v24 = v35;
  if ( v35 && !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])v18) )
  {
    refreshed = -2147467259;
    v11 = 672LL;
    goto LABEL_25;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v24 )
  {
    if ( v29 )
    {
      refreshed = DynamicAudioEndpointManager::ClearPerProcessRouting(v26, (bool (*const)[9])v18, v29);
      if ( refreshed < 0 )
      {
        v27 = 682LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v27,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)refreshed);
        return (unsigned int)refreshed;
      }
    }
    refreshed = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])v18, 0);
    if ( refreshed < 0 )
    {
      v27 = 685LL;
      goto LABEL_35;
    }
  }
  return 0LL;
}
