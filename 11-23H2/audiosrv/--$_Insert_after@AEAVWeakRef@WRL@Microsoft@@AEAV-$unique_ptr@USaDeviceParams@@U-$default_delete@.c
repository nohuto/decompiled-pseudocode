/*
 * XREFs of ??$_Insert_after@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@AEAAXPEAU?$_Flist_node@UDisplacedStreamGroup@@PEAX@1@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@@Z @ 0x1800F4DBC
 * Callers:
 *     ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800F77A0 (-FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAA.c)
 *     ?ReleaseSaDevices@CBtLeAudioResourceManager@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800FC9F8 (-ReleaseSaDevices@CBtLeAudioResourceManager@@IEAAJPEAVCEndpointStore@@AEAV-$forward_list@UDispla.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800D0C04 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::forward_list<DisplacedStreamGroup>::_Insert_after<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  SIZE_T size_of; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  size_of = std::_Get_size_of_n<24>(1uLL);
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v9 = *a3;
  v12 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v8[1] = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = *a4;
  *a4 = 0LL;
  v8[2] = v10;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v12);
  result = *a2;
  *v8 = *a2;
  *a2 = (__int64)v8;
  return result;
}
