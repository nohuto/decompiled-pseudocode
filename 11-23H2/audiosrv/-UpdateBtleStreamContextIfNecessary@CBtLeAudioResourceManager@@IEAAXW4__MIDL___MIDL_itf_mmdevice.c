/*
 * XREFs of ?UpdateBtleStreamContextIfNecessary@CBtLeAudioResourceManager@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FD578
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f921aa7bb41e884ae8a28b6513c9d4e2__void_::_Do_call @ 0x1800FD760 (std--_Func_impl_no_alloc__lambda_f921aa7bb41e884ae8a28b6513c9d4e2__void_--_Do_call.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800F7418 (-DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore.c)
 *     ?GetBTLEAudio_StreamContextFromStreamCounts@CBtLeAudioResourceManager@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800FB68C (-GetBTLEAudio_StreamContextFromStreamCounts@CBtLeAudioResourceManager@@IEAA-AW4BTAudio_StreamCon.c)
 *     ?GetFixedBTLEAudio_StreamContextFromFlowAndProcessingMode@CBtLeAudioResourceManager@@IEAA?AW4BTAudio_StreamContext@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@U_GUID@@@Z @ 0x1800FB85C (-GetFixedBTLEAudio_StreamContextFromFlowAndProcessingMode@CBtLeAudioResourceManager@@IEAA-AW4BTA.c)
 *     ?SendBtleStreamContext@CBtLeAudioResourceManager@@IEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800FD050 (-SendBtleStreamContext@CBtLeAudioResourceManager@@IEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CBtLeAudioResourceManager::UpdateBtleStreamContextIfNecessary(const unsigned __int16 **this, int a2)
{
  __int64 v2; // rbp
  int BTLEAudio_StreamContextFromStreamCounts; // esi
  CEndpointStoreCache *v5; // rcx
  int EndpointStore; // eax
  struct CEndpointStore *v7; // rbx
  char v8; // al
  const unsigned __int16 *v9; // r8
  _OWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  struct CEndpointStore *v13[2]; // [rsp+20h] [rbp-58h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v15[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v16[16]; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = a2;
  BTLEAudio_StreamContextFromStreamCounts = CBtLeAudioResourceManager::GetBTLEAudio_StreamContextFromStreamCounts(
                                              (__int64)this,
                                              a2);
  v13[0] = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v5, this[6], v13);
  v7 = v13[0];
  if ( EndpointStore >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v13[0] + 13) + 120LL))(
      *((_QWORD *)v13[0] + 13),
      &lpCriticalSection);
    v8 = CBtAudioResourceManagerBase::DoSecondaryProfileRenderStreamGroupsExist((CBtAudioResourceManagerBase *)this, v7);
    v9 = *this;
    v10 = (_OWORD *)(v8
                   ? (*((__int64 (__fastcall **)(const unsigned __int16 **, _BYTE *))v9 + 16))(this, v15)
                   : (*((__int64 (__fastcall **)(const unsigned __int16 **, _BYTE *))v9 + 15))(this, v16));
    *(_OWORD *)v13 = *v10;
    BTLEAudio_StreamContextFromStreamCounts |= CBtLeAudioResourceManager::GetFixedBTLEAudio_StreamContextFromFlowAndProcessingMode(
                                                 v11,
                                                 v2,
                                                 v13);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v7 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v7);
  if ( BTLEAudio_StreamContextFromStreamCounts != *((_DWORD *)this + v2 + 123) )
  {
    v12 = CBtLeAudioResourceManager::SendBtleStreamContext((__int64)this, v2, BTLEAudio_StreamContextFromStreamCounts);
    if ( v12 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x245,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
        (const char *)(unsigned int)v12);
  }
}
