/*
 * XREFs of ?FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@PEA_N@Z @ 0x1800F77A0
 * Callers:
 *     ?CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F60CC (-CreateSaDeviceOnMicrophoneEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristic.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800F6550 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x1800163B8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180046188 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047D88 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x18004A0BC (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081418 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Insert_after@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@AEAAXPEAU?$_Flist_node@UDisplacedStreamGroup@@PEAX@1@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@@Z @ 0x1800F4DBC (--$_Insert_after@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 *     ??1?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800F53E0 (--1-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CBtAudioResourceManagerBase::FreePrimaryProfileRenderSaDevicesAndSaveDisplacedStreamGroups(
        CBtAudioResourceManagerBase *this,
        struct CEndpointStore *a2,
        bool *a3)
{
  struct CEndpointStore *v4; // r14
  int v6; // eax
  unsigned int v7; // ebx
  __int128 v8; // rdi
  unsigned __int8 (__fastcall *v9)(CBtAudioResourceManagerBase *, SaDeviceParams **); // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rbx
  _QWORD *v12; // rbx
  int v13; // eax
  int v14; // esi
  __int64 **i; // rsi
  __int64 **v16; // r14
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  _QWORD *j; // rbx
  __int64 **v21; // r12
  int v22; // eax
  _QWORD *v23; // rsi
  _QWORD *v24; // r15
  __int64 *v25; // rcx
  __int64 v26; // rax
  int v27; // r14d
  SaDeviceParams *v28; // rcx
  int v29; // eax
  __int64 *v30; // rax
  _QWORD *v32; // rdi
  _QWORD *v33; // rbx
  _QWORD *v34; // rdi
  _QWORD *v35; // rbx
  int v36[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v37; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v38; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v39; // [rsp+40h] [rbp-C0h]
  __int128 v40; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  SaDeviceParams **v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v43[2]; // [rsp+68h] [rbp-98h] BYREF
  char v44; // [rsp+70h] [rbp-90h]
  SaDeviceParams *v45[2]; // [rsp+80h] [rbp-80h] BYREF
  int *v46; // [rsp+90h] [rbp-70h] BYREF
  __int64 v47; // [rsp+98h] [rbp-68h]
  struct CEndpointStore *v48; // [rsp+A0h] [rbp-60h]
  CBtAudioResourceManagerBase *v49; // [rsp+A8h] [rbp-58h]
  _QWORD v50[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v51; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v52; // [rsp+100h] [rbp+0h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v4 = a2;
  v48 = a2;
  v49 = this;
  *a3 = 0;
  v37 = 0LL;
  *(_QWORD *)v36 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 104LL))(*((_QWORD *)a2 + 13), &v38);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = v38;
    if ( (_QWORD)v38 != *((_QWORD *)&v38 + 1) )
    {
      do
      {
        v9 = *(unsigned __int8 (__fastcall **)(CBtAudioResourceManagerBase *, SaDeviceParams **))(*(_QWORD *)this + 144LL);
        *(_OWORD *)v45 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)v8 + 40LL))(
                                      *(_QWORD *)v8,
                                      &v51);
        if ( !v9(this, v45) )
        {
          if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 80LL))(*(_QWORD *)v8) == 1 )
          {
            v42 = (SaDeviceParams **)&v37;
            *(_QWORD *)v43 = 0LL;
            v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
            v10[1] = *(_QWORD *)v8;
            Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v10 + 1);
            *v10 = v37;
            *(_QWORD *)v43 = 0LL;
            v37 = v10;
          }
          v46 = v36;
          v47 = 0LL;
          v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
          v11[1] = *(_QWORD *)v8;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v11 + 1);
          *v11 = *(_QWORD *)v36;
          v47 = 0LL;
          *(_QWORD *)v36 = v11;
        }
        *(_QWORD *)&v8 = v8 + 8;
      }
      while ( (_QWORD)v8 != *((_QWORD *)&v8 + 1) );
      v8 = v38;
    }
    if ( (_QWORD)v8 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v8,
        *((__int64 **)&v8 + 1));
      std::_Deallocate<16,0>((void *)v38, (v39 - v38) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    v12 = v37;
    while ( v12 )
    {
      v51 = 0LL;
      v52 = 0LL;
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)v4 + 13) + 112LL))(
              *((_QWORD *)v4 + 13),
              v12[1],
              &v51);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x3C2,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v13);
        if ( (_QWORD)v51 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            (__int64 *)v51,
            *((__int64 **)&v51 + 1));
          std::_Deallocate<16,0>((void *)v51, (v52 - v51) & 0xFFFFFFFFFFFFFFF8uLL);
          v51 = 0LL;
          v52 = 0LL;
        }
        v7 = v14;
        goto LABEL_50;
      }
      v16 = (__int64 **)*((_QWORD *)&v51 + 1);
      for ( i = (__int64 **)v51; i != v16; ++i )
      {
        v17 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64 *, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                         + 40LL))(
                g_DeviceGraphManager,
                *i,
                v12[1]);
        if ( v17 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3C6,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v17);
        v18 = *i;
        v19 = **i;
        v50[0] = off_18017BB78;
        v50[7] = v50;
        (*(void (__fastcall **)(__int64 *, _QWORD *))(v19 + 384))(v18, v50);
      }
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v12 + 1);
      *a3 = 1;
      if ( (_QWORD)v51 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v51,
          *((__int64 **)&v51 + 1));
        std::_Deallocate<16,0>((void *)v51, (v52 - v51) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v12 = (_QWORD *)*v12;
      v4 = v48;
    }
    for ( j = *(_QWORD **)v36; ; j = (_QWORD *)*j )
    {
      if ( !j )
      {
        v32 = *(_QWORD **)v36;
        *(_QWORD *)v36 = 0LL;
        if ( v32 )
        {
          do
          {
            v33 = (_QWORD *)*v32;
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v32 + 1);
            std::_Deallocate<16,0>(v32, 0x10uLL);
            v32 = v33;
          }
          while ( v33 );
        }
        v34 = v37;
        v37 = 0LL;
        if ( v34 )
        {
          do
          {
            v35 = (_QWORD *)*v34;
            Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v34 + 1);
            std::_Deallocate<16,0>(v34, 0x10uLL);
            v34 = v35;
          }
          while ( v35 );
        }
        return 0LL;
      }
      v21 = (__int64 **)(j + 1);
      v40 = 0LL;
      v41 = 0LL;
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)v4 + 13) + 112LL))(
              *((_QWORD *)v4 + 13),
              j[1],
              &v40);
      if ( v22 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3D9,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v22);
      v24 = (_QWORD *)*((_QWORD *)&v40 + 1);
      v23 = (_QWORD *)v40;
      if ( (_QWORD)v40 != *((_QWORD *)&v40 + 1) )
        break;
LABEL_42:
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(j + 1);
      *a3 = 1;
      if ( (_QWORD)v40 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v40,
          *((__int64 **)&v40 + 1));
        std::_Deallocate<16,0>((void *)v40, (v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL);
      }
    }
    while ( 1 )
    {
      v45[0] = 0LL;
      v25 = *v21;
      v26 = **v21;
      v42 = v45;
      *(_QWORD *)v43 = 0LL;
      v44 = 1;
      v27 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(v26 + 104))(v25, v43);
      if ( v44 )
      {
        v28 = *v42;
        *v42 = *(SaDeviceParams **)v43;
        if ( v28 )
          SaDeviceParams::`scalar deleting destructor'(v28);
      }
      if ( v27 < 0 )
        break;
      v29 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager
                                                                                       + 40LL))(
              g_DeviceGraphManager,
              *v23,
              *v21);
      if ( v29 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3E1,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v29);
      v46 = 0LL;
      v42 = (SaDeviceParams **)&v46;
      v30 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v42);
      Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v23, v30);
      std::forward_list<DisplacedStreamGroup>::_Insert_after<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &>(
        (__int64)v49 + 88,
        (__int64 *)v49 + 11,
        (__int64 *)&v46,
        (__int64 *)v45);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v46);
      if ( v45[0] )
        SaDeviceParams::`scalar deleting destructor'(v45[0]);
      if ( ++v23 == v24 )
      {
        v4 = v48;
        goto LABEL_42;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3DF,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v27);
    if ( v45[0] )
      SaDeviceParams::`scalar deleting destructor'(v45[0]);
    if ( (_QWORD)v40 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v40,
        *((__int64 **)&v40 + 1));
      std::_Deallocate<16,0>((void *)v40, (v41 - v40) & 0xFFFFFFFFFFFFFFF8uLL);
      v40 = 0LL;
      v41 = 0LL;
    }
    v7 = v27;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v6);
    if ( (_QWORD)v38 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v38,
        *((__int64 **)&v38 + 1));
      std::_Deallocate<16,0>((void *)v38, (v39 - v38) & 0xFFFFFFFFFFFFFFF8uLL);
      v38 = 0LL;
      v39 = 0LL;
    }
  }
LABEL_50:
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>((_QWORD **)v36);
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v37);
  return v7;
}
