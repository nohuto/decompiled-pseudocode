/*
 * XREFs of _lambda_931ff4dcdbf02296ac50d8c7315cbe71_::operator() @ 0x1800144C8
 * Callers:
 *     ?GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x180014440 (-GetLogo@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foun.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180012E20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@@Z @ 0x180014678 (-_GetFileProperties@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180015070 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStre.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAccessStreamReference@Streams@Storage@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180015130 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIRandomAcc.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_931ff4dcdbf02296ac50d8c7315cbe71_::operator()(__int64 a1)
{
  int FileProperties; // eax
  int Interface; // ebx
  unsigned __int64 v4; // r9
  __int64 v5; // rdx
  int v6; // ebp
  _QWORD *v7; // rsi
  char *v8; // rax
  char *v9; // rdi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v16 = 0LL;
  FileProperties = Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileProperties(
                     *(_QWORD *)a1,
                     &v16);
  Interface = FileProperties;
  if ( FileProperties < 0 )
  {
    v4 = (unsigned int)FileProperties;
    v5 = 275LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v4);
    goto LABEL_13;
  }
  v6 = (int)fmaxf(**(float **)(a1 + 8), *(float *)(*(_QWORD *)(a1 + 8) + 4LL));
  v7 = **(_QWORD ***)(a1 + 16);
  *v7 = 0LL;
  v8 = (char *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    Interface = -2147024882;
LABEL_10:
    v4 = (unsigned int)Interface;
    v5 = 279LL;
    goto LABEL_11;
  }
  v10 = v8 + 16;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 16));
  *((_QWORD *)v9 + 7) = 1LL;
  *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable';
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v9 = &off_18004F900;
  *((_QWORD *)v9 + 1) = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *v10 = &Microsoft::WRL::RuntimeClass<Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)v9 + 8) = 0LL;
  *((_DWORD *)v9 + 18) = 0;
  v11 = v16;
  v16 = 0LL;
  v12 = *((_QWORD *)v9 + 8);
  *((_QWORD *)v9 + 8) = v11;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *((_DWORD *)v9 + 18) = v6;
  Interface = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::QueryInterface(
                v9,
                &GUID_33ee3134_1dd6_4e3a_8067_d1c162e8642b,
                v7);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Storage::Streams::IRandomAccessStreamReference,Microsoft::WRL::FtmBase>::Release(v9);
  if ( Interface < 0 )
    goto LABEL_10;
  Interface = 0;
LABEL_13:
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return (unsigned int)Interface;
}
