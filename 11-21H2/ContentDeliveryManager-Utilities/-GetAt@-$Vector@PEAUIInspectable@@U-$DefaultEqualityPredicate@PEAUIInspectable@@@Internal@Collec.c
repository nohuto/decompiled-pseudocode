/*
 * XREFs of ?GetAt@?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1800DE1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAUIInspectable@@V123@U?$DefaultLifetimeTraits@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIInspectable@@@detail@2@PEAPEAUIInspectable@@@Z @ 0x1800E2338 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@PEAUIInspect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>::GetAt(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        __int64 a4)
{
  __int64 v5; // r15
  __int64 v7; // rbp
  _DWORD *v8; // rbx
  RTL_SRWLOCK *v9; // rsi
  int v10; // edi
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  char v13; // [rsp+28h] [rbp-30h]
  __m128i v14; // [rsp+30h] [rbp-28h]
  _DWORD *v15; // [rsp+60h] [rbp+8h]

  v5 = a2;
  *a3 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v7 = a1 + 104;
  v8 = (_DWORD *)(a1 + 104);
  v15 = (_DWORD *)(a1 + 104);
  v9 = (RTL_SRWLOCK *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( SLODWORD(v9->Ptr) >= 0 )
      ++LODWORD(v9->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 72) )
  {
    if ( *a3 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 16LL))(*a3);
      *a3 = 0LL;
    }
    v14 = *(__m128i *)(*(_QWORD *)(a1 + 88) + 16 * v5);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v14, 8));
    if ( v13 )
    {
      v12 = v14.m128i_i64[0];
      _InterlockedIncrement((volatile signed __int32 *)v14.m128i_i64[0]);
      v8 = v15;
    }
    else
    {
      v12 = v14.m128i_i64[0];
      if ( v14.m128i_i64[0] )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14.m128i_i64[0] + 8LL))(v14.m128i_i64[0]);
    }
    v10 = 0;
  }
  else
  {
    v10 = -2147483637;
    RoOriginateError(2147483659LL, 0LL, a3, a4);
  }
  if ( v7 )
  {
    if ( *v8 == 1 )
      --LODWORD(v9->Ptr);
    else
      ReleaseSRWLockShared(v9);
  }
  if ( v10 >= 0 )
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<IInspectable>,IInspectable *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>>::ResolveDemand(
                           &v12,
                           a3);
  return (unsigned int)v10;
}
