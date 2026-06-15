/*
 * XREFs of ?RegisterForLoopbackEndpointChangeNotifications@CSharedStreamGroupProxy@@IEAAJXZ @ 0x1801096EC
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18000D4B8 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     ?UpdateLoopbackEndpointChangeRegistration@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18010A770 (-UpdateLoopbackEndpointChangeRegistration@CSharedStreamGroupProxy@@UEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180014FC0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180103240 (--$AsWeak@VCSharedStreamGroupProxy@@@WRL@Microsoft@@YAJPEAVCSharedStreamGroupProxy@@PEAVWeakRef@.c)
 *     ??$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointNotificationDelegator@@AEAVWeakRef@12@@Z @ 0x180103428 (--$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@@Details@WRL.c)
 *     ??$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Details@WRL@Microsoft@@YAJPEAPEAVCEndpointNotificationDelegator@@AEAVWeakRef@12@$$QEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x18010352C (--$MakeAndInitialize@VCEndpointNotificationDelegator@@V1@AEAVWeakRef@WRL@Microsoft@@W4__MIDL___M.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180104058 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_180104058.c)
 *     ?SubscribeToWnfAudioRenderEndpointChanges@CEndpointNotificationDelegator@@QEAAJXZ @ 0x18010A370 (-SubscribeToWnfAudioRenderEndpointChanges@CEndpointNotificationDelegator@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSharedStreamGroupProxy::RegisterForLoopbackEndpointChangeNotifications(
        CSharedStreamGroupProxy *this)
{
  __int64 *v2; // rax
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  void *v8; // rcx
  int v9; // eax
  unsigned __int64 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  void *v13[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[3]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v12 = 0LL;
  v13[0] = &v12;
  v2 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v13);
  v3 = Microsoft::WRL::AsWeak<CSharedStreamGroupProxy>((__int64)this, v2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    std::wstring::wstring(v14, *((_WORD **)this + 37));
    v7 = *(_DWORD *)(*(_QWORD *)std::map<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE>::_Try_emplace<std::wstring,>(
                                  v6,
                                  (__int64)v13,
                                  (__int64)v14)
                   + 64LL);
    if ( v15 >= 8 )
    {
      v11 = 2 * v15 + 2;
      v8 = (void *)v14[0];
      v13[0] = (void *)v14[0];
      if ( v11 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(v13, &v11);
        v8 = v13[0];
      }
      operator delete(v8);
    }
    if ( v7 < 2 )
    {
      v9 = 2;
      if ( v7 != 1 )
        v9 = 0;
      LODWORD(v11) = v9;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 44);
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CEndpointNotificationDelegator,CEndpointNotificationDelegator,Microsoft::WRL::WeakRef &,enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002>(
                  (_QWORD *)this + 44,
                  &v12,
                  (int *)&v11) < 0 )
        goto LABEL_19;
      v3 = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, __int64))g_DeviceEnumerator->lpVtbl->RegisterEndpointNotificationCallback)(
             g_DeviceEnumerator,
             (*((_QWORD *)this + 44) + 8LL) & -(__int64)(*((_QWORD *)this + 44) != 0LL));
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 1979LL;
        goto LABEL_17;
      }
    }
    else
    {
      if ( v7 - 2 > 1 )
        goto LABEL_19;
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 44);
      if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CEndpointNotificationDelegator,CEndpointNotificationDelegator,Microsoft::WRL::WeakRef &>(
                  (_QWORD *)this + 44,
                  &v12) < 0 )
        goto LABEL_19;
      v3 = CEndpointNotificationDelegator::SubscribeToWnfAudioRenderEndpointChanges(*((CEndpointNotificationDelegator **)this
                                                                                    + 44));
      v4 = v3;
      if ( v3 < 0 )
      {
        v5 = 1988LL;
        goto LABEL_17;
      }
    }
    *((_BYTE *)this + 360) = 1;
LABEL_19:
    v4 = 0;
    goto LABEL_20;
  }
  v5 = 1968LL;
LABEL_17:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v3);
LABEL_20:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
  return v4;
}
