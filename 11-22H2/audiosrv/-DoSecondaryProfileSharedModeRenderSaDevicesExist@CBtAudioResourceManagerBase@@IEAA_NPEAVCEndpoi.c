/*
 * XREFs of ?DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F7690
 * Callers:
 *     ?AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800F58E0 (-AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F65A0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8770 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CBtAudioResourceManagerBase::DoSecondaryProfileSharedModeRenderSaDevicesExist(
        CBtAudioResourceManagerBase *this,
        struct CEndpointStore *a2,
        struct ISaDeviceProxy **a3)
{
  int v5; // eax
  __int128 v6; // rdi
  unsigned __int8 (__fastcall *v8)(CBtAudioResourceManagerBase *, __int128 *); // rbx
  struct ISaDeviceProxy **v9; // rbx
  __int128 v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+30h] [rbp-40h]
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v13[16]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v10 = 0LL;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 88LL))(*((_QWORD *)a2 + 13), &v10);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2AC,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v5);
LABEL_3:
    *(_QWORD *)&v6 = v10;
    goto LABEL_4;
  }
  v6 = v10;
  if ( (_QWORD)v10 == *((_QWORD *)&v10 + 1) )
  {
LABEL_4:
    if ( (_QWORD)v6 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v6,
        *((__int64 **)&v10 + 1));
      std::_Deallocate<16,0>((void *)v10, (v11 - v10) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    return 0;
  }
  while ( 1 )
  {
    v8 = *(unsigned __int8 (__fastcall **)(CBtAudioResourceManagerBase *, __int128 *))(*(_QWORD *)this + 144LL);
    v12 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)v6 + 40LL))(*(_QWORD *)v6, v13);
    if ( v8(this, &v12) )
      break;
    *(_QWORD *)&v6 = v6 + 8;
    if ( (_QWORD)v6 == *((_QWORD *)&v6 + 1) )
      goto LABEL_3;
  }
  if ( a3 )
  {
    v9 = (struct ISaDeviceProxy **)v10;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v10);
    *a3 = *v9;
  }
  std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v10);
  return 1;
}
