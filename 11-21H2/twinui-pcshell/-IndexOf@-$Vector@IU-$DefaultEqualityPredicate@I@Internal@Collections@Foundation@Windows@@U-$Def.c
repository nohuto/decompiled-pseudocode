/*
 * XREFs of ?IndexOf@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJIPEAIPEAE@Z @ 0x1803E4910
 * Callers:
 *     <none>
 * Callees:
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180160FD0 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801896C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801896CC (--_V@YAXPEAX@Z.c)
 *     ?IndexOfInternal@?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$VectorOptions@I$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAJPEAIII0PEAE@Z @ 0x1803E4B80 (-IndexOfInternal@-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::IndexOf(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _BYTE *a4)
{
  _DWORD *v8; // rsi
  int v9; // ebp
  RTL_SRWLOCK *v10; // rcx
  int v11; // ebx
  unsigned __int64 v12; // r8
  size_t v13; // rax
  __int64 i; // r8
  int v16; // [rsp+60h] [rbp+8h] BYREF
  RTL_SRWLOCK *v17; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  *a4 = 0;
  v8 = 0LL;
  v9 = 0;
  XWinRT::SerializingLockPolicy::Read(&v17, (RTL_SRWLOCK *)(a1 + 104), &v16);
  v11 = v16;
  if ( v16 >= 0 )
  {
    v12 = *(unsigned int *)(a1 + 72);
    if ( *(_DWORD *)(a1 + 80) )
    {
      v13 = 4 * v12;
      if ( !is_mul_ok(v12, 4uLL) )
        v13 = -1LL;
      v8 = operator new[](v13, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 72); i = (unsigned int)(i + 1) )
        {
          if ( v11 < 0 )
            break;
          v11 = 0;
          ++v9;
          LODWORD(v10) = *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * i);
          v8[i] = (_DWORD)v10;
        }
      }
      else
      {
        v11 = -2147024882;
      }
    }
    else
    {
      v11 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::IndexOfInternal(
              (_DWORD)v10,
              *(_QWORD *)(a1 + 88),
              v12,
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
  if ( v11 >= 0 && v9 )
    v11 = Windows::Foundation::Collections::Internal::Vector<unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<unsigned int>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::VectorOptions<unsigned int,0,1,0>>::IndexOfInternal(
            (_DWORD)v10,
            (_DWORD)v8,
            v9,
            a2,
            (__int64)a3,
            (__int64)a4);
  operator delete[](v8);
  return (unsigned int)v11;
}
