/*
 * XREFs of ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18010B108
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x18010AAD0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180041F08 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800A72B4 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x18010AB8C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x18010B01C (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18010BB78 (-clear@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to.c)
 */

void __fastcall MPCInputRouter::UnInitialize3DComponents(MPCInputRouter *this)
{
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_BYTE *)this + 864) )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::clear((char *)this + 904);
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    v4 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD))(*(_QWORD *)PostProcessor + 96LL))(
           PostProcessor,
           0LL);
    if ( v4 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1E9,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v4,
        v5);
    *(_OWORD *)((char *)this + 824) = 0LL;
    *(_OWORD *)((char *)this + 840) = 0LL;
    *((_QWORD *)this + 107) = 0LL;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 101);
    MPCInputRouter::Set3DFocusTarget(this, 0LL);
    *((_BYTE *)this + 864) = 0;
    *((_BYTE *)this + 872) = 0;
    _InterlockedExchange((volatile __int32 *)this + 219, 0);
    _InterlockedExchange64((volatile __int64 *)this + 110, 0LL);
    MPCInputRouter::OnExclusiveModeStateChangedInputThread(this);
  }
}
