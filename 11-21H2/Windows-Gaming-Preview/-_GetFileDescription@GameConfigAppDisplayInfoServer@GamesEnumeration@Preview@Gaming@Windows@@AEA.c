/*
 * XREFs of ?_GetFileDescription@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@UIStorageItemProperties@Storage@Windows@@@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z @ 0x18001483C
 * Callers:
 *     _lambda_d5146fe69570c6dcc5cf92f3d06ab487_::operator() @ 0x1800142D8 (_lambda_d5146fe69570c6dcc5cf92f3d06ab487_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000C240 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IVector@PEAVGam.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18001362C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@U?$IIterable@PEAUHSTRING__@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180014F00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0_ea_180014F00.c)
 *     ??0?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUHSTRING__@@@1234@Upermission@01234@@Z @ 0x180016594 (--0-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foun.c)
 *     ?InsertAtInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUHSTRING__@@_N@Z @ 0x180016680 (-InsertAtInternal@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@C.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180017594 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collecti.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=56
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription(
        __int64 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  volatile signed __int64 *v9; // rbx
  void *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  HSTRING v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  HSTRING v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // r9
  __int64 v29; // rdx
  int v30; // eax
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, HSTRING *); // rdi
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // rdx
  HSTRING v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  HSTRING v44; // [rsp+20h] [rbp-60h] BYREF
  __int64 v45; // [rsp+28h] [rbp-58h] BYREF
  __int64 v46; // [rsp+30h] [rbp-50h] BYREF
  __int64 v47; // [rsp+38h] [rbp-48h] BYREF
  __int64 v48; // [rsp+40h] [rbp-40h] BYREF
  __int64 v49; // [rsp+48h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  string = 0LL;
  v5 = WindowsCreateStringReference(L"System.FileDescription", 0x16u, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    JUMPOUT(0x180014E1DLL);
  }
  v47 = 0LL;
  v46 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a2 + 96LL))(*a2, &v46);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x148,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
LABEL_28:
    v21 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    goto LABEL_67;
  }
  v45 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v46)(
         v46,
         &GUID_c54361b2_54cd_432b_bdbc_4b19c4b470d7,
         &v45);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v8);
LABEL_26:
    v20 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    goto LABEL_28;
  }
  v9 = 0LL;
  v49 = 0LL;
  v10 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    v12 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>(v10);
    v13 = v12;
    if ( v12 )
    {
      v9 = (volatile signed __int64 *)v12;
      v49 = v12;
      v13 = 0LL;
      v7 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v7 = -2147024882;
LABEL_11:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v7 < 0 )
  {
    v14 = (unsigned int)v7;
    v15 = 334LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v14);
LABEL_24:
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v9);
    goto LABEL_26;
  }
  LOBYTE(v11) = 1;
  v16 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::InsertAtInternal(
          v9,
          0LL,
          string,
          v11);
  v7 = v16;
  if ( v16 < 0 )
  {
    v14 = (unsigned int)v16;
    v15 = 336LL;
    goto LABEL_17;
  }
  v44 = 0LL;
  v17 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<HSTRING__ *>,Windows::Foundation::Collections::IIterable<HSTRING__ *>,Microsoft::WRL::FtmBase>::QueryInterface(
          v9,
          &GUID_e2fcc7c1_3bfc_5a0b_b2b0_72e769d1cb7e,
          &v44);
  v7 = v17;
  if ( v17 < 0 )
  {
    v18 = 339LL;
    goto LABEL_22;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v45 + 48LL))(v45, v44, &v47);
  v7 = v17;
  if ( v17 < 0 )
  {
    v18 = 345LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v17);
    v19 = v44;
    if ( v44 )
    {
      v44 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 16LL))(v19);
    }
    goto LABEL_24;
  }
  v22 = v44;
  if ( v44 )
  {
    v44 = 0LL;
    (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
  }
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Windows::Foundation::Collections::IIterable<Windows::Gaming::Preview::GamesEnumeration::GameListEntry *>,Microsoft::WRL::FtmBase>::Release(v9);
  v23 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v46;
  if ( v46 )
  {
    v46 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  v25 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *> *> *>(v47);
  v7 = v25;
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x161,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)(unsigned int)v25);
    goto LABEL_67;
  }
  v48 = 0LL;
  v26 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v47 + 64LL))(v47, &v48);
  v7 = v26;
  if ( v26 >= 0 )
  {
    v45 = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v48 + 48LL))(v48, string, &v45);
    v7 = v27;
    if ( v27 >= 0 )
    {
      if ( v45 )
      {
        v46 = 0LL;
        v30 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v45)(
                v45,
                &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62,
                &v46);
        v7 = v30;
        if ( v30 >= 0 )
        {
          v44 = 0LL;
          v31 = v46;
          v32 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v46 + 152LL);
          WindowsDeleteString(0LL);
          v44 = 0LL;
          v33 = v32(v31, &v44);
          v7 = v33;
          if ( v33 >= 0 )
          {
            if ( v44 && !WindowsIsStringEmpty(v44) )
            {
              v36 = v44;
              v44 = 0LL;
              *a3 = v36;
              WindowsDeleteString(0LL);
              v44 = 0LL;
              v37 = v46;
              if ( v46 )
              {
                v46 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
              }
              v38 = v45;
              if ( v45 )
              {
                v45 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
              }
              v7 = 0;
              goto LABEL_65;
            }
            v7 = -2147467259;
            v34 = 2147500037LL;
            v35 = 373LL;
          }
          else
          {
            v34 = (unsigned int)v33;
            v35 = 371LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v35,
            (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)v34);
          WindowsDeleteString(v44);
          v44 = 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x170,
            (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
            (const char *)(unsigned int)v30);
        }
        v39 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
        }
        goto LABEL_63;
      }
      v7 = -2147467259;
      v28 = 2147500037LL;
      v29 = 364LL;
    }
    else
    {
      v28 = (unsigned int)v27;
      v29 = 360LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
      (const char *)v28);
LABEL_63:
    v40 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    }
    goto LABEL_65;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x164,
    (int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigappdisplayinfo.cpp",
    (const char *)(unsigned int)v26);
LABEL_65:
  v41 = v48;
  if ( v48 )
  {
    v48 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  }
LABEL_67:
  v42 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  }
  return (unsigned int)v7;
}
