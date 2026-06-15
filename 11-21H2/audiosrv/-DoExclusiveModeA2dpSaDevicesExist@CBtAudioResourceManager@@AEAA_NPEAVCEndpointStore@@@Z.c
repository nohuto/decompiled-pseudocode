/*
 * XREFs of ?DoExclusiveModeA2dpSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x180114E88
 * Callers:
 *     ?CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1801142C4 (-CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristic.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CBtAudioResourceManager::DoExclusiveModeA2dpSaDevicesExist(
        CBtAudioResourceManager *this,
        struct CEndpointStore *a2)
{
  int v2; // eax
  char v3; // bl
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  int v9[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  _BYTE v11[16]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v9 = 0LL;
  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)a2 + 13) + 80LL))(*((_QWORD *)a2 + 13), v9);
  if ( v2 >= 0 )
  {
    v5 = *(_QWORD **)v9;
    v6 = *(_QWORD **)&v9[2];
    while ( v5 != v6 )
    {
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v5 + 40LL))(*v5, v11);
      v8 = *v7 - 0x48B1B9CD98951333LL;
      if ( *v7 == 0x48B1B9CD98951333LL )
        v8 = v7[1] + 0x88CD297BF005C60LL;
      if ( v8 )
      {
        v3 = 1;
        goto LABEL_4;
      }
      ++v5;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2FB,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v2);
  }
  v3 = 0;
LABEL_4:
  if ( *(_QWORD *)v9 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(*(__int64 **)v9, *(__int64 **)&v9[2]);
    std::_Deallocate<16,0>(*(void **)v9, (v10 - *(_QWORD *)v9) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v3;
}
