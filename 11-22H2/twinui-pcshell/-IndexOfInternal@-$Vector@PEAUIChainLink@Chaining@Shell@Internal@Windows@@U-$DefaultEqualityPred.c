/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@IPEAUIChainLink@Chaining@Shell@25@PEAIPEAE@Z @ 0x1803C2364
 * Callers:
 *     ?IndexOf@?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIChainLink@Chaining@Shell@25@PEAIPEAE@Z @ 0x1803C2170 (-IndexOf@-$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U-$DefaultEqualityPredicate@PE.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?RUIChainLink@Chaining@Shell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIChainLink@Chaining@Shell@Internal@Windows@@0PEA_N@Z @ 0x1803BD6A4 (--$-RUIChainLink@Chaining@Shell@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIChainLink@C.c)
 *     ??$Destroy@UIChainLink@Chaining@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1803BDD54 (--$Destroy@UIChainLink@Chaining@Shell@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAP.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIChainLink@Chaining@Shell@Internal@Windows@@@Z @ 0x1803C2D14 (-Localize@ReferencedGitCookie@-$GitStorageType@UIChainLink@Chaining@Shell@Internal@Windows@@@det.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>::IndexOfInternal(
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
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h]
  bool v17; // [rsp+80h] [rbp+40h] BYREF

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
      v14 = 0LL;
      v16 = *a2;
      v9 = 0;
      if ( !(unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v16, 8)) )
        break;
      v9 = XWinRT::detail::GitStorageType<Windows::Internal::Shell::Chaining::IChainLink>::ReferencedGitCookie::Localize(
             v16.m128i_i64[0],
             &v15);
      if ( v9 >= 0 )
        goto LABEL_8;
LABEL_9:
      if ( v9 >= 0 )
      {
        v9 = XWinRT::InterfaceEquals::operator()<Windows::Internal::Shell::Chaining::IChainLink>(v12, a4, v11, &v17);
        if ( v9 >= 0 && v17 )
        {
          *a6 = 1;
          *a5 = v10;
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::Chaining::IChainLink>((__int64 *)&v14);
          return (unsigned int)v9;
        }
      }
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::Chaining::IChainLink>((__int64 *)&v14);
      ++v10;
      ++a2;
      if ( v10 >= a3 )
        return (unsigned int)v9;
    }
    v15 = v16.m128i_i64[0];
    if ( v16.m128i_i64[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16.m128i_i64[0] + 8LL))(v16.m128i_i64[0]);
LABEL_8:
    v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v15;
    XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Shell::Chaining::IChainLink>((__int64 *)&v14);
    v14 = v11;
    goto LABEL_9;
  }
  return (unsigned int)v9;
}
