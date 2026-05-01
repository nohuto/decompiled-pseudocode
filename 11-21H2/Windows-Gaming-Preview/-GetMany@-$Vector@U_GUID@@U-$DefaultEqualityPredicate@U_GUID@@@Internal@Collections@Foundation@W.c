/*
 * XREFs of ?GetMany@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAU_GUID@@PEAI@Z @ 0x180032700
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     memset_0 @ 0x18004B744 (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // r14
  _OWORD *v7; // r13
  int *v9; // r12
  int v10; // edi
  unsigned int v11; // ebp
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  unsigned int i; // ecx
  void *v18; // [rsp+20h] [rbp-48h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v5 = 0;
  v6 = a3;
  v20 = 0;
  v7 = a4;
  if ( a3 )
    memset_0(a4, 0, 16LL * a3);
  v18 = 0LL;
  v9 = (int *)(a1 + 112);
  *a5 = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( *v9 >= 0 )
      ++*v9;
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  v10 = 0;
  if ( !*(_DWORD *)(a1 + 80) || (v18 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow)) != 0LL )
  {
    v11 = *(_DWORD *)(a1 + 72);
    if ( a2 <= v11 )
    {
      if ( *(_DWORD *)(a1 + 80) )
      {
        if ( (_DWORD)v6 )
        {
          v12 = a2;
          do
          {
            if ( v12 >= v11 )
              break;
            v13 = v12++;
            *v7++ = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v13);
            ++v20;
          }
          while ( v20 < (unsigned int)v6 );
        }
      }
      else if ( (_DWORD)v6 )
      {
        v14 = a2;
        do
        {
          v10 = 0;
          if ( v14 >= v11 )
            break;
          ++v5;
          v15 = v14++;
          *v7++ = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v15);
        }
        while ( v5 < (unsigned int)v6 );
      }
    }
    else
    {
      v10 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
  }
  else
  {
    v10 = -2147024882;
    RoOriginateError(2147942414LL, 0LL);
    v11 = 0;
  }
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      --*v9;
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( v10 >= 0 )
  {
    if ( v20 )
    {
      for ( i = 0; i < (unsigned int)v6; ++i )
      {
        if ( i + a2 >= v11 )
          break;
        v10 = 0;
        ++v5;
      }
    }
    *a5 = v5;
  }
  operator delete[](v18);
  return (unsigned int)v10;
}
