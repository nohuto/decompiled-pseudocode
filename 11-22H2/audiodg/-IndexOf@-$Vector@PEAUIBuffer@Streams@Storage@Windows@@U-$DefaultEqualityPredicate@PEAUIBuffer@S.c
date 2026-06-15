/*
 * XREFs of ?IndexOf@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@UEAAJPEAUIBuffer@Streams@Storage@5@PEAIPEAE@Z @ 0x140086EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x1400243C0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_V@YAXPEAX@Z @ 0x140028500 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14002850C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$Construct@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIBuffer@Streams@Storage@Windows@@PEAU2345@@Z @ 0x14007CC38 (--$Construct@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAPEAUIBuffe.c)
 *     ??$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x14007CDD0 (--$Destroy@UIBuffer@Streams@Storage@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAPEAUIBuffer@.c)
 *     ?IndexOfInternal@?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUIBuffer@Streams@Storage@5@IPEAU6785@PEAIPEAE@Z @ 0x140087414 (-IndexOfInternal@-$Vector@PEAUIBuffer@Streams@Storage@Windows@@U-$DefaultEqualityPredicate@PEAUI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  __int64 *v8; // r14
  __int64 v9; // rsi
  RTL_SRWLOCK *v10; // rcx
  int v11; // ebx
  size_t v12; // rax
  __int64 i; // rbp
  __int64 *v14; // rdi
  int v16; // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0LL;
  XWinRT::SerializingLockPolicy::Read(&v17, (RTL_SRWLOCK *)(a1 + 72), &v16);
  v11 = v16;
  if ( v16 >= 0 )
  {
    if ( *(_DWORD *)(a1 + 48) )
    {
      v12 = 8LL * *(unsigned int *)(a1 + 40);
      if ( !is_mul_ok(*(unsigned int *)(a1 + 40), 8uLL) )
        v12 = -1LL;
      v8 = (__int64 *)operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 40); i = (unsigned int)(i + 1) )
        {
          v11 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Storage::Streams::IBuffer>(
                  &v8[i],
                  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * i));
          if ( v11 < 0 )
            break;
          v9 = (unsigned int)(v9 + 1);
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::IndexOfInternal(
              (_DWORD)v10,
              *(_QWORD *)(a1 + 56),
              *(_DWORD *)(a1 + 40),
              a2,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v17 )
  {
    v10 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v10->Ptr);
    else
      ReleaseSRWLockShared(v10);
  }
  if ( (_DWORD)v9 )
  {
    if ( v11 >= 0 )
      v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Storage::Streams::IBuffer *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Storage::Streams::IBuffer *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Storage::Streams::IBuffer *>>::IndexOfInternal(
              (_DWORD)v10,
              (_DWORD)v8,
              v9,
              a2,
              (__int64)a3,
              (__int64)a4);
    v14 = v8;
    do
    {
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Storage::Streams::IBuffer>(v14++);
      --v9;
    }
    while ( v9 );
  }
  operator delete[](v8);
  return (unsigned int)v11;
}
