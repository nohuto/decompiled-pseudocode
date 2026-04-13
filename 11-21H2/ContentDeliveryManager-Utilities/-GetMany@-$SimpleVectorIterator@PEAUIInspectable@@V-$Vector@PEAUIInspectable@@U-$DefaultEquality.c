/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUIInspectable@@PEAI@Z @ 0x1800DE9C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 i; // rcx
  int v8; // ebx
  __int64 v9; // r13
  unsigned __int32 v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf
  signed __int32 v14; // eax
  _DWORD *v15; // rax
  __int64 j; // rbx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 k; // rbx
  __int64 v20; // rcx

  *a4 = 0;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    *(_QWORD *)(a3 + 8 * i) = 0LL;
  v8 = *(_DWORD *)(a1 + 80);
  v9 = *(_QWORD *)(a1 + 64);
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(**(_QWORD **)(a1 + 64) + 128LL))(
             *(_QWORD *)(a1 + 64),
             v10,
             a2,
             a3,
             a4);
      if ( v8 < 0 )
        break;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v10 + *a4, v10);
      v13 = v10 == v14;
      v10 = v14;
      if ( v13 )
        break;
      v15 = a4;
      for ( j = 0LL; (unsigned int)j < *a4; v15 = a4 )
      {
        v17 = *(_QWORD *)(a3 + 8 * j);
        if ( v17 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        *(_QWORD *)(a3 + 8 * j) = 0LL;
        j = (unsigned int)(j + 1);
      }
      *v15 = 0;
    }
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v9 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL, v11, v12);
        v18 = a4;
        for ( k = 0LL; (unsigned int)k < *a4; v18 = a4 )
        {
          v20 = *(_QWORD *)(a3 + 8 * k);
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          *(_QWORD *)(a3 + 8 * k) = 0LL;
          k = (unsigned int)(k + 1);
        }
        *v18 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v8, 0LL, a3, a4);
  }
  return (unsigned int)v8;
}
