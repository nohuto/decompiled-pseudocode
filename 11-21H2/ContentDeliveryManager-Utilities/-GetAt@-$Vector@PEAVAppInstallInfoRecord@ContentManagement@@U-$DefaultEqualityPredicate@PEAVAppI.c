/*
 * XREFs of ?GetAt@?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x180089820
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveDemand@?$StorageTempTraits@V?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@XWinRT@@PEAUIAppInstallInfoRecord@ContentManagement@@V123@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@@XWinRT@@SAJPEAV?$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@detail@2@PEAPEAUIAppInstallInfoRecord@ContentManagement@@@Z @ 0x18008FB34 (-ResolveDemand@-$StorageTempTraits@V-$GitStorageType@UIAppInstallInfoRecord@ContentManagement@@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<ContentManagement::AppInstallInfoRecord *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>,Windows::Foundation::Collections::Internal::VectorOptions<ContentManagement::AppInstallInfoRecord *,0,1,0>>::GetAt(
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
    return (unsigned int)XWinRT::StorageTempTraits<XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,ContentManagement::IAppInstallInfoRecord *,XWinRT::detail::GitStorageType<ContentManagement::IAppInstallInfoRecord>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<ContentManagement::AppInstallInfoRecord *>>::ResolveDemand(
                           &v12,
                           a3);
  return (unsigned int)v10;
}
