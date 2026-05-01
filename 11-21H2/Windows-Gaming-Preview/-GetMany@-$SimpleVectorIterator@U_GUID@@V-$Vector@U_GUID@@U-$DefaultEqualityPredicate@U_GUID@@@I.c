/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@U_GUID@@V?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@PEAI@Z @ 0x180035250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<_GUID,Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int i; // ecx
  __int64 v8; // rax
  int v9; // ebx
  __int64 v10; // r15
  unsigned __int32 v11; // r14d
  bool v12; // zf
  signed __int32 v13; // eax
  unsigned int *v14; // rax
  unsigned int j; // ecx
  __int64 v16; // rax
  unsigned int *v17; // rax
  unsigned int k; // ecx
  __int64 v19; // rax

  *a4 = 0;
  for ( i = 0; i < a2; *(_OWORD *)(a3 + 8 * v8) = 0LL )
    v8 = 2LL * i++;
  v9 = *(_DWORD *)(a1 + 80);
  v10 = *(_QWORD *)(a1 + 64);
  if ( v9 >= 0 )
  {
    v11 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 64) + 128LL))(
             *(_QWORD *)(a1 + 64),
             v11,
             a2,
             a3,
             a4);
      if ( v9 < 0 )
        break;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v11 + *a4, v11);
      v12 = v11 == v13;
      v11 = v13;
      if ( v12 )
        break;
      v14 = a4;
      for ( j = 0; j < *a4; v14 = a4 )
      {
        v16 = 2LL * j++;
        *(_OWORD *)(a3 + 8 * v16) = 0LL;
      }
      *v14 = 0;
    }
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v10 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v17 = a4;
        for ( k = 0; k < *a4; v17 = a4 )
        {
          v19 = 2LL * k++;
          *(_OWORD *)(a3 + 8 * v19) = 0LL;
        }
        *v17 = 0;
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
