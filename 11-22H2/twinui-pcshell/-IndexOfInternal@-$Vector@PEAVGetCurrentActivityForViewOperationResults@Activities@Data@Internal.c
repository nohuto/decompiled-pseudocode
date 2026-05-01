/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@AEAAJPEAV?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@IPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@25@PEAIPEAE@Z @ 0x18049F244
 * Callers:
 *     ?IndexOf@?$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@U?$DefaultEqualityPredicate@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@4785@U?$VectorOptions@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@$0A@$00$0A@@4785@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@25@PEAIPEAE@Z @ 0x18049F050 (-IndexOf@-$Vector@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$?RUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceEquals@XWinRT@@QEBAJPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@0PEA_N@Z @ 0x1804989AC (--$-RUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceEqu.c)
 *     ??$Destroy@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Z @ 0x180499454 (--$Destroy@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Interf.c)
 *     ?Localize@ReferencedGitCookie@?$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@detail@XWinRT@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Z @ 0x18049F7D4 (-Localize@ReferencedGitCookie@-$GitStorageType@UIGetCurrentActivityForViewOperationResults@Activ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *,0,1,0>>::IndexOfInternal(
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
      v9 = XWinRT::detail::GitStorageType<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::ReferencedGitCookie::Localize(
             v16.m128i_i64[0],
             &v15);
      if ( v9 >= 0 )
        goto LABEL_8;
LABEL_9:
      if ( v9 >= 0 )
      {
        v9 = XWinRT::InterfaceEquals::operator()<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
               v12,
               a4,
               v11,
               &v17);
        if ( v9 >= 0 && v17 )
        {
          *a6 = 1;
          *a5 = v10;
          XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>((__int64 *)&v14);
          return (unsigned int)v9;
        }
      }
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>((__int64 *)&v14);
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
    XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>((__int64 *)&v14);
    v14 = v11;
    goto LABEL_9;
  }
  return (unsigned int)v9;
}
