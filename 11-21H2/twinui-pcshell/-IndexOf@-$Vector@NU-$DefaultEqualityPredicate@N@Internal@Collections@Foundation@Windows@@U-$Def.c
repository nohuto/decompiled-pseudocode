/*
 * XREFs of ?IndexOf@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJNPEAIPEAE@Z @ 0x180333250
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180160FD0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801896C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 *     ?IndexOfInternal@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJPEANINPEAIPEAE@Z @ 0x180333528 (-IndexOfInternal@-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  _QWORD *v7; // rsi
  int v8; // ebp
  RTL_SRWLOCK *v9; // rcx
  int v10; // r9d
  int v11; // ebx
  unsigned __int64 v12; // r8
  size_t v13; // rax
  __int64 i; // r8
  int v16; // [rsp+70h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+80h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v7 = 0LL;
  v8 = 0;
  XWinRT::SerializingLockPolicy::Read(&v17, (RTL_SRWLOCK *)(a1 + 104), &v16);
  v11 = v16;
  if ( v16 >= 0 )
  {
    v12 = *(unsigned int *)(a1 + 72);
    if ( *(_DWORD *)(a1 + 80) )
    {
      v13 = 8 * v12;
      if ( !is_mul_ok(v12, 8uLL) )
        v13 = -1LL;
      v7 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
      if ( v7 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
        {
          if ( v11 < 0 )
            break;
          v11 = 0;
          ++v8;
          v9 = *(RTL_SRWLOCK **)(*(_QWORD *)(a1 + 88) + 8 * i);
          v7[i] = v9;
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::IndexOfInternal(
              (_DWORD)v9,
              *(_QWORD *)(a1 + 88),
              v12,
              v10,
              (__int64)a3,
              (__int64)a4);
    }
  }
  if ( v17 )
  {
    v9 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      --LODWORD(v9->Ptr);
    else
      ReleaseSRWLockShared(v9);
  }
  if ( v11 >= 0 && v8 )
    v11 = Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::IndexOfInternal(
            (_DWORD)v9,
            (_DWORD)v7,
            v8,
            v10,
            (__int64)a3,
            (__int64)a4);
  operator delete[](v7);
  return (unsigned int)v11;
}
