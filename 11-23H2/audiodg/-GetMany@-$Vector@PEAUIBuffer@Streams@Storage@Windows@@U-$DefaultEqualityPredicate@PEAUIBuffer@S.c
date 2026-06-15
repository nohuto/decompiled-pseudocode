/*
 * XREFs of ?GetMany@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIBuffer@Streams@Storage@5@PEAI@Z @ 0x1400856D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1400243C0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     ??$Construct@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIBuffer@Streams@Storage@Windows@@PEAU2345@@Z @ 0x14007CBE8 (--$Construct@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIBuffe.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x14007CD80 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 *a4,
        _DWORD *a5)
{
  __int64 *v5; // r15
  size_t v6; // rsi
  __int64 v8; // rdi
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rax
  RTL_SRWLOCK *v15; // rcx
  unsigned int i; // ecx
  RTL_SRWLOCK *v18; // [rsp+20h] [rbp-48h] BYREF
  void *Block; // [rsp+70h] [rbp+8h]
  int v21; // [rsp+80h] [rbp+18h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  v21 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  *a5 = 0;
  Block = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v18, (RTL_SRWLOCK *)(a1 + 72), &v21);
  if ( !*(_DWORD *)(a1 + 48) || (Block = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v11 = v21;
  }
  else
  {
    v11 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
  }
  if ( v11 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    v12 = a2;
    if ( a2 > v10 )
    {
      v11 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
      v12 = a2;
    }
    if ( v11 >= 0 && (_DWORD)v6 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        do
        {
          v13 = v9 + v12;
          if ( v13 >= v10 )
            break;
          v11 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Storage::Streams::IBuffer>(
                  &v5[v9],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * v13));
          if ( v11 < 0 )
            break;
          ++v9;
          v12 = a2;
        }
        while ( v9 < (unsigned int)v6 );
      }
      else
      {
        do
        {
          v14 = (unsigned int)v8 + v12;
          if ( (unsigned int)v14 >= v10 )
            break;
          v11 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Storage::Streams::IBuffer>(
                  &v5[v8],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v14));
          if ( v11 < 0 )
            break;
          v8 = (unsigned int)(v8 + 1);
          v12 = a2;
        }
        while ( (unsigned int)v8 < (unsigned int)v6 );
      }
    }
  }
  if ( v18 )
  {
    v15 = v18 + 1;
    if ( LODWORD(v18->Ptr) == 1 )
      --LODWORD(v15->Ptr);
    else
      ReleaseSRWLockShared(v15);
  }
  if ( v11 < 0 )
  {
    if ( (_DWORD)v8 )
    {
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(v5++);
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    if ( v9 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + a2 >= v10 )
          break;
        v11 = 0;
        LODWORD(v8) = v8 + 1;
      }
    }
    *a5 = v8;
  }
  operator delete[](Block);
  return (unsigned int)v11;
}
