/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x18002786C (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDev.c)
 *     ?UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18002FEE0 (-UseSupportedConnectorMode@@YAJPEAVCEndpointCharacteristics@@KW4__MIDL___MIDL_itf_audioengineend.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800ED980 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1800F1900 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IProcessSubmixProxy__std::allocator_Microsoft::WRL::ComPtr_IProcessSubmixProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&__::_1_::catch$1 @ 0x1800F6BBF (_std--vector_Microsoft--WRL--ComPtr_IProcessSubmixProxy__std--allocator_Microsoft--WRL--ComPtr_I.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800F6C5C (--$_Uninitialized_move@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISa.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800FAE0C (-_Change_array@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDe.c)
 *     _std::vector_Microsoft::WRL::ComPtr_ISaDeviceProxy__std::allocator_Microsoft::WRL::ComPtr_ISaDeviceProxy_____::_Emplace_reallocate_Microsoft::WRL::ComPtr_ISaDeviceProxy__const_&__::_1_::catch$0 @ 0x1800FB4F6 (_std--vector_Microsoft--WRL--ComPtr_ISaDeviceProxy__std--allocator_Microsoft--WRL--ComPtr_ISaDev.c)
 *     _lambda_b2b2edcacba8310f83e1be2040a50861_::operator() @ 0x1800FBDC4 (_lambda_b2b2edcacba8310f83e1be2040a50861_--operator().c)
 *     ?FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIDeviceGraphObjectsStore@@@Z @ 0x180100160 (-FreeResourcesAndLockForStreamGroupConnectionDisconnection@CAudioResourceManager@@QEAA-AV-$uniqu.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x180100BC8 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18010279C (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     ?DoExclusiveModeA2dpSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x180114E88 (-DoExclusiveModeA2dpSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?DoHfpRenderStreamGroupsExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x180114FA4 (-DoHfpRenderStreamGroupsExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?DoHfpSharedModeRenderSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x18011519C (-DoHfpSharedModeRenderSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@PEAPEAUI.c)
 *     ?DoMicrophoneSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z @ 0x1801152DC (-DoMicrophoneSaDevicesExist@CBtAudioResourceManager@@AEAA_NPEAVCEndpointStore@@@Z.c)
 *     ?FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManager@@AEAAJPEAVCEndpointStore@@@Z @ 0x180115394 (-FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManager@@AEAAJPEAVCEndpoint.c)
 *     ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54 (-RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v3++);
    while ( v3 != a2 );
  }
  return result;
}
