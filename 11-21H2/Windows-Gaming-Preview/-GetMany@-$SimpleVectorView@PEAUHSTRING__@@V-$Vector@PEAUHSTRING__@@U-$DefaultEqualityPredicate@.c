/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1800170A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 i; // r10
  int v8; // ebx
  _DWORD *v9; // r15
  int v10; // eax
  __int64 j; // rsi

  for ( i = 0LL; (unsigned int)i < a3; i = (unsigned int)(i + 1) )
    *(_QWORD *)(a4 + 8 * i) = 0LL;
  *a5 = 0;
  v8 = *(_DWORD *)(a1 + 80);
  v9 = *(_DWORD **)(a1 + 72);
  if ( v8 >= 0 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 128LL))(*(_QWORD *)(a1 + 72));
    v8 = v10;
    if ( *(_DWORD *)(a1 + 84) != v9[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( j = 0LL; (unsigned int)j < *a5; j = (unsigned int)(j + 1) )
        {
          WindowsDeleteString(*(HSTRING *)(a4 + 8 * j));
          *(_QWORD *)(a4 + 8 * j) = 0LL;
        }
        *a5 = 0;
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
