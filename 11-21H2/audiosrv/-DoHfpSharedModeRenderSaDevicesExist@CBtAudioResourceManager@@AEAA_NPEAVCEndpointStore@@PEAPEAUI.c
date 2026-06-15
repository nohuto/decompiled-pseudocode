/*
 * XREFs of ?DoHfpSharedModeRenderSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x18011519C
 * Callers:
 *     ?AllowOffloadStreamCreation@CBtAudioResourceManager@@UEAA_NXZ @ 0x180113A70 (-AllowOffloadStreamCreation@CBtAudioResourceManager@@UEAA_NXZ.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180114628 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAU.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CBtAudioResourceManager::DoHfpSharedModeRenderSaDevicesExist(
        CBtAudioResourceManager *this,
        struct CEndpointStore *a2,
        struct ISaDeviceProxy **a3)
{
  int v4; // eax
  char v5; // bl
  _QWORD *v7; // rbx
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  struct ISaDeviceProxy **v11; // rbx
  int v12[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]
  _BYTE v14[16]; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_OWORD *)v12 = 0LL;
  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)a2 + 13) + 88LL))(*((_QWORD *)a2 + 13), v12);
  if ( v4 >= 0 )
  {
    v7 = *(_QWORD **)v12;
    v8 = *(_QWORD **)&v12[2];
    while ( v7 != v8 )
    {
      v9 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v7 + 40LL))(*v7, v14);
      v10 = *v9 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
      if ( *v9 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
        v10 = v9[1] - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
      if ( !v10 )
      {
        if ( a3 )
        {
          v11 = *(struct ISaDeviceProxy ***)v12;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(*(__int64 **)v12);
          *a3 = *v11;
        }
        v5 = 1;
        goto LABEL_4;
      }
      ++v7;
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2E3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
  }
  v5 = 0;
LABEL_4:
  if ( *(_QWORD *)v12 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(*(__int64 **)v12, *(__int64 **)&v12[2]);
    std::_Deallocate<16,0>(*(void **)v12, (v13 - *(_QWORD *)v12) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  return v5;
}
