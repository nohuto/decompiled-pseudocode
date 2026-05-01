/*
 * XREFs of ??$Do@V_lambda_a16029092c0eaf0eb27550fc2713a7a6_@@V_lambda_58ef08ac89c8cded217f154ea50e332b_@@@?$InvalidationChecker@V?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEBV_lambda_a16029092c0eaf0eb27550fc2713a7a6_@@AEBV_lambda_58ef08ac89c8cded217f154ea50e332b_@@@Z @ 0x180325EE0
 * Callers:
 *     ?IndexOf@?$SimpleVectorView@NV?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJNPEAIPEAE@Z @ 0x180333010 (-IndexOf@-$SimpleVectorView@NV-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Found.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker<Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>,XWinRT::IntVersionTag>::Do<_lambda_a16029092c0eaf0eb27550fc2713a7a6_,_lambda_58ef08ac89c8cded217f154ea50e332b_>(
        unsigned int *a1,
        __int64 a2,
        _QWORD **a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a3)[9] + 72LL))(
           (*a3)[9],
           *(_QWORD *)(*(_QWORD *)(*a3)[9] + 72LL),
           *a3[2],
           *a3[3]);
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 120) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***(_DWORD ***)a4 = 0;
        ***(_BYTE ***)(a4 + 8) = 0;
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
