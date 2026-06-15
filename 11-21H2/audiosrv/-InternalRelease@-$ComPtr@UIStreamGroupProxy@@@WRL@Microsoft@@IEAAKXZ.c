/*
 * XREFs of ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58
 * Callers:
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002CD8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@@@Z @ 0x180016310 (-FindStreamGroup@CDeviceGraphObjectsStore@@UEAAJPEBUStreamGroupParams@@PEAPEAUIStreamGroupProxy@.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z @ 0x180039270 (-DestroyStream@CAudioResourceManager@@UEAAJPEAUISubmixProxy@@PEAUIAudioStreamInfo@@@Z.c)
 *     ?GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@KPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAPEAUIStreamGroupProxy@@@Z @ 0x1800397C0 (-GetStreamGroup@CDeviceGraphManager@@UEAAJPEAUIDeviceGraphObjectsStore@@PEAUStreamGroupParams@@K.c)
 *     ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x180041F50 (-GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18004EE9C (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18004FA60 (--4-$ComPtr@VCPolicyConfig@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ @ 0x1800503D8 (-RuntimeClassInitialize@CAudioResourceManager@@QEAAJXZ.c)
 *     ??$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServerDescriptor@34@@ServiceModuleBase@Internal@Windows@@QEAAJEEEEPEAXK@Z @ 0x180050550 (--$Initialize@USecurityPolicyEveryoneLocal@ServiceModuleBase@Internal@Windows@@$01UDefaultServer.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005207C (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180058158 (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     _lambda_9f1ed336c6f1042f8318a1cd576b00ef_::operator() @ 0x180065930 (_lambda_9f1ed336c6f1042f8318a1cd576b00ef_--operator().c)
 *     _dynamic_atexit_destructor_for__g_PolicyConfig__ @ 0x180072910 (_dynamic_atexit_destructor_for__g_PolicyConfig__.c)
 *     ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800C2C04 (--1ServiceModuleBase@Internal@Windows@@QEAA@XZ.c)
 *     ?Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ @ 0x1800C57A0 (-Uninitialize@ServiceModuleBase@Internal@Windows@@QEAAJXZ.c)
 *     ?VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ @ 0x1800C5C24 (-VAD_AudiosrvServiceStop@CAudioSrv@@AEAAJXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_3640aac1012d9f944c7183fa6cd164a8___ @ 0x1800DED8C (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef__.c)
 *     ??1?$ComPtr@UIPackageCatalog@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DF138 (--1-$ComPtr@UIPackageCatalog@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DFDF8 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F9A50 (-OnEndpointAvailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     ?OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z @ 0x1800F9C40 (-OnEndpointUnavailableForUse@CSharedStreamGroupProxy@@UEAAXPEBG@Z.c)
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800FC0F8 (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 *     ?GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FC5C0 (-GetAllStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@W.c)
 *     ?GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FC830 (-GetConnectedStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupPro.c)
 *     ?GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800FCC40 (-GetOffloadStreamGroups@CDeviceGraphObjectsStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy.c)
 *     ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800FE790 (--_GCAudioResourceManager@@UEAAPEAXI@Z.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N@Z @ 0x1801020F0 (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N@Z.c)
 *     ??1?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18011390C (--1-$forward_list@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamG.c)
 *     ?MoveDisplacedA2dpStreamGroupsToSaDevice@CBtAudioResourceManager@@AEAAJPEAUISaDeviceProxy@@@Z @ 0x180116A34 (-MoveDisplacedA2dpStreamGroupsToSaDevice@CBtAudioResourceManager@@AEAAJPEAUISaDeviceProxy@@@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMMNotificationClient@@UIMixedRealitySpatialAudioFormatPolicyChange@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x180125AAC (--1-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMMNotificationClient@@UIMixedReality.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioMetadataDictionary@@UISpatialAudioMetadataDictionaryData@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180125E50 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioMetadataDictionary@@UIS.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x18012C5D4 (--1CExclusiveModeListener@@UEAA@XZ.c)
 *     ??_E?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_fd84fb861bda8361cc33008a6db9ede3_@@$0?0PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplayWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVHolographicDisplay@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@234@@234@@Foundation@Windows@@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@3@PEAUIHolographicDisplay@673@@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18012C6F0 (--_E-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventH.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVUserWatcher@System@Windows@@PEAVUserChangedEventArgs@23@@Foundation@Windows@@VFtmBase@23@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18012C740 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$Implements@U-$RuntimeClassFlags@$0.c)
 *     ??1SpatialAudioDevicePropertyWriter@@UEAA@XZ @ 0x180135624 (--1SpatialAudioDevicePropertyWriter@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioEncoderPropertiesFactory@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801356D0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UISpatialAudioEncoderPropertiesFactor.c)
 *     ??1SpatialAudioDeviceStateWriter@@UEAA@XZ @ 0x18013806C (--1SpatialAudioDeviceStateWriter@@UEAA@XZ.c)
 *     ??1SpatialAudioEncoderProperties@@UEAA@XZ @ 0x180138AB0 (--1SpatialAudioEncoderProperties@@UEAA@XZ.c)
 *     ??1SpatialAudioMetadataDictionary@@UEAA@XZ @ 0x18013A928 (--1SpatialAudioMetadataDictionary@@UEAA@XZ.c)
 *     ??1AtmosCheck@@UEAA@XZ @ 0x180152D28 (--1AtmosCheck@@UEAA@XZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::UserWatcher___Windows::System::IUserWatcher____Windows::Foundation::Internal::AggregateType_Windows::System::UserChangedEventArgs___Windows::System::IUserChangedEventArgs_____::_)(Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_cc9ef5d5666b848f78e6be49ef14c6a9___1_Windows::System::IUserWatcher___Windows::System::IUserChangedEventArgs___::_scalar_deleting_destructor_ @ 0x180153670 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180153670.c)
 *     ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x180156C54 (-UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
