/*
 * XREFs of ?RuntimeClassInitialize@CExclusiveModeListener@@QEAAJXZ @ 0x18013B05C
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@@Z @ 0x180133018 (--$MakeAndInitialize@VCExclusiveModeListener@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCExclusive.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18004AC60 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ @ 0x180082420 (--1-$ComPtr@VCAudioStream@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$DelegateInvokeHelper@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@@WRL@Microsoft@@V_lambda_fd84fb861bda8361cc33008a6db9ede3_@@$0?0PEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@789@@?$DelegateArgTraits@P8?$ITypedEventHandler_impl@U?$AggregateType@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplayWatcher@2345@@Internal@Foundation@Windows@@U?$AggregateType@PEAVHolographicDisplay@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@234@@234@@Foundation@Windows@@EAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@3@PEAUIHolographicDisplay@673@@Z@Details@WRL@Microsoft@@QEAA@$$QEAV_lambda_fd84fb861bda8361cc33008a6db9ede3_@@@Z @ 0x180139D48 (--0-$DelegateInvokeHelper@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHa.c)
 *     ?LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z @ 0x18013A184 (-LogExclusiveModeListenerRunning@CSpatialAudioResourceManagerTraceLogger@@QEAAXH@Z.c)
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18013A780 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ @ 0x18013BA70 (-UpdateExclusiveViewingMode@CExclusiveModeListener@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CExclusiveModeListener::RuntimeClassInitialize(LPVOID *this)
{
  _QWORD *v2; // rdi
  HRESULT Instance; // ebx
  __int64 v4; // rdx
  __int64 **v6; // rsi
  LPVOID v7; // rcx
  __int64 *v8; // rbx
  __int64 (__fastcall *v9)(__int64 *, LPVOID *); // rdi
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **v10; // r15
  LPVOID v11; // rdx
  LPVOID v12; // rax
  __int64 v13; // rdi
  unsigned int updated; // esi
  LPVOID v15; // rax
  __int64 v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  const CHAR *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct Windows::Graphics::Holographic::IHolographicDisplay *v32; // [rsp+40h] [rbp-19h] BYREF
  unsigned int v33; // [rsp+48h] [rbp-11h] BYREF
  __int128 v34; // [rsp+50h] [rbp-9h] BYREF
  __int64 v35; // [rsp+60h] [rbp+7h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v37; // [rsp+80h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v2 = this + 7;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
               this + 7);
  if ( Instance < 0 )
  {
    v4 = 37LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(*(_QWORD *)*v2 + 48LL))(*v2, this);
  if ( Instance < 0 )
  {
    v4 = 38LL;
    goto LABEL_3;
  }
  v6 = (__int64 **)(this + 8);
  v7 = this[8];
  this[8] = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  v37 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Graphics.Holographic.HolographicDisplay",
    0x30u,
    0x2Fu);
  Instance = RoGetActivationFactory(v37, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, this + 8);
  if ( Instance < 0 )
  {
    v4 = 40LL;
    goto LABEL_3;
  }
  v8 = *v6;
  v9 = *(__int64 (__fastcall **)(__int64 *, LPVOID *))(**v6 + 48);
  v10 = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **)(this + 9);
  v11 = this[9];
  this[9] = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
  Instance = v9(v8, this + 9);
  if ( Instance < 0 )
  {
    v4 = 41LL;
    goto LABEL_3;
  }
  *(_QWORD *)&v34 = CExclusiveModeListener::OnHmdAdded;
  DWORD2(v34) = 0;
  hstringHeader.Reserved.Reserved1 = this;
  *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v34;
  v12 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v12 )
    v13 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Graphics::Holographic::HolographicDisplay *,Windows::Graphics::Holographic::IHolographicDisplay *>>::*)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase>,_lambda_fd84fb861bda8361cc33008a6db9ede3_,-1,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase>,_lambda_fd84fb861bda8361cc33008a6db9ede3_,-1,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *>(
            (__int64)v12,
            (__int64)&hstringHeader);
  else
    v13 = 0LL;
  v35 = v13;
  if ( v13 )
  {
    *(_QWORD *)&v34 = CExclusiveModeListener::OnHmdRemoved;
    DWORD2(v34) = 0;
    hstringHeader.Reserved.Reserved1 = this;
    *(_OWORD *)&hstringHeader.Reserved.Reserved2[8] = v34;
    v15 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v15 )
      v16 = Microsoft::WRL::Details::DelegateArgTraits<long (Windows::Foundation::ITypedEventHandler_impl<Windows::Foundation::Internal::AggregateType<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *>,Windows::Foundation::Internal::AggregateType<Windows::Graphics::Holographic::HolographicDisplay *,Windows::Graphics::Holographic::IHolographicDisplay *>>::*)(Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *)>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase>,_lambda_fd84fb861bda8361cc33008a6db9ede3_,-1,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *>::DelegateInvokeHelper<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase>,_lambda_fd84fb861bda8361cc33008a6db9ede3_,-1,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Graphics::Holographic::IHolographicDisplay *>(
              (__int64)v15,
              (__int64)&hstringHeader);
    else
      v16 = 0LL;
    *(_QWORD *)&v34 = v16;
    if ( v16 )
    {
      v32 = 0LL;
      v17 = *v6;
      v18 = **v6;
      v32 = 0LL;
      if ( (*(int (__fastcall **)(__int64 *, struct Windows::Graphics::Holographic::IHolographicDisplay **))(v18 + 64))(
             v17,
             &v32) >= 0
        && v32
        && (v19 = CExclusiveModeListener::OnHmdAdded((CExclusiveModeListener *)this, *v10, v32), updated = v19, v19 < 0) )
      {
        v20 = (unsigned int)v19;
        v21 = 53LL;
      }
      else
      {
        v22 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, char *))(*(_QWORD *)*v10 + 56LL))(
                *v10,
                v13,
                (char *)this + 120);
        updated = v22;
        if ( v22 >= 0 )
        {
          v23 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *, __int64, char *))(*(_QWORD *)*v10 + 72LL))(
                  *v10,
                  v16,
                  (char *)this + 128);
          updated = v23;
          if ( v23 >= 0 )
          {
            v24 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)*v10 + 120LL))(*v10);
            updated = v24;
            if ( v24 >= 0 )
            {
              v33 = 0;
              v25 = RtlQueryWnfStateData(
                      &v33,
                      WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                      CExclusiveModeListener::SpatialApplicationInfoUpdateCallback,
                      this,
                      0LL);
              updated = v25 | 0x10000000;
              if ( v25 >= 0 )
              {
                v26 = RtlSubscribeWnfStateChangeNotification(
                        this + 44,
                        WNF_SHEL_APPLICATION_SPATIAL_INFO_UPDATE,
                        v33,
                        CExclusiveModeListener::SpatialApplicationInfoUpdateCallback,
                        this,
                        0LL,
                        0,
                        0);
                updated = v26 | 0x10000000;
                if ( v26 >= 0 )
                {
                  v33 = 0;
                  v27 = RtlQueryWnfStateData(
                          &v33,
                          WNF_HOLO_SHELL_STATE_INTERACTIVE_USER,
                          CExclusiveModeListener::HoloshellStateChangeCallback,
                          this,
                          0LL);
                  updated = v27 | 0x10000000;
                  if ( v27 >= 0 )
                  {
                    v28 = RtlSubscribeWnfStateChangeNotification(
                            this + 45,
                            WNF_HOLO_SHELL_STATE_INTERACTIVE_USER,
                            v33,
                            CExclusiveModeListener::HoloshellStateChangeCallback,
                            this,
                            0LL,
                            0,
                            0);
                    updated = v28 | 0x10000000;
                    if ( v28 >= 0 )
                    {
                      CSpatialAudioResourceManagerTraceLogger::LogExclusiveModeListenerRunning(v29, 1, v30, v31);
                      *((_BYTE *)this + 377) = 1;
                      updated = CExclusiveModeListener::UpdateExclusiveViewingMode((CExclusiveModeListener *)this);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
                      return updated;
                    }
                    v21 = 96LL;
                  }
                  else
                  {
                    v21 = 87LL;
                  }
                }
                else
                {
                  v21 = 77LL;
                }
              }
              else
              {
                v21 = 68LL;
              }
              v20 = updated;
            }
            else
            {
              v20 = (unsigned int)v24;
              v21 = 58LL;
            }
          }
          else
          {
            v20 = (unsigned int)v23;
            v21 = 57LL;
          }
        }
        else
        {
          v20 = (unsigned int)v22;
          v21 = 56LL;
        }
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
    }
    else
    {
      updated = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        (const char *)0x8007000ELL);
    }
    Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v34);
  }
  else
  {
    updated = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2C,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      (const char *)0x8007000ELL);
  }
  Microsoft::WRL::ComPtr<CAudioStream>::~ComPtr<CAudioStream>(&v35);
  return updated;
}
