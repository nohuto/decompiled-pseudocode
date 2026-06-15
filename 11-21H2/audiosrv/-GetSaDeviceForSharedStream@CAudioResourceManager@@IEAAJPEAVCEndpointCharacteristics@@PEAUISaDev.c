/*
 * XREFs of ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@_NPEAVCAudioSessionManager@@55PEAPEAUISaDeviceProxy@@@Z @ 0x18002786C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180010580 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B4B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006251D (memcmp_0.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_0cc657885d15aa5247ecddb70b2ffb21___ @ 0x180064FEC (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1a72d8463880f0e14ce74cfee8687225___ @ 0x1800650C8 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800650C8.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e284818cddefd514231ca0674d05767e___ @ 0x180065434 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_180065434.c)
 *     _lambda_0cc657885d15aa5247ecddb70b2ffb21_::_lambda_0cc657885d15aa5247ecddb70b2ffb21_ @ 0x1800654F0 (_lambda_0cc657885d15aa5247ecddb70b2ffb21_--_lambda_0cc657885d15aa5247ecddb70b2ffb21_.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180065534 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     WPP_SF_ @ 0x1800C61A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C6278 (WPP_SF_d.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800DE2DC (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800ED4E0 (--$_Destroy_range@V-$allocator@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$C.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_4ec59f0c6fb531354bb4e496dd83763a___ @ 0x1800FE0F4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_IS.c)
 *     ??4?$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800FE5BC (--4-$ComPtr@UIAudioMediaType@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x180101924 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIS.c)
 *     ?clear@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXXZ @ 0x18010279C (-clear@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceProx.c)
 *     WPP_SF_P @ 0x180102834 (WPP_SF_P.c)
 *     WPP_SF_i @ 0x180102928 (WPP_SF_i.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream(
        CAudioResourceManager *this,
        const unsigned __int16 **a2,
        struct ISaDeviceResourceManager *a3,
        struct SaDeviceParams *a4,
        unsigned int a5,
        enum _AUDCLNT_SHAREMODE a6,
        struct SaDeviceResourceParams *a7,
        bool a8,
        struct CAudioSessionManager *a9,
        bool a10,
        bool a11,
        struct ISaDeviceProxy **a12)
{
  struct ISaDeviceProxy **v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rbx
  RTL_SRWLOCK *v18; // rcx
  int v19; // edx
  int EndpointStore; // eax
  unsigned int v21; // edi
  struct CEndpointStore *v22; // rbx
  int v23; // eax
  bool v25; // si
  CAudioResourceManager *v26; // rcx
  struct ISaDeviceResourceManager *v27; // r8
  bool v28; // zf
  unsigned int v29; // eax
  int SaDeviceForPackagedApp; // eax
  unsigned int v31; // ebx
  char v32; // r14
  int v33; // eax
  unsigned int v34; // esi
  struct CEndpointStore *v35; // rdi
  int v36; // eax
  char v37; // r12
  _QWORD *v38; // rbx
  struct ISaDeviceProxy **v39; // rdi
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  unsigned __int16 *v42; // r14
  __int64 v43; // rsi
  const void *v44; // rax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r8
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  struct ISaDeviceProxy **v50; // r12
  SaDeviceParams *v51; // r13
  char v52; // si
  _QWORD *v53; // rbx
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // r8
  struct CEndpointStore *v57; // rbx
  int v58; // eax
  unsigned int v59; // edx
  int v60; // eax
  unsigned __int64 v61; // r9
  __int64 v62; // rdx
  unsigned int v63; // edx
  int v64; // ebx
  int v65; // ebx
  __int64 v66; // rax
  __int64 v67; // rdx
  enum _AUDCLNT_SHAREMODE v68; // [rsp+20h] [rbp-B9h]
  unsigned int v69; // [rsp+20h] [rbp-B9h]
  __int128 v70; // [rsp+50h] [rbp-89h] BYREF
  __int64 v71; // [rsp+60h] [rbp-79h]
  struct ISaDeviceProxy **v72; // [rsp+68h] [rbp-71h] BYREF
  SaDeviceParams *v73; // [rsp+70h] [rbp-69h] BYREF
  struct CEndpointStore *v74; // [rsp+78h] [rbp-61h] BYREF
  __int64 v75; // [rsp+80h] [rbp-59h] BYREF
  struct SaDeviceResourceParams *v76; // [rsp+88h] [rbp-51h] BYREF
  __int128 v77; // [rsp+90h] [rbp-49h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-39h]
  struct CEndpointStore *v79; // [rsp+A8h] [rbp-31h] BYREF
  _BYTE v80[16]; // [rsp+B0h] [rbp-29h] BYREF
  __int128 v81; // [rsp+C0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+3Fh]

  v73 = (SaDeviceParams *)a2;
  v76 = a7;
  v15 = a12;
  v72 = a12;
  v81 = *((_OWORD *)a4 + 3);
  v16 = *((int *)a4 + 2);
  if ( v16 >= (unsigned __int64)a2[236] )
  {
    _o_terminate(this);
    __debugbreak();
LABEL_7:
    if ( (_DWORD)v18 != -1 )
    {
      v74 = 0LL;
      EndpointStore = CEndpointStoreCache::GetEndpointStore(v18, a2[3], &v74);
      v21 = EndpointStore;
      v22 = v74;
      if ( EndpointStore < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x734,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)EndpointStore,
          v68);
LABEL_13:
        if ( v22 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v22);
        return v21;
      }
      v70 = 0LL;
      v71 = 0LL;
      v23 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v74 + 13) + 88LL))(
              *((_QWORD *)v74 + 13),
              &v70);
      v21 = v23;
      if ( v23 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x737,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v23,
          v68);
        if ( (_QWORD)v70 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(v70, *((_QWORD *)&v70 + 1));
          std::_Deallocate<16,0>((void *)v70, (v71 - v70) & 0xFFFFFFFFFFFFFFF8uLL);
          v70 = 0LL;
          v71 = 0LL;
        }
        goto LABEL_13;
      }
      std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_4ec59f0c6fb531354bb4e496dd83763a___(
        &v79,
        v70,
        *((_QWORD *)&v70 + 1),
        a4);
      v25 = v79 != *((struct CEndpointStore **)&v70 + 1);
      v21 = v79 != *((struct CEndpointStore **)&v70 + 1) ? 0x887C0043 : 0;
      if ( (_QWORD)v70 )
      {
        ((void (*)(void))std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>)();
        std::_Deallocate<16,0>((void *)v70, (v71 - v70) & 0xFFFFFFFFFFFFFFF8uLL);
        v70 = 0LL;
        v71 = 0LL;
      }
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v22);
      v28 = !v25;
      v15 = v72;
      if ( !v28 )
        goto LABEL_26;
    }
    goto LABEL_19;
  }
  v17 = (__int64)&a2[237][8 * v16];
  v18 = 0LL;
  v19 = *(_DWORD *)(v17 + 8);
  if ( v19 > 0 )
  {
    while ( *(_OWORD *)(*(_QWORD *)v17 + 16LL * (int)v18) != v81 )
    {
      v18 = (RTL_SRWLOCK *)(unsigned int)((_DWORD)v18 + 1);
      if ( (int)v18 >= v19 )
        goto LABEL_19;
    }
    goto LABEL_7;
  }
LABEL_19:
  v68 = a6;
  if ( a3 )
    v29 = (*(__int64 (__fastcall **)(struct ISaDeviceResourceManager *, const unsigned __int16 **, struct SaDeviceParams *, _QWORD))(*(_QWORD *)a3 + 48LL))(
            a3,
            a2,
            a4,
            a5);
  else
    v29 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, const unsigned __int16 **, struct SaDeviceParams *, _QWORD))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            a2,
            a4,
            a5);
  v21 = v29;
  v26 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids, v29);
  }
LABEL_26:
  if ( v21 == -2005139364 )
  {
    if ( a8 )
    {
      SaDeviceForPackagedApp = CAudioResourceManager::RetryGetSaDeviceForPackagedApp(
                                 v26,
                                 (struct CEndpointCharacteristics *)a2,
                                 v27,
                                 a4,
                                 a5,
                                 a6,
                                 v76,
                                 a9,
                                 v15);
      v31 = SaDeviceForPackagedApp;
      if ( SaDeviceForPackagedApp >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x760,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)SaDeviceForPackagedApp,
        v69);
      return v31;
    }
    goto LABEL_33;
  }
  if ( v21 != -2005139360 && v21 != -2005139389 )
  {
    if ( (v21 & 0x80000000) == 0 )
      return 0LL;
LABEL_33:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x852,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v21,
      v68);
    return v21;
  }
  v32 = 0;
  v79 = 0LL;
  v33 = CEndpointStoreCache::GetEndpointStore((RTL_SRWLOCK *)v26, *(const unsigned __int16 **)a4, &v79);
  v34 = v33;
  v35 = v79;
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x76E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v33,
      v68);
LABEL_138:
    if ( v35 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v35);
    return v34;
  }
  v77 = 0LL;
  v78 = 0LL;
  v36 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)v79 + 13) + 88LL))(*((_QWORD *)v79 + 13), &v77);
  v34 = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x771,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v36,
      v68);
LABEL_136:
    if ( (_QWORD)v77 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(v77, *((_QWORD *)&v77 + 1));
      std::_Deallocate<16,0>((void *)v77, (v78 - v77) & 0xFFFFFFFFFFFFFFF8uLL);
      v77 = 0LL;
      v78 = 0LL;
    }
    goto LABEL_138;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_P(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
      (__int64)(*((_QWORD *)&v77 + 1) - v77) >> 3);
  }
  v75 = 0LL;
  v37 = 0;
  v38 = (_QWORD *)v77;
  v39 = v72;
  while ( 1 )
  {
    v40 = (_QWORD *)*((_QWORD *)&v77 + 1);
    if ( v38 == *((_QWORD **)&v77 + 1) )
      break;
    v41 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v38 + 40LL))(*v38, &v81);
    if ( *v41 == *((_QWORD *)a4 + 6)
      && v41[1] == *((_QWORD *)a4 + 7)
      && (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 80LL))(*v38) == *((_DWORD *)a4 + 2)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 88LL))(*v38) )
    {
      if ( !a11
        || (v42 = (unsigned __int16 *)*((_QWORD *)a4 + 2),
            v43 = v42[8],
            v44 = (const void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 48LL))(*v38),
            v45 = memcmp_0(v44, v42, v43 + 18),
            v32 = 0,
            !v45) )
      {
        if ( a10 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 32LL))(*v38) != *((_QWORD *)a4 + 4) )
            goto LABEL_65;
        }
        else if ( v37 || (v37 = 0, (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 136LL))(*v38)) )
        {
          v37 = 1;
        }
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v46 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 32LL))(*v38);
          WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, v47, v46);
        }
        Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v75, v38);
        v48 = abs64((*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 32LL))(*v38) - *((_QWORD *)a4 + 4));
        v49 = v75;
        if ( v75 && v48 && v37 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
          v49 = v75;
        }
        v75 = 0LL;
        *v39 = (struct ISaDeviceProxy *)v49;
      }
    }
LABEL_65:
    ++v38;
  }
  v50 = v39;
  v28 = *v39 == 0LL;
  v35 = v79;
  v51 = v73;
  if ( !v28 )
    goto LABEL_105;
  v72 = 0LL;
  v52 = 0;
  v53 = (_QWORD *)v77;
  while ( 2 )
  {
    if ( v53 == v40 )
      goto LABEL_127;
    v54 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v53 + 40LL))(*v53, &v81);
    if ( *v54 != *((_QWORD *)a4 + 6)
      || v54[1] != *((_QWORD *)a4 + 7)
      || (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v53 + 80LL))(*v53) != *((_DWORD *)a4 + 2)
      || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v53 + 88LL))(*v53) )
    {
LABEL_77:
      ++v53;
      v40 = (_QWORD *)*((_QWORD *)&v77 + 1);
      continue;
    }
    break;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v53 + 152LL))(*v53) )
  {
    v52 = 1;
    goto LABEL_77;
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v53 + 120LL))(*v53) )
  {
    v32 = 1;
    goto LABEL_77;
  }
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v55 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v53 + 32LL))(*v53);
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, v56, v55);
  }
  Microsoft::WRL::ComPtr<IAudioMediaType>::operator=(&v72, v53);
  v57 = (struct CEndpointStore *)v72;
  if ( !v72 )
  {
LABEL_127:
    if ( !a11 && !a10 )
      goto LABEL_133;
    if ( v32 )
    {
      v34 = -2004287448;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7EF,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)0x88890028LL,
        v68);
      goto LABEL_135;
    }
    if ( v52 )
    {
      v34 = -2004287447;
      v67 = 2032LL;
    }
    else
    {
LABEL_133:
      v34 = -2005139360;
      v67 = 2034LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v67,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v34,
      v68);
    goto LABEL_135;
  }
  v73 = 0LL;
  v58 = (*((__int64 (__fastcall **)(struct ISaDeviceProxy **, SaDeviceParams **))*v72 + 13))(v72, &v73);
  v34 = v58;
  if ( v58 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7F8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v58,
      v68);
    goto LABEL_124;
  }
  v70 = 0LL;
  v71 = 0LL;
  v60 = (*(__int64 (__fastcall **)(_QWORD, struct CEndpointStore *, __int128 *))(**((_QWORD **)v35 + 13) + 112LL))(
          *((_QWORD *)v35 + 13),
          v57,
          &v70);
  v34 = v60;
  if ( v60 < 0 )
  {
    v61 = (unsigned int)v60;
    v62 = 2044LL;
LABEL_122:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v62,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)v61,
      v68);
    if ( (_QWORD)v70 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v70, *((_QWORD *)&v70 + 1));
      std::_Deallocate<16,0>((void *)v70, (v71 - v70) & 0xFFFFFFFFFFFFFFF8uLL);
      v70 = 0LL;
      v71 = 0LL;
    }
LABEL_124:
    if ( v73 )
      SaDeviceParams::`scalar deleting destructor'(v73, v59);
    v73 = 0LL;
LABEL_135:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v72);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
    goto LABEL_136;
  }
  v74 = v57;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v74);
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_e284818cddefd514231ca0674d05767e___(
    v80,
    v70,
    *((_QWORD *)&v70 + 1),
    &v74);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(v80);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids);
  }
  std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::clear(&v77);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v72);
  v34 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, SaDeviceParams *, struct SaDeviceParams *, _QWORD, enum _AUDCLNT_SHAREMODE, struct SaDeviceResourceParams *, _QWORD, _QWORD, struct ISaDeviceProxy **))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
          g_DeviceGraphManager,
          v51,
          a4,
          a5,
          a6,
          v76,
          0LL,
          0LL,
          v50);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids, v34);
  }
  if ( (v34 & 0x80000000) != 0 )
  {
    v74 = 0LL;
    v68 = AUDCLNT_SHAREMODE_SHARED;
    v64 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, SaDeviceParams *, SaDeviceParams *, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
            g_DeviceGraphManager,
            v51,
            v73,
            2LL);
    if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        19LL,
        &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
        (unsigned int)v64);
    }
    if ( v64 >= 0 )
    {
      v76 = 0LL;
      v68 = AUDCLNT_SHAREMODE_SHARED;
      v65 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, SaDeviceParams *, SaDeviceParams *, __int64))(*(_QWORD *)g_DeviceGraphManager + 24LL))(
              g_DeviceGraphManager,
              v51,
              v73,
              2LL);
      if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          20LL,
          &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
          (unsigned int)v65);
      }
      if ( v65 >= 0 )
      {
        v66 = lambda_0cc657885d15aa5247ecddb70b2ffb21_::_lambda_0cc657885d15aa5247ecddb70b2ffb21_(v80, &v76);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_0cc657885d15aa5247ecddb70b2ffb21___(
          &v81,
          v70,
          *((_QWORD *)&v70 + 1),
          v66);
        ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v81);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v76);
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v74);
    v61 = v34;
    v62 = 2125LL;
    goto LABEL_122;
  }
  std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_1a72d8463880f0e14ce74cfee8687225___(
    &v81,
    v70,
    *((_QWORD *)&v70 + 1),
    v50);
  if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids);
  }
  if ( (_QWORD)v70 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v70, *((_QWORD *)&v70 + 1));
    std::_Deallocate<16,0>((void *)v70, (v71 - v70) & 0xFFFFFFFFFFFFFFF8uLL);
    v70 = 0LL;
    v71 = 0LL;
  }
  if ( v73 )
    SaDeviceParams::`scalar deleting destructor'(v73, v63);
  v73 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v72);
LABEL_105:
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v75);
  if ( (_QWORD)v77 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(v77, *((_QWORD *)&v77 + 1));
    std::_Deallocate<16,0>((void *)v77, (v78 - v77) & 0xFFFFFFFFFFFFFFF8uLL);
    v77 = 0LL;
    v78 = 0LL;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v35);
  return 0LL;
}
