/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x18013FE5C
 * Callers:
 *     ?OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z @ 0x180002560 (-OnRuleOperation@DynamicAudioEndpointManager@@AEAAXPEBGW4RuleOperation@@QEAY08_NK@Z.c)
 *     wil::details::lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___::_lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___ @ 0x18013E278 (wil--details--lambda_call__lambda_0ae8ac5f33288deaf7276a705a073b29___--_lambda_call__lambda_0ae8.c)
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18013E68C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 *     ?OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z @ 0x18013FA20 (-OnProcessTerminated@DynamicAudioEndpointManager@@UEAAXPEAUIAudioProcess@@PEAUIUnknown@@@Z.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180140130 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z.c)
 * Callees:
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x180002480 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180008CE0 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180084444 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIAudioProcess@@$1?_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@@3U__s_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x180084474 (-RemoveAt@-$CAtlList@V-$CComQIPtr@UIAudioProcess@@$1-_GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200@.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800F56AC (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$function.c)
 *     ?ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x18013EF38 (-ClearPerProcessRouting@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?Find@?$CAtlList@V?$CComQIPtr@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@ATL@@V?$CComQIPtrElementTraits@UIPolicyRule@@$1?_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s_GUID@@B@2@@ATL@@QEBAPEAU__POSITION@@PEAUIPolicyRule@@PEAU3@@Z @ 0x18013F0BC (-Find@-$CAtlList@V-$CComQIPtr@UIPolicyRule@@$1-_GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3@@3U__s.c)
 *     ?_Erase_unchecked@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@AEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x180140CA4 (-_Erase_unchecked@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@.c)
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
  __int64 v12; // r8
  __int64 v14; // r12
  _QWORD *v15; // rbx
  bool *v16; // r14
  __int64 v17; // r15
  __int64 v18; // r13
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // rax
  struct IUnknown *v23; // r15
  char v24; // bl
  DynamicAudioEndpointManager *v25; // rcx
  __int64 v26; // rdx
  _BYTE v27[4]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-1Ch]
  __int64 v29; // [rsp+38h] [rbp-18h] BYREF
  __int64 v30; // [rsp+40h] [rbp-10h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  char v33; // [rsp+90h] [rbp+40h] BYREF
  struct IUnknown *v34; // [rsp+A0h] [rbp+50h]
  char v35; // [rsp+A8h] [rbp+58h]

  v35 = a4;
  v34 = a3;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v31 = v8;
  v29 = 0LL;
  v9 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3,
         &v29);
  refreshed = v9;
  if ( v9 < 0 )
  {
    v11 = 610LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v9);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v29);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(&v31);
    return (unsigned int)refreshed;
  }
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29);
  v9 = (*(__int64 (__fastcall **)(__int64, struct IAudioProcess *, _BYTE *, char *))(*(_QWORD *)v29 + 80LL))(
         v29,
         a2,
         v27,
         &v33);
  refreshed = v9;
  if ( v9 < 0 )
  {
    v11 = 616LL;
    goto LABEL_8;
  }
  if ( v27[0] )
  {
    v9 = (*(__int64 (__fastcall **)(struct IAudioProcess *, DynamicAudioEndpointManager *, struct IUnknown *))(*(_QWORD *)a2 + 408LL))(
           a2,
           this,
           a3);
    refreshed = v9;
    if ( v9 < 0 )
    {
      v11 = 622LL;
      goto LABEL_8;
    }
  }
  v14 = 0LL;
  v15 = (_QWORD *)((char *)this + 56);
  v30 = 2LL;
  v16 = (bool *)a5;
  do
  {
    v17 = 0LL;
    v18 = 9LL;
    do
    {
      v19 = ATL::CAtlList<ATL::CComQIPtr<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>,ATL::CComQIPtrElementTraits<IPolicyRule,&__s_GUID const _GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3>>::Find(
              v15,
              v29,
              v12);
      if ( v19 )
      {
        v16[v14 + v17] = 1;
        if ( v33 )
          ATL::CAtlList<ATL::CComQIPtr<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>,ATL::CComQIPtrElementTraits<IAudioProcess,&__s_GUID const _GUID_f7e5c987_5246_49cc_be2e_bb1de50fc200>>::RemoveAt(
            v15,
            v19);
      }
      v15 += 6;
      ++v17;
      --v18;
    }
    while ( v18 );
    v14 += 9LL;
    --v30;
  }
  while ( v30 );
  if ( v33 )
  {
    v22 = **((_QWORD **)this + 121);
    v23 = v34;
LABEL_19:
    v30 = v22;
    while ( v22 != *((_QWORD *)this + 121) )
    {
      if ( *(struct IUnknown **)(v22 + 40) == v23 )
      {
        v22 = std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Erase_unchecked(
                (char *)this + 968,
                v22);
        goto LABEL_19;
      }
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::function<void (bool)>>>>,std::_Iterator_base0>::operator++(
        &v30,
        v20,
        v12,
        v21);
      v22 = v30;
    }
  }
  v24 = v35;
  if ( v35 && !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])v16) )
  {
    refreshed = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2A2,
      (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)0x80004005LL);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v29);
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)refreshed;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v29);
  if ( v8 )
    LeaveCriticalSection(v8);
  if ( v24 )
  {
    if ( v28 )
    {
      refreshed = DynamicAudioEndpointManager::ClearPerProcessRouting(v25, (bool (*const)[9])v16, v28);
      if ( refreshed < 0 )
      {
        v26 = 684LL;
LABEL_34:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v26,
          (int)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
          (const char *)(unsigned int)refreshed);
        return (unsigned int)refreshed;
      }
    }
    refreshed = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])v16, 0);
    if ( refreshed < 0 )
    {
      v26 = 687LL;
      goto LABEL_34;
    }
  }
  return 0LL;
}
