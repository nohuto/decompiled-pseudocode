/*
 * XREFs of ?GetStartDefaultPins@StartDocked@@YAJV?$com_ptr_t@UIStartScreenManagerExtensionStatics@StartScreen@UI@WindowsUdk@@Uerr_exception_policy@wil@@@wil@@PEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z @ 0x1800C9350
 * Callers:
 *     ?ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800C7FC0 (-ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFra.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800227B4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@V?$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Internal@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18002BC2C (--1-$MakeAllocator@V-$CTaskWrapper@V_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_@@@ComTaskPool@Inte.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800724D8 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVTileId@StartScreen@UI@WindowsUdk@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800C5D10 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAU-$IVectorView@PEAVTileId@StartScreen@UI@WindowsUd.c)
 *     ??0?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIInspectable@@@1234@Upermission@01234@@Z @ 0x1800C6D7C (--0-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collection.c)
 *     ??1?$com_ptr_t@V?$AgileVector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@$0A@@Internal@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800C7300 (--1-$com_ptr_t@V-$AgileVector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@I.c)
 *     ?GetView@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@345@@Z @ 0x1800C9B30 (-GetView@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Coll.c)
 *     ?InsertAtInternal@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUIInspectable@@_N@Z @ 0x1800CA0A0 (-InsertAtInternal@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Inte.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall StartDocked::GetStartDefaultPins(__int64 *a1, _QWORD *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  DWORD v7; // edx
  int v8; // r8d
  __int64 (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  __int64 v11; // rbx
  void *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // rdi
  int v16; // eax
  int v17; // r14d
  int i; // eax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, _QWORD, __int64 *); // rdi
  int v21; // eax
  __int64 v22; // rsi
  __int64 (__fastcall *v23)(__int64, __int64 *); // rdi
  int v24; // eax
  __int64 v25; // r9
  int View; // eax
  __int64 v27; // rcx
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-40h] BYREF
  __int64 v30; // [rsp+28h] [rbp-38h] BYREF
  __int64 v31; // [rsp+30h] [rbp-30h]
  unsigned int v32; // [rsp+38h] [rbp-28h]
  __int64 v33[2]; // [rsp+40h] [rbp-20h] BYREF
  int v34; // [rsp+50h] [rbp-10h]
  __int64 v35; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  void *v37; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v39; // [rsp+B8h] [rbp+58h] BYREF

  LODWORD(v37) = 0;
  *a2 = 0LL;
  v29 = 0LL;
  v4 = (__int64 *)*a1;
  v5 = *v4;
  v29 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v5 + 72))(v4, &v29);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBF,
      (__int64)"shellcommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)v6,
      (int)v29);
  v9 = v29;
  v39 = 0LL;
  LODWORD(v37) = 2;
  v10 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<WindowsUdk::UI::StartScreen::TileId *> *> *>(
          v29,
          v7,
          v8);
  if ( v10 >= 0 )
    v10 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v9)[8])(v9, &v39);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v10,
      (int)v29);
  v11 = 0LL;
  v30 = 0LL;
  v12 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v37 = v12;
  v13 = 0LL;
  if ( v12 )
  {
    v13 = Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>((__int64)v12);
    v37 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>::~MakeAllocator<Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_>>(&v37);
  if ( v13 )
  {
    v11 = v13;
    v30 = v13;
    v14 = 0LL;
  }
  else
  {
    v14 = 2147942414LL;
  }
  if ( (int)v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"shellcommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)v14,
      (int)v29);
  v15 = v39;
  v31 = v39;
  v32 = 0;
  v33[0] = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v39 + 56LL))(v39, &v37);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v16,
      (int)v29);
  v33[1] = v15;
  v17 = (int)v37;
  v34 = (int)v37;
  v35 = 0LL;
  for ( i = v32; i != v17; i = ++v32 )
  {
    v19 = v31;
    v20 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v31 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33);
    v21 = v20(v19, v32, v33);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1815,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v21,
        (int)v29);
    v38 = 0LL;
    v22 = v33[0];
    v23 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33[0] + 64LL);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset(&v38);
    v24 = v23(v22, &v38);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC7,
        (__int64)"shellcommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
        (const char *)(unsigned int)v24,
        (int)v29);
    LOBYTE(v25) = 1;
    Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::InsertAtInternal(
      v11,
      0LL,
      v38,
      v25);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v38);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v35);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v33);
  View = Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::GetView(
           v11,
           a2);
  if ( View < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xCB,
      (__int64)"shellcommon\\internal\\Shell\\inc\\Private\\StartAppServiceHelpers.h",
      (const char *)(unsigned int)View,
      (int)v29);
  wil::com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::Internal::AgileVector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,0>,wil::err_exception_policy>(&v30);
  v27 = v39;
  if ( v39 )
  {
    v39 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v29);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(a1);
  return 0LL;
}
