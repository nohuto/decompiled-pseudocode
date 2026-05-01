/*
 * XREFs of _lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator() @ 0x18001EAA4
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Gaming::Preview::GamesEnumeration::GameListEntry_______::Run @ 0x1800220B0 (Windows--Internal--COperationLambdaVar_0__lambda_f9c49c7b293ed1d0382b2914a11b6bf4__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x18000A3B8 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 *     ?GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@5@@Z @ 0x18000A61C (-GetResults@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAPEAU-$IVectorView@.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180012E20 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Set@?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@QEAAJPEAU?$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@3@@Z @ 0x1800204C4 (-Set@-$CMarshaledInterfaceResult@U-$IVectorView@PEAVGameListEntry@GamesEnumeration@Preview@Gamin.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIInspectable@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A1E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIIns_ea_18002A1E0.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AD04 (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator()(_QWORD *a1, __int64 a2)
{
  HSTRING v3; // r12
  __int64 v4; // r14
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *v5; // r15
  char *v6; // rax
  __int64 v7; // rdi
  int v8; // ebx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  signed __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  signed __int64 v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  signed __int32 v20; // eax
  int Results; // eax
  __int64 v22; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v25; // [rsp+80h] [rbp+40h]
  __int64 v26; // [rsp+90h] [rbp+50h] BYREF
  char *v27; // [rsp+98h] [rbp+58h]

  v25 = 0LL;
  v3 = (HSTRING)a1[2];
  v4 = *(_QWORD *)(*a1 + 128LL);
  v5 = *(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager **)(*a1 + 56LL);
  v6 = (char *)operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (__int64)v6;
  v27 = v6;
  if ( !v6 )
  {
    v8 = -2147024882;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_21;
  }
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v6 + 16));
  *(_QWORD *)(v7 + 56) = 1LL;
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable';
  *(_QWORD *)(v7 + 8) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(v7 + 16) = &Microsoft::WRL::RuntimeClass<IInspectable,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable';
  *(_QWORD *)(v7 + 8) = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `IWeakReferenceSource'};
  *(_QWORD *)(v7 + 16) = &Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_QWORD *)(v7 + 80) = 0LL;
  *(_QWORD *)(v7 + 88) = 0LL;
  *(_QWORD *)(v7 + 96) = 0LL;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_QWORD *)(v7 + 112) = 0LL;
  *(_QWORD *)(v7 + 120) = 0LL;
  *(_QWORD *)(v7 + 128) = 0LL;
  *(_QWORD *)(v7 + 136) = 0LL;
  *(_QWORD *)(v7 + 144) = 0LL;
  *(_QWORD *)(v7 + 152) = 0LL;
  v9 = operator new(0x30uLL);
  *v9 = v9;
  v9[1] = v9;
  v9[2] = v9;
  *((_WORD *)v9 + 12) = 257;
  *(_QWORD *)(v7 + 144) = v9;
  *(_QWORD *)(v7 + 160) = 0LL;
  *(_QWORD *)(v7 + 168) = 0LL;
  v10 = operator new(0x30uLL);
  *v10 = v10;
  v10[1] = v10;
  v10[2] = v10;
  *((_WORD *)v10 + 12) = 257;
  *(_QWORD *)(v7 + 160) = v10;
  *(_QWORD *)(v7 + 176) = 0LL;
  *(_QWORD *)(v7 + 184) = 0LL;
  v11 = operator new(0x30uLL);
  *v11 = v11;
  v11[1] = v11;
  v11[2] = v11;
  *((_WORD *)v11 + 12) = 257;
  *(_QWORD *)(v7 + 176) = v11;
  *(_QWORD *)(v7 + 192) = 0LL;
  *(_QWORD *)(v7 + 200) = 0LL;
  v12 = operator new(0x30uLL);
  *v12 = v12;
  v12[1] = v12;
  v12[2] = v12;
  *((_WORD *)v12 + 12) = 257;
  *(_QWORD *)(v7 + 192) = v12;
  *(_QWORD *)(v7 + 208) = 0LL;
  *(_QWORD *)(v7 + 216) = 0LL;
  *(_QWORD *)(v7 + 224) = 0LL;
  v27 = 0LL;
  v8 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::RuntimeClassInitialize(
         (Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *)v7,
         v5,
         (struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *)((v4 + 8) & -(__int64)(v4 != 0)),
         v3);
  if ( v8 < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(
      v7,
      v13,
      v14);
    goto LABEL_7;
  }
  v17 = *(_QWORD *)(v7 + 56);
  if ( v17 < 0 )
  {
    do
    {
LABEL_14:
      v20 = *(_DWORD *)(2 * v17 + 0x10);
      if ( v20 == 0x7FFFFFFF )
        break;
      v13 = (unsigned int)(v20 + 1);
    }
    while ( v20 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v17 + 16), v13, v20) );
  }
  else
  {
    while ( (_DWORD)v17 != 0x7FFFFFFF )
    {
      v13 = v17 + 1;
      v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 56), v17 + 1, v17);
      v18 = v17 == v19;
      v17 = v19;
      if ( v18 )
        break;
      if ( v19 < 0 )
        goto LABEL_14;
    }
  }
  v25 = v7;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(
    v7,
    v13,
    0x7FFFFFFFLL);
  v26 = 0LL;
  Results = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetResults(v7, &v26);
  v8 = Results;
  if ( Results >= 0
    && (Results = Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>>::Set(
                    a2,
                    v26),
        v8 = Results,
        Results >= 0) )
  {
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)Results);
  }
  v22 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
LABEL_21:
  if ( v25 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::Release(
      v25,
      v15,
      v16);
  return (unsigned int)v8;
}
