/*
 * XREFs of ??$Do@V_lambda_359495c150c46b7a3288d1331afae8ac_@@V_lambda_bcf747f32486c9d7e7a448b4bbaaf91a_@@@?$InvalidationChecker@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEBV_lambda_359495c150c46b7a3288d1331afae8ac_@@AEBV_lambda_bcf747f32486c9d7e7a448b4bbaaf91a_@@@Z @ 0x14007072C
 * Callers:
 *     ?get_Size@?$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x140080C60 (-get_Size@-$SimpleVectorView@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Streams@.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>,XWinRT::IntVersionTag>::Do<_lambda_359495c150c46b7a3288d1331afae8ac_,_lambda_bcf747f32486c9d7e7a448b4bbaaf91a_>(
        unsigned int *a1,
        __int64 a2,
        _QWORD **a3,
        _DWORD ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*a3)[5] + 56LL))((*a3)[5], *a3[1]);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}
