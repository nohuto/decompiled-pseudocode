/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x180016C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 i; // rcx
  int v8; // ebx
  __int64 v9; // r13
  unsigned __int32 v10; // r15d
  bool v11; // zf
  signed __int32 v12; // eax
  _DWORD *v13; // rax
  __int64 j; // rbp
  _DWORD *v15; // rax
  __int64 k; // rdi

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
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v10 + *a4, v10);
      v11 = v10 == v12;
      v10 = v12;
      if ( v11 )
        break;
      v13 = a4;
      for ( j = 0LL; (unsigned int)j < *a4; v13 = a4 )
      {
        WindowsDeleteString(*(HSTRING *)(a3 + 8 * j));
        *(_QWORD *)(a3 + 8 * j) = 0LL;
        j = (unsigned int)(j + 1);
      }
      *v13 = 0;
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
        RoOriginateError(2147483660LL, 0LL);
        v15 = a4;
        for ( k = 0LL; (unsigned int)k < *a4; v15 = a4 )
        {
          WindowsDeleteString(*(HSTRING *)(a3 + 8 * k));
          *(_QWORD *)(a3 + 8 * k) = 0LL;
          k = (unsigned int)(k + 1);
        }
        *v15 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v8, 0LL);
  }
  return (unsigned int)v8;
}
