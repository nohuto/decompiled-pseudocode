/*
 * XREFs of ?ClearNextIfMatch@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@AEAAJPEAUIChainLink@2345@@Z @ 0x180303FDC
 * Callers:
 *     ?HandleChainLinkEvent@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEAUIChainLink@2345@PEAUIChainLinkEventArgs@2345@@Z @ 0x180305710 (-HandleChainLinkEvent@-$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@MEAAJPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801801A4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@@12@$$QEAW4ChainLinkEventType@Chaining@Shell@Internal@Windows@@@Z @ 0x1803025DC (--$Make@VChainLinkEventArgs@Chaining@Shell@Internal@Windows@@W4ChainLinkEventType@2345@@Details@.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18030318C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1803070D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIVis_ea_1803070D0.c)
 *     ?erase@?$vector@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x180309604 (-erase@-$vector@V-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@V-$alloca.c)
 */

__int64 __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ClearNextIfMatch(
        __int64 a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v4; // rbx
  struct IUnknown **v5; // rbp
  struct IUnknown **i; // rdi
  unsigned int v7; // edi
  __int64 v8; // rdi
  __int64 v9; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v13 = 0LL;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = *(struct IUnknown ***)(a1 + 40);
  for ( i = *(struct IUnknown ***)(a1 + 32); i != v5 && !(unsigned int)SHIsSameObject(*i, a2); ++i )
    ;
  if ( i == *(struct IUnknown ***)(a1 + 40) )
  {
    v7 = -2147483636;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x24E,
      (__int64)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
      (const char *)0x8000000CLL);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
  }
  else
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>>::erase(a1 + 32, &v12, i);
    Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v13, (__int64 *)(a1 + 56));
    ++*(_DWORD *)(a1 + 64);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    v8 = v13;
    if ( v13 )
    {
      v12 = 2;
      Microsoft::WRL::Details::Make<Windows::Internal::Shell::Chaining::ChainLinkEventArgs,enum Windows::Internal::Shell::Chaining::ChainLinkEventType>(
        &v14,
        &v12);
      v9 = v14;
      if ( v14 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 80LL))(v8, a1, v14);
      else
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x263,
          (__int64)"onecoreuap\\internal\\shell\\inc\\chaininghelpers.h",
          (const char *)0x8007000ELL);
      if ( v9 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Desktop::ViewManagerInterop::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(v9);
    }
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
  return v7;
}
