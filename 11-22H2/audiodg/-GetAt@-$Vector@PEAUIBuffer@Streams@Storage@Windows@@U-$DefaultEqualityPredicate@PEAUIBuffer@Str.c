/*
 * XREFs of ?GetAt@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIBuffer@Streams@Storage@5@@Z @ 0x1400841A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1400243C0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??$Construct@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIBuffer@Streams@Storage@Windows@@PEAU2345@@Z @ 0x14007CC38 (--$Construct@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIBuffe.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x14007CDD0 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::GetAt(
        __int64 a1,
        unsigned int a2,
        __int64 *a3)
{
  __int64 v4; // rsi
  int v6; // ebx
  RTL_SRWLOCK *v7; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  *a3 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v10, (RTL_SRWLOCK *)(a1 + 72), &v9);
  v6 = v9;
  if ( v9 >= 0 )
  {
    if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 40) )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(a3);
      v6 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Storage::Streams::IBuffer>(
             a3,
             *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v4));
    }
  }
  if ( v10 )
  {
    v7 = v10 + 1;
    if ( LODWORD(v10->Ptr) == 1 )
      --LODWORD(v7->Ptr);
    else
      ReleaseSRWLockShared(v7);
  }
  if ( v6 >= 0 )
    return 0;
  return (unsigned int)v6;
}
