/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@IPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAIPEAE@Z @ 0x1802E4D44
 * Callers:
 *     ?IndexOf@?$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@25@PEAIPEAE@Z @ 0x1802E4B50 (-IndexOf@-$Vector@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@U-$DefaultEquality.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?RUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@0PEA_N@Z @ 0x1802DBE74 (--$-RUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAU.c)
 *     ??$Destroy@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802DC9E8 (--$Destroy@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWi.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802E58AC (-Localize@ReferencedGitCookie@-$GitStorageType@UIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __m128i *a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64 *),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // edi
  unsigned int v10; // esi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __m128i v15; // [rsp+30h] [rbp-10h]
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  bool v17; // [rsp+80h] [rbp+40h] BYREF

  v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a1;
  v17 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v9 < 0 )
        return (unsigned int)v9;
      v11 = 0LL;
      v16 = 0LL;
      v15 = *a2;
      v9 = 0;
      if ( !(unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v15, 8)) )
        break;
      v9 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::ReferencedGitCookie::Localize(
             v15.m128i_i64[0],
             &v14);
      if ( v9 >= 0 )
        goto LABEL_8;
LABEL_9:
      if ( v9 >= 0 )
      {
        v9 = XWinRT::InterfaceEquals::operator()<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
               v12,
               a4,
               v11,
               &v17);
        if ( v9 >= 0 && v17 )
        {
          *a6 = 1;
          *a5 = v10;
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>((__int64 *)&v16);
          return (unsigned int)v9;
        }
      }
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>((__int64 *)&v16);
      ++v10;
      ++a2;
      if ( v10 >= a3 )
        return (unsigned int)v9;
    }
    v14 = v15.m128i_i64[0];
    if ( v15.m128i_i64[0] )
      (*(void (**)(void))(*(_QWORD *)v15.m128i_i64[0] + 8LL))();
LABEL_8:
    v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v14;
    XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>((__int64 *)&v16);
    v16 = v11;
    goto LABEL_9;
  }
  return (unsigned int)v9;
}
