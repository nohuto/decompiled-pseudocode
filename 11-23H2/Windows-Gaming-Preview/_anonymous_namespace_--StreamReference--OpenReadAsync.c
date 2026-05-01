/*
 * XREFs of _anonymous_namespace_::StreamReference::OpenReadAsync @ 0x180014450
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180013390 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     _anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize @ 0x180014264 (_anonymous_namespace_--DummyAsyncOperation--RuntimeClassInitialize.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOperation.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@UIAsyncInfo@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015820 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IAsyncOp.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall anonymous_namespace_::StreamReference::OpenReadAsync(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  int Interface; // edi
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  char *v7; // rbx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(a1 + 64) + 56LL))(
         *(_QWORD *)(a1 + 64),
         5LL,
         *(unsigned int *)(a1 + 72),
         &v11);
  Interface = v3;
  if ( v3 < 0 )
  {
    v5 = (unsigned int)v3;
    v6 = 182LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v5);
    goto LABEL_13;
  }
  *a2 = 0LL;
  v7 = (char *)operator new(0xB0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
  {
    Interface = -2147024882;
LABEL_10:
    v5 = (unsigned int)Interface;
    v6 = 184LL;
    goto LABEL_11;
  }
  *(_QWORD *)v7 = &Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>::`vftable';
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v7 + 24));
  *((_QWORD *)v7 + 8) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>'};
  *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v7 + 2) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `IAsyncInfo'};
  *((_QWORD *)v7 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = off_180050998;
  *((_QWORD *)v7 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,IAsyncInfo,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)v7 + 2) = off_180050940;
  *((_QWORD *)v7 + 3) = &Microsoft::WRL::RuntimeClass<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v7 + 9) = 0LL;
  *((_QWORD *)v7 + 10) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)(v7 + 88), 2);
  *((_QWORD *)v7 + 21) = 0LL;
  Interface = anonymous_namespace_::DummyAsyncOperation::RuntimeClassInitialize((__int64)v7, &v11);
  if ( Interface < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v7);
    goto LABEL_10;
  }
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::QueryInterface(
                v7,
                &GUID_c4a57c5e_32b0_55b3_ad13_ce1c23041ed6,
                a2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStreamWithContentType *>,IAsyncInfo,Microsoft::WRL::FtmBase>::Release(v7);
  if ( Interface < 0 )
    goto LABEL_10;
  Interface = 0;
LABEL_13:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)Interface;
}
