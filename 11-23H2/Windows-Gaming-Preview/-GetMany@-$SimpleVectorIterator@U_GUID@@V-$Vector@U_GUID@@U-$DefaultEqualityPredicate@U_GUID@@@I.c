/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@U_GUID@@V?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@PEAI@Z @ 0x180035C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<_GUID,Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int i; // ecx
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // r13
  unsigned __int32 v12; // r14d
  bool v13; // zf
  signed __int32 v14; // eax
  unsigned int j; // ecx
  __int64 v16; // rax
  unsigned int k; // ecx
  __int64 v18; // rax

  *a4 = 0;
  for ( i = 0; i < a2; *(_OWORD *)(a3 + 8 * v9) = 0LL )
    v9 = 2LL * i++;
  v10 = *(_DWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 64);
  if ( v10 >= 0 )
  {
    v12 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 64) + 128LL))(
              *(_QWORD *)(a1 + 64),
              v12,
              a2,
              a3,
              a4);
      if ( v10 < 0 )
        break;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v12 + *a4, v12);
      v13 = v12 == v14;
      v12 = v14;
      if ( v13 )
        break;
      for ( j = 0; j < *a4; *(_OWORD *)(a3 + 8 * v16) = 0LL )
        v16 = 2LL * j++;
      *a4 = 0;
    }
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v11 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( k = 0; k < *a4; *(_OWORD *)(a3 + 8 * v18) = 0LL )
          v18 = 2LL * k++;
        *a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v10, 0LL);
  }
  return (unsigned int)v10;
}
