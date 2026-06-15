/*
 * XREFs of ?RestoreDisplacedA2dpStreamGroups@CBtAudioResourceManager@@AEAAJXZ @ 0x180116D54
 * Callers:
 *     wil::details::lambda_call__lambda_45f3313619d66960fcd08ff852f00b90___::_lambda_call__lambda_45f3313619d66960fcd08ff852f00b90___ @ 0x180113958 (wil--details--lambda_call__lambda_45f3313619d66960fcd08ff852f00b90___--_lambda_call__lambda_45f3.c)
 *     ?CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1801142C4 (-CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180114628 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAU.c)
 *     ?RestoreDisplacedA2dpStreamGroupsIfAppropriate@CBtAudioResourceManager@@AEAAJXZ @ 0x180117558 (-RestoreDisplacedA2dpStreamGroupsIfAppropriate@CBtAudioResourceManager@@AEAAJXZ.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800029FC (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIStreamGroupProxy@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x180002CD8 (--$As@UIStreamGroupProxy@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002B384 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B484 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065534 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z @ 0x180066A50 (-NotifyStreamChange@CBtAudioResourceManager@@AEAAX_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ @ 0x1800D2AB0 (--1-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800D2B14 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??1?$ComPtr@UIPackageCatalog@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DF138 (--1-$ComPtr@UIPackageCatalog@ApplicationModel@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     ??1?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18011390C (--1-$forward_list@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStreamG.c)
 *     ?CreateA2dpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUISaDeviceProxy@@@Z @ 0x180113BC4 (-CreateA2dpRenderSaDeviceWithDefaultParameters@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharac.c)
 *     ?clear@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAAXXZ @ 0x180117994 (-clear@-$forward_list@UDisplacedStreamGroup@@V-$allocator@UDisplacedStreamGroup@@@std@@@std@@QEA.c)
 *     ?HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180149FA8 (-HardwareLoopbackEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CBtAudioResourceManager::RestoreDisplacedA2dpStreamGroups(const unsigned __int16 **this)
{
  const unsigned __int16 *v2; // rdx
  int EndpointStore; // eax
  unsigned int v4; // esi
  _QWORD *v5; // r15
  const unsigned __int16 *i; // rdi
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)); // rsi
  int v9; // eax
  __int64 v10; // rdx
  struct CEndpointStore *v11; // rsi
  int v12; // eax
  __int64 *v13; // rdi
  __int64 *v14; // r13
  int v15; // eax
  __int64 *v16; // r15
  __int64 *v17; // r12
  int v18; // eax
  _QWORD *v19; // rbx
  CBtAudioResourceManager *v20; // rbx
  int v21; // eax
  _QWORD *j; // rbx
  __int64 (__fastcall *v23)(struct IDeviceGraphManager *, CEndpointCharacteristics *, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, struct ISaDeviceProxy **); // rdi
  int v24; // eax
  __int64 (__fastcall *v25)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, bool, _QWORD); // rdi
  char v26; // al
  __int64 v27; // rdx
  _QWORD *k; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v29; // edi
  CBtAudioResourceManager *v30; // rcx
  int v31; // eax
  __int64 (__fastcall *v32)(struct IDeviceGraphManager *, _QWORD, struct ISaDeviceProxy *, bool, _QWORD); // rdi
  char v33; // al
  __int64 v34; // rdx
  int v36[2]; // [rsp+20h] [rbp-99h]
  __int64 v37; // [rsp+50h] [rbp-69h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+58h] [rbp-61h] BYREF
  struct ISaDeviceProxy *v39; // [rsp+60h] [rbp-59h] BYREF
  __int64 v40; // [rsp+68h] [rbp-51h]
  CEndpointCharacteristics *v41; // [rsp+70h] [rbp-49h] BYREF
  _QWORD *v42; // [rsp+78h] [rbp-41h] BYREF
  struct CEndpointStore *v43; // [rsp+80h] [rbp-39h] BYREF
  __int128 v44; // [rsp+88h] [rbp-31h] BYREF
  __int64 v45; // [rsp+98h] [rbp-21h]
  __int128 v46; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-9h]
  char *v48; // [rsp+B8h] [rbp-1h]
  CBtAudioResourceManager *v49; // [rsp+C0h] [rbp+7h]
  char v50[8]; // [rsp+C8h] [rbp+Fh] BYREF
  __int128 v51; // [rsp+D0h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v49 = (CBtAudioResourceManager *)this;
  v2 = this[5];
  if ( !v2 )
    return 0LL;
  v43 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore((RTL_SRWLOCK *)this, v2, &v43);
  v4 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B0,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
    goto LABEL_69;
  }
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)v43 + 13) + 120LL))(*((_QWORD *)v43 + 13), v50);
  v5 = this + 8;
  v48 = (char *)(this + 8);
  for ( i = this[8]; i; i = *(const unsigned __int16 **)i )
  {
    v39 = 0LL;
    if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((_QWORD *)i + 1, &v39) >= 0 && v39 )
    {
      v37 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v39,
                  &v37) >= 0 )
      {
        v38 = 0LL;
        v7 = v37;
        v8 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v37 + 192LL);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v38);
        v9 = v8(v7, &v38);
        v4 = v9;
        if ( v9 < 0 )
        {
          v10 = 448LL;
          goto LABEL_17;
        }
        if ( v38 )
        {
          v9 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64))(*(_QWORD *)g_DeviceGraphManager + 40LL))(
                 g_DeviceGraphManager,
                 v37);
          v4 = v9;
          if ( v9 < 0 )
          {
            v10 = 452LL;
LABEL_17:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v10,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
              (const char *)(unsigned int)v9);
            Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v38);
            Microsoft::WRL::ComPtr<Windows::ApplicationModel::IPackageCatalog>::~ComPtr<Windows::ApplicationModel::IPackageCatalog>(&v37);
            Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>((__int64 *)&v39);
            goto LABEL_68;
          }
        }
        Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v38);
      }
      Microsoft::WRL::ComPtr<Windows::ApplicationModel::IPackageCatalog>::~ComPtr<Windows::ApplicationModel::IPackageCatalog>(&v37);
    }
    Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>((__int64 *)&v39);
  }
  v42 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v11 = v43;
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v43 + 13) + 104LL))(*((_QWORD *)v43 + 13), &v46);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v12);
LABEL_32:
    v13 = (__int64 *)v46;
    goto LABEL_33;
  }
  v14 = (__int64 *)*((_QWORD *)&v46 + 1);
  v13 = (__int64 *)v46;
  if ( (_QWORD)v46 == *((_QWORD *)&v46 + 1) )
  {
LABEL_33:
    if ( v13 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(v13, *((__int64 **)&v46 + 1));
      std::_Deallocate<16,0>((void *)v46, (v47 - v46) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v20 = v49;
    CBtAudioResourceManager::NotifyStreamChange(v49, 0);
    v41 = 0LL;
    v21 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                + 24LL))(
            g_pEndpointCharacteristicsCache,
            *((_QWORD *)v20 + 5),
            0LL,
            0LL,
            &v41);
    v4 = v21;
    if ( v21 >= 0 )
    {
      v51 = 0LL;
      for ( j = (_QWORD *)*v5; j; j = (_QWORD *)*j )
      {
        v38 = 0LL;
        if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>(j + 1, &v38) >= 0 && v38 )
        {
          v37 = 0LL;
          if ( (int)Microsoft::WRL::ComPtr<IInspectable>::As<IStreamGroupProxy>(&v38, &v37) >= 0 )
          {
            v39 = 0LL;
            v23 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, CEndpointCharacteristics *, _QWORD, _QWORD, _QWORD, __int128 *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL);
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
            v36[0] = 0;
            v24 = v23(g_DeviceGraphManager, v41, j[2], 0LL, *(_QWORD *)v36, &v51, 0LL, 0LL, &v39);
            v4 = v24;
            if ( v24 < 0 )
            {
              v27 = 506LL;
              goto LABEL_53;
            }
            v25 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, struct ISaDeviceProxy *, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
            v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 208LL))(v37);
            v24 = v25(g_DeviceGraphManager, v37, v39, v26 == 0, 0LL);
            v4 = v24;
            if ( v24 < 0 )
            {
              v27 = 511LL;
LABEL_53:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v27,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
                (const char *)(unsigned int)v24);
              Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v39);
              Microsoft::WRL::ComPtr<Windows::ApplicationModel::IPackageCatalog>::~ComPtr<Windows::ApplicationModel::IPackageCatalog>(&v37);
              Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>((__int64 *)&v38);
              goto LABEL_66;
            }
            Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v39);
          }
          Microsoft::WRL::ComPtr<Windows::ApplicationModel::IPackageCatalog>::~ComPtr<Windows::ApplicationModel::IPackageCatalog>(&v37);
        }
        Microsoft::WRL::ComPtr<IInspectable>::~ComPtr<IInspectable>((__int64 *)&v38);
      }
      std::forward_list<DisplacedStreamGroup>::clear(v5);
      for ( k = v42; k; k = (_QWORD *)*k )
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)k[1] + 160LL))(k[1]) != 2
          || (v29 = eLoopbackConnector, !(unsigned int)CEndpointCharacteristics::HardwareLoopbackEnabled(v41)) )
        {
          v29 = eHostProcessConnector;
        }
        v39 = 0LL;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v39);
        v31 = CBtAudioResourceManager::CreateA2dpRenderSaDeviceWithDefaultParameters(v30, v41, v29, &v39);
        v4 = v31;
        if ( v31 < 0 )
        {
          v34 = 524LL;
          goto LABEL_64;
        }
        v32 = *(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, struct ISaDeviceProxy *, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 32LL);
        v33 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)k[1] + 208LL))(k[1]);
        v31 = v32(g_DeviceGraphManager, k[1], v39, v33 == 0, 0LL);
        v4 = v31;
        if ( v31 < 0 )
        {
          v34 = 529LL;
LABEL_64:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v34,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)(unsigned int)v31);
          Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v39);
          goto LABEL_66;
        }
        Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>((__int64 *)&v39);
      }
      v4 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EA,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v21);
    }
LABEL_66:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
    goto LABEL_67;
  }
  while ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v13 + 80LL))(*v13) == 1 )
  {
LABEL_30:
    if ( ++v13 == v14 )
    {
      v5 = v48;
      goto LABEL_32;
    }
  }
  v44 = 0LL;
  v45 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(**((_QWORD **)v11 + 13) + 112LL))(
          *((_QWORD *)v11 + 13),
          *v13,
          &v44);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1D9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v15);
    v16 = (__int64 *)v44;
    goto LABEL_28;
  }
  v17 = (__int64 *)*((_QWORD *)&v44 + 1);
  v16 = (__int64 *)v44;
  if ( (_QWORD)v44 == *((_QWORD *)&v44 + 1) )
  {
LABEL_28:
    if ( v16 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v16, *((__int64 **)&v44 + 1));
      std::_Deallocate<16,0>((void *)v44, (v45 - v44) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    goto LABEL_30;
  }
  while ( 1 )
  {
    v18 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64))(*(_QWORD *)g_DeviceGraphManager
                                                                                    + 40LL))(
            g_DeviceGraphManager,
            *v16,
            *v13);
    v4 = v18;
    if ( v18 < 0 )
      break;
    v39 = (struct ISaDeviceProxy *)&v42;
    v40 = 0LL;
    v19 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    v19[1] = *v16;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v19 + 1);
    *v19 = v42;
    v40 = 0LL;
    v42 = v19;
    std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v39);
    if ( ++v16 == v17 )
    {
      v16 = (__int64 *)v44;
      v11 = v43;
      goto LABEL_28;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1DD,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
    (const char *)(unsigned int)v18);
  if ( (_QWORD)v44 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v44,
      *((__int64 **)&v44 + 1));
    std::_Deallocate<16,0>((void *)v44, (v45 - v44) & 0xFFFFFFFFFFFFFFF8uLL);
    v44 = 0LL;
    v45 = 0LL;
  }
  if ( (_QWORD)v46 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>((__int64 *)v46, *((__int64 **)&v46 + 1));
    std::_Deallocate<16,0>((void *)v46, (v47 - v46) & 0xFFFFFFFFFFFFFFF8uLL);
  }
LABEL_67:
  std::forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::~forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>(&v42);
LABEL_68:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((__int64)v50);
LABEL_69:
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((__int64 *)&v43);
  return v4;
}
