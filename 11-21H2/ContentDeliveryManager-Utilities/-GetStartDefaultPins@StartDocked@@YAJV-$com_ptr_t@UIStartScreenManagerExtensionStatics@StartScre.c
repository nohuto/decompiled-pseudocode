/*
 * XREFs of ?GetStartDefaultPins@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@PEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800DF490
 * Callers:
 *     ?ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800DD570 (-ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFra.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180021FA4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$IVector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@U?$IIterable@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@567@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180050880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$IV_ea_180050880.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800DB2E0 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAVTileId@StartScreen@UI@WindowsUd.c)
 *     ??0?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIInspectable@@@1234@Upermission@01234@@Z @ 0x1800DC084 (--0-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collection.c)
 *     ?GetView@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@345@@Z @ 0x1800DFEE0 (-GetView@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Coll.c)
 *     ?InsertAtInternal@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIInspectable@@_N@Z @ 0x1800E04E0 (-InsertAtInternal@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Inte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall StartDocked::GetStartDefaultPins(_QWORD *a1, _QWORD *a2)
{
  int v4; // eax
  DWORD v5; // edx
  int v6; // r8d
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  volatile signed __int64 *v9; // rbx
  int v10; // edi
  void *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // eax
  int v15; // edi
  __int64 i; // rdx
  __int64 v17; // rsi
  __int64 (__fastcall *v18)(__int64, __int64, _QWORD *); // r14
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // r9
  __int64 v24; // rcx
  int View; // eax
  __int64 v26; // rcx
  __int64 (__fastcall ***v28)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-48h] BYREF
  __int64 v29; // [rsp+28h] [rbp-40h]
  __int64 v30; // [rsp+30h] [rbp-38h]
  unsigned int v31; // [rsp+38h] [rbp-30h]
  _QWORD v32[2]; // [rsp+40h] [rbp-28h] BYREF
  int v33; // [rsp+50h] [rbp-18h]
  __int64 v34; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+40h]
  int v36; // [rsp+B8h] [rbp+50h] BYREF
  __int64 v37; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v38; // [rsp+C8h] [rbp+60h] BYREF

  v36 = 0;
  *a2 = 0LL;
  v28 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)*a1 + 72LL))(
         *a1,
         &v28);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      130LL,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v4,
      (int)v28);
  v7 = v28;
  v38 = 0LL;
  v36 = 2;
  v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *> *> *>(
         v28,
         v5,
         v6);
  if ( v8 >= 0 )
    v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v7)[8])(v7, &v38);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1647LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v8,
      (int)v28);
  v9 = 0LL;
  v29 = 0LL;
  v10 = 0;
  v11 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v11
    && (v12 = Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>((__int64)v11)) != 0 )
  {
    v9 = (volatile signed __int64 *)v12;
    v29 = v12;
  }
  else
  {
    v10 = -2147024882;
  }
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      133LL,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v10,
      (int)v28);
  v13 = v38;
  v30 = v38;
  v31 = 0;
  v32[0] = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 56LL))(v38, &v36);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v14,
      (int)v28);
  v32[1] = v13;
  v15 = v36;
  v33 = v36;
  v34 = 0LL;
  for ( i = v31; (_DWORD)i != v15; i = ++v31 )
  {
    v17 = v30;
    v18 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v30 + 48LL);
    v19 = v32[0];
    if ( v32[0] )
    {
      v32[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      i = v31;
    }
    v20 = v18(v17, i, v32);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        6136LL,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v20,
        (int)v28);
    v37 = 0LL;
    v21 = *(_QWORD *)v32[0];
    v37 = 0LL;
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v21 + 64))(v32[0], &v37);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        138LL,
        (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
        (const char *)(unsigned int)v22,
        (int)v28);
    LOBYTE(v23) = 1;
    Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::InsertAtInternal(
      v9,
      0LL,
      v37,
      v23);
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
  v24 = v32[0];
  if ( v32[0] )
  {
    v32[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  View = Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::GetView(
           v9,
           a2);
  if ( View < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      142LL,
      (__int64)"internal\\shellcommonshell\\private\\inc\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)View,
      (int)v28);
  if ( v9 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Foundation::Collections::IVector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::IIterable<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Microsoft::WRL::FtmBase>::Release(v9);
  v26 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v28 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v28)[2])(v28);
  if ( *a1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return 0LL;
}
