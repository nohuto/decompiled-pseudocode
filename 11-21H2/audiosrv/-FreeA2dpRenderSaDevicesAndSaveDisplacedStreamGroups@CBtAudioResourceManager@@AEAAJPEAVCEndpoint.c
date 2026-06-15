/*
 * XREFs of ?FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManager@@AEAAJPEAVCEndpointStore@@@Z @ 0x180115394
 * Callers:
 *     ?CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1801142C4 (-CreateSaDeviceOnHfpMicrophoneEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x180114628 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180016650 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18003FC74 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C5F8C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     ??$_Insert_after@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@AEAAXPEAU?$_Flist_node@UDisplacedStreamGroup@@PEAX@1@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@@Z @ 0x1801136C8 (--$_Insert_after@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CBtAudioResourceManager::FreeA2dpRenderSaDevicesAndSaveDisplacedStreamGroups(
        CBtAudioResourceManager *this,
        struct CEndpointStore *a2)
{
  int v3; // eax
  int v4; // edi
  __int64 *v5; // rdi
  __int64 *v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *i; // rbx
  int v12; // eax
  __int64 **v13; // rdi
  __int64 **v14; // r14
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 **v19; // r12
  int v20; // eax
  _QWORD *v21; // r14
  _QWORD *v22; // r15
  __int64 *v23; // rcx
  __int64 v24; // rax
  SaDeviceParams *v25; // rcx
  int v26; // eax
  __int64 *v27; // rax
  _QWORD *v28; // rsi
  _QWORD *v29; // rbx
  _QWORD *v30; // rsi
  _QWORD *v31; // rbx
  int v33[4]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v34; // [rsp+30h] [rbp-79h]
  _QWORD *v35; // [rsp+38h] [rbp-71h] BYREF
  _QWORD *v36; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v37[2]; // [rsp+48h] [rbp-61h] BYREF
  __int64 v38; // [rsp+50h] [rbp-59h] BYREF
  char v39; // [rsp+58h] [rbp-51h]
  _QWORD *v40; // [rsp+60h] [rbp-49h] BYREF
  __int64 v41; // [rsp+68h] [rbp-41h]
  CBtAudioResourceManager *v42; // [rsp+70h] [rbp-39h]
  _QWORD v43[8]; // [rsp+78h] [rbp-31h] BYREF
  SaDeviceParams *v44[2]; // [rsp+B8h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v42 = this;
  v36 = 0LL;
  v35 = 0LL;
  *(_OWORD *)v33 = 0LL;
  v34 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)a2 + 13) + 104LL))(*((_QWORD *)a2 + 13), v33);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = *(__int64 **)v33;
    v6 = *(__int64 **)&v33[2];
    if ( *(_QWORD *)v33 != *(_QWORD *)&v33[2] )
    {
      do
      {
        v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)*v5 + 40LL))(*v5, v44);
        v8 = *v7 - *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1;
        if ( *v7 == *(_QWORD *)&GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data1 )
          v8 = v7[1] - *(_QWORD *)GUID_98951333_b9cd_48b1_a0a3_ff40682d73f7.Data4;
        if ( v8 )
        {
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v5 + 80LL))(*v5) == 1 )
          {
            *(_QWORD *)v37 = &v36;
            v38 = 0LL;
            v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
            v9[1] = *v5;
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v9 + 1);
            *v9 = v36;
            v38 = 0LL;
            v36 = v9;
          }
          v40 = &v35;
          v41 = 0LL;
          v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
          v10[1] = *v5;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v10 + 1);
          *v10 = v35;
          v41 = 0LL;
          v35 = v10;
        }
        ++v5;
      }
      while ( v5 != v6 );
      v6 = *(__int64 **)&v33[2];
      v5 = *(__int64 **)v33;
    }
    if ( v5 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(v5, v6);
      std::_Deallocate<16,0>(*(void **)v33, (v34 - *(_QWORD *)v33) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    for ( i = v36; i; i = (_QWORD *)*i )
    {
      *(_OWORD *)v33 = 0LL;
      v34 = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)a2 + 13) + 112LL))(
              *((_QWORD *)a2 + 13),
              i[1],
              v33);
      v4 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3E8,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_47;
      }
      v13 = *(__int64 ***)v33;
      v14 = *(__int64 ***)&v33[2];
      while ( v13 != v14 )
      {
        v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64 *, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                         + 40LL))(
                g_DeviceGraphManager,
                *v13,
                i[1]);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3EC,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
            (const char *)(unsigned int)v15);
        v16 = *v13;
        v17 = **v13;
        v43[0] = off_180177C00;
        v43[7] = v43;
        (*(void (__fastcall **)(__int64 *, _QWORD *))(v17 + 352))(v16, v43);
        ++v13;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(i + 1);
      if ( *(_QWORD *)v33 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 **)v33,
          *(__int64 **)&v33[2]);
        std::_Deallocate<16,0>(*(void **)v33, (v34 - *(_QWORD *)v33) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    v18 = v35;
LABEL_28:
    if ( !v18 )
    {
      v4 = 0;
      goto LABEL_51;
    }
    v19 = (__int64 **)(v18 + 1);
    *(_OWORD *)v33 = 0LL;
    v34 = 0LL;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**((_QWORD **)a2 + 13) + 112LL))(
            *((_QWORD *)a2 + 13),
            v18[1],
            v33);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3FE,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
        (const char *)(unsigned int)v20);
    v21 = *(_QWORD **)v33;
    v22 = *(_QWORD **)&v33[2];
    while ( 1 )
    {
      if ( v21 == v22 )
      {
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v18 + 1);
        if ( *(_QWORD *)v33 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            *(__int64 **)v33,
            *(__int64 **)&v33[2]);
          std::_Deallocate<16,0>(*(void **)v33, (v34 - *(_QWORD *)v33) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v18 = (_QWORD *)*v18;
        goto LABEL_28;
      }
      v44[0] = 0LL;
      v23 = *v19;
      v24 = **v19;
      *(_QWORD *)v37 = v44;
      v38 = 0LL;
      v39 = 1;
      v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v24 + 104))(v23, &v38);
      if ( v39 )
      {
        v25 = **(SaDeviceParams ***)v37;
        **(_QWORD **)v37 = v38;
        if ( v25 )
          SaDeviceParams::`scalar deleting destructor'(v25);
      }
      if ( v4 < 0 )
        break;
      v26 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager
                                                                                       + 40LL))(
              g_DeviceGraphManager,
              *v21,
              *v19);
      if ( v26 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x406,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
          (const char *)(unsigned int)v26);
      v40 = 0LL;
      *(_QWORD *)v37 = &v40;
      v27 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)v37);
      Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v21, v27);
      std::forward_list<DisplacedStreamGroup>::_Insert_after<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &>(
        (__int64)v42 + 64,
        (__int64 *)v42 + 8,
        (__int64 *)&v40,
        (__int64 *)v44);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v40);
      if ( v44[0] )
        SaDeviceParams::`scalar deleting destructor'(v44[0]);
      ++v21;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x404,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
    if ( v44[0] )
      SaDeviceParams::`scalar deleting destructor'(v44[0]);
LABEL_47:
    if ( !*(_QWORD *)v33 )
      goto LABEL_51;
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      *(__int64 **)v33,
      *(__int64 **)&v33[2]);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CE,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanager.cpp",
      (const char *)(unsigned int)v3);
    if ( !*(_QWORD *)v33 )
      goto LABEL_51;
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(*(__int64 **)v33, *(__int64 **)&v33[2]);
  }
  std::_Deallocate<16,0>(*(void **)v33, (v34 - *(_QWORD *)v33) & 0xFFFFFFFFFFFFFFF8uLL);
LABEL_51:
  v28 = v35;
  v35 = 0LL;
  if ( v28 )
  {
    do
    {
      v29 = (_QWORD *)*v28;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v28 + 1);
      std::_Deallocate<16,0>(v28, 0x10uLL);
      v28 = v29;
    }
    while ( v29 );
  }
  v30 = v36;
  v36 = 0LL;
  if ( v30 )
  {
    do
    {
      v31 = (_QWORD *)*v30;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v30 + 1);
      std::_Deallocate<16,0>(v30, 0x10uLL);
      v30 = v31;
    }
    while ( v31 );
  }
  return (unsigned int)v4;
}
