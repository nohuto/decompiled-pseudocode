/*
 * XREFs of ?RemoveAtInternal@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJI_N@Z @ 0x14008AFD0
 * Callers:
 *     ?RemoveAt@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJI@Z @ 0x14008AF20 (-RemoveAt@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuffer@.c)
 *     ?RemoveAtEnd@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x14008AF60 (-RemoveAtEnd@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBuff.c)
 * Callees:
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x140022524 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ?Write@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x14002257C (-Write@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireWrite@detail@2@@.c)
 *     ?RaiseEvent@?$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x1400225C0 (-RaiseEvent@-$VectorOptions@PEAUIBuffer@Streams@Storage@Windows@@$0A@$0A@$0A@@Internal@Collectio.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x14007CDD0 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ?ResizeStorage@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJI@Z @ 0x14008BC20 (-ResizeStorage@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUIBu.c)
 *     memmove_s_0 @ 0x14008E7AC (memmove_s_0.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::RemoveAtInternal(
        __int64 a1,
        unsigned int a2,
        char a3)
{
  int v6; // edi
  unsigned int *v7; // r14
  __int64 v8; // rbx
  unsigned int v9; // r9d
  unsigned int v10; // r8d
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  v13 = 0;
  v14 = 0LL;
  XWinRT::SerializingLockPolicy::Write(&v12, (RTL_SRWLOCK *)(a1 + 72), &v13);
  v6 = v13;
  if ( v13 >= 0 )
  {
    v7 = (unsigned int *)(a1 + 40);
    if ( a3 )
      a2 = *v7 - 1;
    if ( a2 >= *v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v13);
      v6 = 0;
      v8 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a2);
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v14);
      v14 = v8;
      if ( a2 < *v7 - 1
        && memmove_s_0(
             (void *const)(*(_QWORD *)(a1 + 56) + 8LL * a2),
             8LL * (*v7 - a2 - 1),
             (const void *const)(*(_QWORD *)(a1 + 56) + 8LL * (a2 + 1)),
             8LL * (*v7 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        ++*(_DWORD *)(a1 + 88);
        --*v7;
        v9 = *(_DWORD *)(a1 + 44);
        if ( *v7 < v9 / 3 )
        {
          v10 = 1;
          if ( v9 - 1 >= v9 - v9 / 3 )
            v10 = v9 / 3;
          v6 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::ResizeStorage(
                 a1,
                 v9 - v10);
        }
      }
    }
  }
  if ( v12 )
  {
    if ( LODWORD(v12->Ptr) == 1 )
      LODWORD(v12[1].Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v12 + 1);
  }
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(&v14);
  if ( v6 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Storage::Streams::IBuffer *,0,0,0>::RaiseEvent();
  return (unsigned int)v6;
}
