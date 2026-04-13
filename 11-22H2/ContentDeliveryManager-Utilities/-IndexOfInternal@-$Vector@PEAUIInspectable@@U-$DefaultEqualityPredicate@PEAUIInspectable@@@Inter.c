/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIInspectable@@@detail@XWinRT@@IPEAUIInspectable@@PEAIPEAE@Z @ 0x1800C9E58
 * Callers:
 *     ?IndexOf@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInspectable@@PEAIPEAE@Z @ 0x1800C9C90 (-IndexOf@-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Coll.c)
 * Callees:
 *     ??$?RUIInspectable@@@InterfaceEquals@XWinRT@@QEBAJPEAUIInspectable@@0PEA_N@Z @ 0x1800C48B0 (--$-RUIInspectable@@@InterfaceEquals@XWinRT@@QEBAJPEAUIInspectable@@0PEA_N@Z.c)
 *     ??$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIInspectable@@@Z @ 0x1800C4FAC (--$Destroy@UIInspectable@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIInspectable@@@Z.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspectable@@@Z @ 0x1800CA440 (-Localize@ReferencedGitCookie@-$GitStorageType@UIInspectable@@@detail@XWinRT@@QEAAJPEAPEAUIInspe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 (__fastcall ***a4)(_QWORD, GUID *, __int64),
        unsigned int *a5,
        _BYTE *a6)
{
  int v9; // edi
  unsigned int i; // esi
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64); // rbx
  __int64 v12; // rcx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64); // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  __m128i v16; // [rsp+30h] [rbp-10h]
  bool v17; // [rsp+80h] [rbp+40h] BYREF

  v17 = 0;
  v9 = 0;
  for ( i = 0; i < a3 && v9 >= 0; ++i )
  {
    v11 = 0LL;
    v14 = 0LL;
    v16 = *(__m128i *)(a2 + 16LL * i);
    v9 = 0;
    if ( !(unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v16, 8)) )
    {
      v15 = v16.m128i_i64[0];
      if ( v16.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16.m128i_i64[0] + 8LL))(v16.m128i_i64[0]);
LABEL_9:
      v11 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))v15;
      XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64 *)&v14);
      v14 = v11;
      goto LABEL_10;
    }
    v9 = XWinRT::detail::GitStorageType<IInspectable>::ReferencedGitCookie::Localize(v16.m128i_i64[0], &v15);
    if ( v9 >= 0 )
      goto LABEL_9;
LABEL_10:
    if ( v9 >= 0 )
    {
      v9 = XWinRT::InterfaceEquals::operator()<IInspectable>(v12, a4, v11, &v17);
      if ( v9 >= 0 && v17 )
      {
        *a6 = 1;
        *a5 = i;
        XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64 *)&v14);
        return (unsigned int)v9;
      }
    }
    XWinRT::InterfaceLifetimeTraits::Destroy<IInspectable>((__int64 *)&v14);
  }
  return (unsigned int)v9;
}
