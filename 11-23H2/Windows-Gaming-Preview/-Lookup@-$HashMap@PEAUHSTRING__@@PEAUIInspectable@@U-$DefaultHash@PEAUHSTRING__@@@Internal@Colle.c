/*
 * XREFs of ?Lookup@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z @ 0x180031FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x180035250 (-Lookup@-$XHashMap@PEAUHSTRING__@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004BB68 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::Lookup(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _DWORD *v5; // rbx
  RTL_SRWLOCK *v6; // r14
  int v7; // esi
  __int64 v8; // rdi
  char v9; // bp
  __m128i v11; // [rsp+30h] [rbp-38h]
  __int64 v12; // [rsp+70h] [rbp+8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+10h] BYREF

  v13 = a2;
  if ( !*(_BYTE *)(a1 + 184) )
  {
    v7 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
    goto LABEL_29;
  }
  v5 = (_DWORD *)(a1 + 160);
  v6 = (RTL_SRWLOCK *)(a1 + 168);
  if ( *(_DWORD *)(a1 + 160) == 1 )
  {
    if ( SLODWORD(v6->Ptr) >= 0 )
      ++LODWORD(v6->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 168));
  }
  v7 = XWinRT::XHashMap<HSTRING__ *,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Lookup(
         a1 + 72,
         &v13,
         &v12);
  v8 = 0LL;
  v9 = 0;
  if ( v7 >= 0 )
  {
    if ( v12 )
    {
      v11 = *(__m128i *)(v12 + 8);
      v9 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 8));
      v8 = *(_QWORD *)(v12 + 8);
      if ( v9 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v11.m128i_i64[0]);
      }
      else if ( v11.m128i_i64[0] )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11.m128i_i64[0] + 8LL))(v11.m128i_i64[0]);
      }
      v7 = 0;
    }
    else
    {
      v7 = -2147483637;
    }
  }
  if ( v5 )
  {
    if ( *v5 == 1 )
      --LODWORD(v6->Ptr);
    else
      ReleaseSRWLockShared(v6);
  }
  if ( v7 < 0 )
    goto LABEL_29;
  if ( !v9 )
  {
    *a3 = v8;
    return 0;
  }
  *a3 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD *))(*(_QWORD *)qword_180064E90 + 40LL))(
         qword_180064E90,
         *(unsigned int *)(v8 + 4),
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         a3);
  if ( v7 < 0 || _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) != 1 )
  {
    if ( v7 >= 0 )
      return (unsigned int)v7;
LABEL_29:
    *a3 = 0LL;
    return (unsigned int)v7;
  }
  if ( *(_DWORD *)(v8 + 4) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180064E90 + 32LL))(qword_180064E90);
  operator delete((void *)v8, 8uLL);
  return (unsigned int)v7;
}
