/*
 * XREFs of ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_JPEAU_DynamicRoutingRule@@@Z @ 0x1801334A8
 * Callers:
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18012ED54 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z @ 0x1801337E4 (-UpdateRule@DynamicAudioEndpointManager@@QEAAJPEAX_JPEAU_DynamicRoutingRule@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x180130C08 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     ?BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIPolicyRule@@QEAY08_N@Z @ 0x180131898 (-BuildRefreshListAndAddRule@DynamicAudioEndpointManager@@AEAAJ_NW4__MIDL___MIDL_itf_mmdeviceapip.c)
 *     ?RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z @ 0x1801329A0 (-RefreshPublishedDefaults@DynamicAudioEndpointManager@@AEAAJQEAY08_NK@Z.c)
 *     ?VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z @ 0x180133B74 (-VerifyListIntegrityAndRefreshDependencies@DynamicAudioEndpointManager@@AEAA_NQEAY08_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall DynamicAudioEndpointManager::UpdateRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        __int64 a3,
        struct _DynamicRoutingRule *a4)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rbx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rdx
  int refreshed; // eax
  __int64 v13; // r9
  __int64 v14; // rdx
  int v16; // eax
  int v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct IAudioProcess *v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE *v22; // [rsp+60h] [rbp-A0h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+68h] [rbp-98h]
  __int128 v24; // [rsp+70h] [rbp-90h]
  _BYTE *v25; // [rsp+80h] [rbp-80h]
  char v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[288]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v28; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v29; // [rsp+1C0h] [rbp+C0h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  v18 = a2;
  v20 = a3;
  v28 = 0LL;
  v29 = 0;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v23 = v6;
  *(_QWORD *)v17 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
                                (__int64 *)this + 121,
                                (__int64)&v21,
                                &v20,
                                v7)
                 + 40LL);
  v19 = v8;
  if ( !v8 )
  {
    v9 = -2147024809;
    goto LABEL_16;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  *(_QWORD *)v17 = 0LL;
  v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, int *))v8)(v8, &GUID_950f62ca_d61d_43ce_893e_dbf6fe56fbf3, v17);
  v9 = v10;
  if ( v10 < 0 )
  {
    v11 = 514LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_16;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v17 + 88LL))(
          *(_QWORD *)v17,
          v18,
          v27);
  v9 = v10;
  if ( v10 < 0 )
  {
    v11 = 516LL;
    goto LABEL_10;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcess *, struct _DynamicRoutingRule *))(**(_QWORD **)v17 + 96LL))(
          *(_QWORD *)v17,
          v18,
          a4);
  v9 = v10;
  if ( v10 < 0 )
  {
    v11 = 518LL;
    goto LABEL_10;
  }
  *(_QWORD *)&v21 = v17;
  *((_QWORD *)&v21 + 1) = &v18;
  v22 = v27;
  v24 = v21;
  v25 = v27;
  v26 = 1;
  refreshed = DynamicAudioEndpointManager::BuildRefreshListAndAddRule(
                (__int64)this,
                0LL,
                *(unsigned int *)a4,
                *((_DWORD *)a4 + 1),
                *(__int64 *)v17,
                (__int64)&v28);
  v9 = refreshed;
  if ( refreshed < 0 )
  {
    v13 = (unsigned int)refreshed;
    v14 = 524LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)v13);
    (*(void (__fastcall **)(_QWORD, struct IAudioProcess *, _BYTE *))(**(_QWORD **)v17 + 96LL))(
      *(_QWORD *)v17,
      v18,
      v27);
LABEL_16:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v17);
    if ( v6 )
      LeaveCriticalSection(v6);
    return v9;
  }
  if ( !DynamicAudioEndpointManager::VerifyListIntegrityAndRefreshDependencies(this, (bool (*const)[9])&v28) )
  {
    v9 = -2147467259;
    v13 = 2147500037LL;
    v14 = 527LL;
    goto LABEL_15;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v17);
  if ( v6 )
    LeaveCriticalSection(v6);
  v16 = DynamicAudioEndpointManager::RefreshPublishedDefaults(this, (bool (*const)[9])&v28, 0);
  v9 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x214,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
      (const char *)(unsigned int)v16);
    return v9;
  }
  return 0LL;
}
