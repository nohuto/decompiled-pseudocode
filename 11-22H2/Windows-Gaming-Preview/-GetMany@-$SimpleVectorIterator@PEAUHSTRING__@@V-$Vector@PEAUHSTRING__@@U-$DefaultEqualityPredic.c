/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x1800170D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 i; // rcx
  int v9; // ebx
  unsigned __int32 v10; // r15d
  bool v11; // zf
  signed __int32 v12; // eax
  __int64 j; // rbp
  __int64 k; // rsi
  __int64 v16; // [rsp+70h] [rbp+8h]

  *a4 = 0;
  for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    *(_QWORD *)(a3 + 8 * i) = 0LL;
  v9 = *(_DWORD *)(a1 + 80);
  v16 = *(_QWORD *)(a1 + 64);
  if ( v9 >= 0 )
  {
    v10 = *(_DWORD *)(a1 + 72);
    while ( 1 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _DWORD *))(**(_QWORD **)(a1 + 64) + 128LL))(
             *(_QWORD *)(a1 + 64),
             v10,
             a2,
             a3,
             a4);
      if ( v9 < 0 )
        break;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 72), v10 + *a4, v10);
      v11 = v10 == v12;
      v10 = v12;
      if ( v11 )
        break;
      for ( j = 0LL; (unsigned int)j < *a4; j = (unsigned int)(j + 1) )
      {
        WindowsDeleteString(*(HSTRING *)(a3 + 8 * j));
        *(_QWORD *)(a3 + 8 * j) = 0LL;
      }
      *a4 = 0;
    }
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v16 + 120) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( k = 0LL; (unsigned int)k < *a4; k = (unsigned int)(k + 1) )
        {
          WindowsDeleteString(*(HSTRING *)(a3 + 8 * k));
          *(_QWORD *)(a3 + 8 * k) = 0LL;
        }
        *a4 = 0;
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
