/*
 * XREFs of ?ReleaseSaDevices@CBtLeAudioResourceManager@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800FCA48
 * Callers:
 *     ?RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800FC028 (-RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
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
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Insert_after@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@AEAAXPEAU?$_Flist_node@UDisplacedStreamGroup@@PEAX@1@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@@Z @ 0x1800F4E0C (--$_Insert_after@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 *     ??1?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800F5430 (--1-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CBtLeAudioResourceManager::ReleaseSaDevices(__int64 a1, __int64 a2, __int64 *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 *v6; // rdi
  __int64 *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rbx
  _QWORD *i; // rbx
  int v11; // eax
  int v12; // esi
  __int64 **j; // rsi
  __int64 **v14; // r14
  int v15; // eax
  __int64 *v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 **v19; // r12
  int v20; // eax
  _QWORD *k; // rsi
  _QWORD *v22; // r15
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // r14d
  SaDeviceParams *v26; // rcx
  int v27; // eax
  __int64 *v28; // rax
  _QWORD *v30; // rdi
  _QWORD *v31; // rbx
  _QWORD *v32; // rdi
  _QWORD *v33; // rbx
  int v34[4]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v35; // [rsp+30h] [rbp-89h]
  __int128 v36; // [rsp+38h] [rbp-81h] BYREF
  __int64 v37; // [rsp+48h] [rbp-71h]
  __int128 v38; // [rsp+50h] [rbp-69h] BYREF
  __int64 v39; // [rsp+60h] [rbp-59h]
  SaDeviceParams **v40; // [rsp+68h] [rbp-51h] BYREF
  unsigned int v41[2]; // [rsp+70h] [rbp-49h] BYREF
  char v42; // [rsp+78h] [rbp-41h]
  _QWORD **v43; // [rsp+80h] [rbp-39h] BYREF
  __int64 v44; // [rsp+88h] [rbp-31h]
  _QWORD v45[16]; // [rsp+90h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  _QWORD *v47; // [rsp+120h] [rbp+67h] BYREF
  _QWORD *v48; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 *v49; // [rsp+130h] [rbp+77h]
  SaDeviceParams *v50; // [rsp+138h] [rbp+7Fh] BYREF

  v49 = a3;
  v48 = 0LL;
  v47 = 0LL;
  *(_OWORD *)v34 = 0LL;
  v35 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(a2 + 104) + 104LL))(*(_QWORD *)(a2 + 104), v34);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v4);
    if ( *(_QWORD *)v34 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        *(__int64 **)v34,
        *(__int64 **)&v34[2]);
      std::_Deallocate<16,0>(*(void **)v34, (v35 - *(_QWORD *)v34) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_OWORD *)v34 = 0LL;
      v35 = 0LL;
    }
LABEL_49:
    std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v47);
    std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::~forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v48);
    return v5;
  }
  v6 = *(__int64 **)v34;
  v7 = *(__int64 **)&v34[2];
  if ( *(_QWORD *)v34 != *(_QWORD *)&v34[2] )
  {
    v43 = &v47;
    v44 = 0LL;
    do
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)*v6 + 80LL))(*v6) == 1 )
      {
        v40 = (SaDeviceParams **)&v48;
        *(_QWORD *)v41 = 0LL;
        v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
        v8[1] = *v6;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8 + 1);
        *v8 = v48;
        *(_QWORD *)v41 = 0LL;
        v48 = v8;
      }
      v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      v9[1] = *v6;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v9 + 1);
      *v9 = v47;
      v44 = 0LL;
      v47 = v9;
      ++v6;
    }
    while ( v6 != v7 );
    v7 = *(__int64 **)&v34[2];
    v6 = *(__int64 **)v34;
  }
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v6, v7);
    std::_Deallocate<16,0>(*(void **)v34, (v35 - *(_QWORD *)v34) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  for ( i = v48; i; i = (_QWORD *)*i )
  {
    v36 = 0LL;
    v37 = 0LL;
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(a2 + 104) + 112LL))(
            *(_QWORD *)(a2 + 104),
            i[1],
            &v36);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
        (const char *)(unsigned int)v11);
      if ( (_QWORD)v36 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v36,
          *((__int64 **)&v36 + 1));
        std::_Deallocate<16,0>((void *)v36, (v37 - v36) & 0xFFFFFFFFFFFFFFF8uLL);
        v36 = 0LL;
        v37 = 0LL;
      }
      v5 = v12;
      goto LABEL_49;
    }
    v14 = (__int64 **)*((_QWORD *)&v36 + 1);
    for ( j = (__int64 **)v36; j != v14; ++j )
    {
      v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64 *, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                       + 40LL))(
              g_DeviceGraphManager,
              *j,
              i[1]);
      if ( v15 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x113,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
          (const char *)(unsigned int)v15);
      v16 = *j;
      v17 = **j;
      v45[0] = off_18017C198;
      v45[7] = v45;
      (*(void (__fastcall **)(__int64 *, _QWORD *))(v17 + 384))(v16, v45);
    }
    Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(i + 1);
    if ( (_QWORD)v36 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v36,
        *((__int64 **)&v36 + 1));
      std::_Deallocate<16,0>((void *)v36, (v37 - v36) & 0xFFFFFFFFFFFFFFF8uLL);
    }
  }
  v18 = v47;
LABEL_27:
  if ( v18 )
  {
    v19 = (__int64 **)(v18 + 1);
    v38 = 0LL;
    v39 = 0LL;
    v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**(_QWORD **)(a2 + 104) + 112LL))(
            *(_QWORD *)(a2 + 104),
            v18[1],
            &v38);
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x124,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
        (const char *)(unsigned int)v20);
    v22 = (_QWORD *)*((_QWORD *)&v38 + 1);
    for ( k = (_QWORD *)v38; ; ++k )
    {
      if ( k == v22 )
      {
        Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v18 + 1);
        if ( (_QWORD)v38 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            (__int64 *)v38,
            *((__int64 **)&v38 + 1));
          std::_Deallocate<16,0>((void *)v38, (v39 - v38) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v18 = (_QWORD *)*v18;
        goto LABEL_27;
      }
      v50 = 0LL;
      v23 = *v19;
      v24 = **v19;
      v40 = &v50;
      *(_QWORD *)v41 = 0LL;
      v42 = 1;
      v25 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(v24 + 104))(v23, v41);
      if ( v42 )
      {
        v26 = *v40;
        *v40 = *(SaDeviceParams **)v41;
        if ( v26 )
          SaDeviceParams::`scalar deleting destructor'(v26);
      }
      if ( v25 < 0 )
        break;
      v27 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager
                                                                                       + 40LL))(
              g_DeviceGraphManager,
              *k,
              *v19);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
          (const char *)(unsigned int)v27);
      v43 = 0LL;
      v40 = (SaDeviceParams **)&v43;
      v28 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *((__int64 **)&v40);
      Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*k, v28);
      std::forward_list<DisplacedStreamGroup>::_Insert_after<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &>(
        (__int64)v49,
        v49,
        (__int64 *)&v43,
        (__int64 *)&v50);
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v43);
      if ( v50 )
        SaDeviceParams::`scalar deleting destructor'(v50);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btleaudioresourcemanager.cpp",
      (const char *)(unsigned int)v25);
    if ( v50 )
      SaDeviceParams::`scalar deleting destructor'(v50);
    if ( (_QWORD)v38 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        (__int64 *)v38,
        *((__int64 **)&v38 + 1));
      std::_Deallocate<16,0>((void *)v38, (v39 - v38) & 0xFFFFFFFFFFFFFFF8uLL);
      v38 = 0LL;
      v39 = 0LL;
    }
    v5 = v25;
    goto LABEL_49;
  }
  v30 = v47;
  v47 = 0LL;
  if ( v30 )
  {
    do
    {
      v31 = (_QWORD *)*v30;
      Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease(v30 + 1);
      std::_Deallocate<16,0>(v30, 0x10uLL);
      v30 = v31;
    }
    while ( v31 );
  }
  v32 = v48;
  v48 = 0LL;
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
  return 0LL;
}
