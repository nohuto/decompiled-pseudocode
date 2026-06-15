/*
 * XREFs of ?GetCurrentLoopbackEndpointIdInternal@@YAJPEAGPEAPEAG@Z @ 0x180107520
 * Callers:
 *     ?GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z @ 0x18000D590 (-GetAuxiliaryInputDescriptor@CSharedStreamGroupProxy@@UEAAJPEAUAuxiliaryInputDescriptor@@@Z.c)
 *     ?IsLooseMatch@@YA_NQEAG0@Z @ 0x180108550 (-IsLooseMatch@@YA_NQEAG0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z @ 0x18000CAF8 (-IsValidAECLoopbackSelectionMode@@YA_NPEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180027F80 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002D1B8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800D2CB0 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@PEAX@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180104058 (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-_ea_180104058.c)
 *     ?GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAG@Z @ 0x180107238 (-GetActiveRenderEndpointWithFallbackToDefault@@YAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetCurrentLoopbackEndpointIdInternal(unsigned __int16 *a1, unsigned __int16 **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  void *v8; // rcx
  int ActiveRenderEndpointWithFallbackToDefault; // ebx
  __int64 v10; // rdx
  struct IMMDeviceEnumeratorVtbl *lpVtbl; // rax
  __int64 v12; // r8
  int v13; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // [rsp+20h] [rbp-50h]
  unsigned __int64 v17; // [rsp+30h] [rbp-40h] BYREF
  void *v18[2]; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  *a2 = 0LL;
  if ( IsValidAECLoopbackSelectionMode(a1) )
  {
    std::wstring::wstring(v19, a1);
    v7 = *(_DWORD *)(*(_QWORD *)std::map<std::wstring,enum AEC_LOOPBACK_SELECTION_MODE>::_Try_emplace<std::wstring,>(
                                  v6,
                                  (__int64)v18,
                                  (__int64)v19)
                   + 64LL);
    if ( v20 >= 8 )
    {
      v17 = 2 * v20 + 2;
      v8 = (void *)v19[0];
      v18[0] = (void *)v19[0];
      if ( v17 >= 0x1000 )
      {
        std::_Adjust_manually_vector_aligned(v18, &v17);
        v8 = v18[0];
      }
      operator delete(v8);
    }
    if ( v7 < 2 )
    {
      v17 = 0LL;
      lpVtbl = g_DeviceEnumerator->lpVtbl;
      v17 = 0LL;
      v12 = 2LL;
      if ( v7 != 1 )
        v12 = 0LL;
      if ( ((int (__fastcall *)(struct IMMDeviceEnumerator *, _QWORD, __int64, unsigned __int64 *))lpVtbl->GetDefaultAudioEndpoint)(
             g_DeviceEnumerator,
             0LL,
             v12,
             &v17) >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int16 **))(*(_QWORD *)v17 + 40LL))(v17, a2);
        ActiveRenderEndpointWithFallbackToDefault = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7F1,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v13);
          wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
          return (unsigned int)ActiveRenderEndpointWithFallbackToDefault;
        }
      }
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v17);
    }
    else if ( v7 == 2 )
    {
      ActiveRenderEndpointWithFallbackToDefault = GetActiveRenderEndpointWithFallbackToDefault(2u, a2);
      if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
      {
        v10 = 2039LL;
        goto LABEL_13;
      }
    }
    else if ( v7 == 3 )
    {
      ActiveRenderEndpointWithFallbackToDefault = GetActiveRenderEndpointWithFallbackToDefault(0, a2);
      if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
      {
        v10 = 2043LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
          (const char *)(unsigned int)ActiveRenderEndpointWithFallbackToDefault);
        return (unsigned int)ActiveRenderEndpointWithFallbackToDefault;
      }
    }
  }
  else if ( a1 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( a1[v15] );
    ActiveRenderEndpointWithFallbackToDefault = _AllocStringWorker<CTCoAllocPolicy>(v5, v4, a1, v15, v16, a2);
    if ( ActiveRenderEndpointWithFallbackToDefault < 0 )
    {
      v10 = 2052LL;
      goto LABEL_13;
    }
  }
  return 0LL;
}
