/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x18001C400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 i; // rcx
  int v8; // ebx
  _DWORD *v9; // r12
  unsigned __int32 v10; // r14d
  _DWORD *v11; // rax
  __int64 k; // rdi
  bool v13; // zf
  signed __int32 v14; // eax
  _DWORD *v15; // rax
  __int64 j; // rbp

  *a4 = 0;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    *(_QWORD *)(a3 + 8 * i) = 0LL;
  v8 = *(_DWORD *)(a1 + 48);
  v9 = *(_DWORD **)(a1 + 32);
  if ( v8 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v8 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, __int64, _DWORD *))(*(_QWORD *)v9 + 128LL))(
             v9,
             v10,
             a2,
             a3,
             a4);
      if ( v8 >= 0 )
        *(_DWORD *)(a1 + 40) = v10 + *a4;
    }
    else
    {
      while ( 1 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(**(_QWORD **)(a1 + 32) + 128LL))(
               *(_QWORD *)(a1 + 32),
               v10,
               a2,
               a3,
               a4);
        if ( v8 < 0 )
          break;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v10 + *a4, v10);
        v13 = v10 == v14;
        v10 = v14;
        if ( v13 )
          break;
        v15 = a4;
        for ( j = 0LL; (unsigned int)j < *a4; v15 = a4 )
        {
          WindowsDeleteString(*(HSTRING *)(a3 + 8 * j));
          *(_QWORD *)(a3 + 8 * j) = 0LL;
          j = (unsigned int)(j + 1);
        }
        *v15 = 0;
      }
    }
    if ( *(_DWORD *)(a1 + 52) != v9[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        v11 = a4;
        for ( k = 0LL; (unsigned int)k < *a4; v11 = a4 )
        {
          WindowsDeleteString(*(HSTRING *)(a3 + 8 * k));
          *(_QWORD *)(a3 + 8 * k) = 0LL;
          k = (unsigned int)(k + 1);
        }
        *v11 = 0;
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
