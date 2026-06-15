/*
 * XREFs of ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@_J@Z @ 0x180133050
 * Callers:
 *     wil::details::lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___::_lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___ @ 0x18012E820 (wil--details--lambda_call__lambda_7d9197f9f953aa9587ea63e9e212914a___--_lambda_call__lambda_7d91.c)
 *     wil::details::lambda_call__lambda_b9260135b4d0238a1736853426776464___::_lambda_call__lambda_b9260135b4d0238a1736853426776464___ @ 0x18012E868 (wil--details--lambda_call__lambda_b9260135b4d0238a1736853426776464___--_lambda_call__lambda_b926.c)
 *     ?CleanupRouting@PhoneCallAudio@@AEAAJXZ @ 0x18012EA80 (-CleanupRouting@PhoneCallAudio@@AEAAJXZ.c)
 *     ?DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z @ 0x18012ED54 (-DoSetPhoneCallAudioActiveEndpoint@PhoneCallAudio@@AEAAJW4_TelephonyRoutingPolicy@@@Z.c)
 *     ?OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ @ 0x18012F9DC (-OnPhoneCallStarted@PhoneCallAudio@@AEAAJXZ.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z @ 0x1801331B4 (-RemoveRule@DynamicAudioEndpointManager@@QEAAJPEAX_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEB_J@Z @ 0x180130C08 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 *     ?RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z @ 0x180132D8C (-RemoveRule@DynamicAudioEndpointManager@@AEAAJPEAUIAudioProcess@@PEAUIUnknown@@_NQEAY08_N@Z.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEB_J@Z @ 0x180133D70 (-erase@-$_Tree@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DynamicAudioEndpointManager::RemoveRule(
        DynamicAudioEndpointManager *this,
        struct IAudioProcess *a2,
        __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  __int64 v6; // r9
  struct IUnknown *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v11; // [rsp+30h] [rbp-78h] BYREF
  __int64 v12[2]; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v13[16]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v14; // [rsp+58h] [rbp-50h] BYREF
  __int16 v15; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v11 = a3;
  v12[0] = 0LL;
  v14 = 0LL;
  v15 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v12[1] = (__int64)v5;
  v7 = *(struct IUnknown **)(*(_QWORD *)std::map<__int64,Microsoft::WRL::ComPtr<IUnknown>>::_Try_emplace<__int64 const &,>(
                                          (__int64 *)this + 121,
                                          (__int64)v13,
                                          &v11,
                                          v6)
                           + 40LL);
  v12[0] = (__int64)v7;
  if ( v7 )
  {
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->AddRef)(v7);
    if ( v5 )
      LeaveCriticalSection(v5);
    v9 = DynamicAudioEndpointManager::RemoveRule(this, a2, v7, 1, (bool (*const)[9])&v14);
    v8 = v9;
    if ( v9 >= 0 )
    {
      std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::erase(
        (char *)this + 968,
        &v11);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x244,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\defaultdevice\\dynamicrouting.cpp",
        (const char *)(unsigned int)v9);
    }
  }
  else
  {
    if ( v5 )
      LeaveCriticalSection(v5);
    v8 = -2147024809;
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v12);
  return v8;
}
