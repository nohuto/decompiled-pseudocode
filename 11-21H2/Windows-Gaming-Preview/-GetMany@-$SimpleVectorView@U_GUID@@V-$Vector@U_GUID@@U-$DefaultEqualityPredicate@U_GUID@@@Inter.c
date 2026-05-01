/*
 * XREFs of ?GetMany@?$SimpleVectorView@U_GUID@@V?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAU_GUID@@PEAI@Z @ 0x1800356A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<_GUID,Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int i; // r10d
  __int64 v8; // rax
  int v9; // ebx
  _DWORD *v10; // r14
  int v11; // eax
  unsigned int j; // ecx
  __int64 v13; // rax

  for ( i = 0; i < a3; *(_OWORD *)(a4 + 8 * v8) = 0LL )
    v8 = 2LL * i++;
  *a5 = 0;
  v9 = *(_DWORD *)(a1 + 80);
  v10 = *(_DWORD **)(a1 + 72);
  if ( v9 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 128LL))(*(_QWORD *)(a1 + 72));
    v9 = v11;
    if ( *(_DWORD *)(a1 + 84) != v10[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( j = 0; j < *a5; *(_OWORD *)(a4 + 8 * v13) = 0LL )
          v13 = 2LL * j++;
        *a5 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v9, 0LL);
  }
  return (unsigned int)v9;
}
