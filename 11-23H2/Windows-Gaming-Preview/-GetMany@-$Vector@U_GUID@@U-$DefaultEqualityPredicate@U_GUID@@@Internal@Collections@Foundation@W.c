/*
 * XREFs of ?GetMany@?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAU_GUID@@PEAI@Z @ 0x1800330F0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBAC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 *     memset_0 @ 0x18004C634 (memset_0.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>::GetMany(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _OWORD *a4,
        unsigned int *a5)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // rbp
  _OWORD *v7; // r12
  int *v9; // r15
  int v10; // edi
  unsigned int v11; // r13d
  unsigned int v12; // ebp
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int i; // ecx
  void *v18; // [rsp+28h] [rbp-40h]
  unsigned int v19; // [rsp+70h] [rbp+8h]

  v5 = 0;
  v6 = a3;
  v19 = 0;
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
  if ( *(_DWORD *)(a1 + 80) )
  {
    v18 = operator new[](v6, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v18 )
    {
      v10 = -2147024882;
      RoOriginateError(2147942414LL, 0LL);
      v11 = 0;
LABEL_10:
      v12 = a3;
      goto LABEL_11;
    }
  }
  v11 = *(_DWORD *)(a1 + 72);
  if ( a2 > v11 )
  {
    v10 = -2147483637;
    RoOriginateError(2147483659LL, 0LL);
    goto LABEL_10;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_10;
  v13 = a2;
  v12 = a3;
  if ( *(_DWORD *)(a1 + 80) )
  {
    do
    {
      v10 = 0;
      if ( v13 >= v11 )
        break;
      v14 = v13++;
      *v7++ = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v14);
      ++v19;
    }
    while ( v19 < a3 );
  }
  else
  {
    do
    {
      v10 = 0;
      if ( v13 >= v11 )
        break;
      ++v5;
      v15 = v13++;
      *v7++ = *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v15);
    }
    while ( v5 < a3 );
  }
LABEL_11:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      --*v9;
    else
      ReleaseSRWLockShared((PSRWLOCK)(a1 + 112));
  }
  if ( v10 >= 0 )
  {
    if ( v19 )
    {
      for ( i = 0; i < v12; ++i )
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
