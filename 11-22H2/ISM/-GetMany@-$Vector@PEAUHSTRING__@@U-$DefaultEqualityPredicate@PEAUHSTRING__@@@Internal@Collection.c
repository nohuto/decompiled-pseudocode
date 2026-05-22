/*
 * XREFs of ?GetMany@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x180196980
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     ??_V@YAXPEAX@Z @ 0x180057AD8 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180058470 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Read@SerializingLockPolicy@XWinRT@@SA?AV?$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@detail@2@AEAVComLock@2@PEAJ@Z @ 0x180198850 (-Read@SerializingLockPolicy@XWinRT@@SA-AV-$LockHolder@VComLock@XWinRT@@UAcquireRead@detail@2@@de.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        HSTRING *a4,
        _DWORD *a5)
{
  size_t v5; // rbp
  __int64 v6; // rdi
  HSTRING *v7; // rsi
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  HRESULT v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  RTL_SRWLOCK *v15; // rcx
  unsigned int i; // ecx
  RTL_SRWLOCK *v18; // [rsp+20h] [rbp-48h] BYREF
  void *v19; // [rsp+70h] [rbp+8h]
  HRESULT v21; // [rsp+80h] [rbp+18h] BYREF

  v5 = a3;
  v6 = 0LL;
  v7 = a4;
  v21 = 0;
  v9 = 0;
  v10 = 0;
  if ( a3 )
    memset_0(a4, 0, 8LL * a3);
  v19 = 0LL;
  *a5 = 0;
  XWinRT::SerializingLockPolicy::Read(&v18, a1 + 72, &v21);
  if ( !*(_DWORD *)(a1 + 48) || (v19 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
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
    if ( v11 >= 0 && (_DWORD)v5 )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        do
        {
          v13 = v9 + v12;
          if ( v13 >= v10 )
            break;
          v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * v13), &v7[v9]);
          if ( v11 < 0 )
            break;
          v12 = a2;
          ++v9;
        }
        while ( v9 < (unsigned int)v5 );
      }
      else
      {
        do
        {
          v14 = v6 + v12;
          if ( v14 >= v10 )
            break;
          v11 = WindowsDuplicateString(*(HSTRING *)(*(_QWORD *)(a1 + 56) + 8LL * v14), &v7[v6]);
          if ( v11 < 0 )
            break;
          v12 = a2;
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < (unsigned int)v5 );
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
    if ( (_DWORD)v6 )
    {
      do
      {
        WindowsDeleteString(*v7);
        *v7++ = 0LL;
        --v6;
      }
      while ( v6 );
    }
  }
  else
  {
    if ( v9 )
    {
      for ( i = 0; i < (unsigned int)v5; ++i )
      {
        if ( i + a2 >= v10 )
          break;
        v11 = 0;
        LODWORD(v6) = v6 + 1;
      }
    }
    *a5 = v6;
  }
  operator delete[](v19);
  return (unsigned int)v11;
}
