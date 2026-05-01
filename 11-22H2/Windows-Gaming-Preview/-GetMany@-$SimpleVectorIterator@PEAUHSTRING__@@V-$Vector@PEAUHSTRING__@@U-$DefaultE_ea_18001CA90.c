/*
 * XREFs of ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x18001CA90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,0>::GetMany(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int i; // ecx
  __int64 v9; // rax
  _DWORD *v10; // rbp
  int v11; // ebx
  unsigned __int32 v12; // r15d
  bool v13; // zf
  signed __int32 v14; // eax
  __int64 j; // rbp
  unsigned int k; // esi
  __int64 v17; // rbx
  _DWORD *v19; // [rsp+70h] [rbp+8h]

  *a4 = 0;
  for ( i = 0; i < a2; *(_QWORD *)(a3 + 8 * v9) = 0LL )
    v9 = i++;
  v10 = *(_DWORD **)(a1 + 32);
  v11 = *(_DWORD *)(a1 + 48);
  v19 = v10;
  if ( v11 >= 0 )
  {
    v12 = *(_DWORD *)(a1 + 40);
    if ( *(_BYTE *)(a1 + 56) )
    {
      v11 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, _QWORD, __int64, unsigned int *))(*(_QWORD *)v10 + 128LL))(
              v10,
              v12,
              a2,
              a3,
              a4);
      if ( v11 >= 0 )
        *(_DWORD *)(a1 + 40) = v12 + *a4;
    }
    else
    {
      while ( 1 )
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int *))(**(_QWORD **)(a1 + 32) + 128LL))(
                *(_QWORD *)(a1 + 32),
                v12,
                a2,
                a3,
                a4);
        if ( v11 < 0 )
          break;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v12 + *a4, v12);
        v13 = v12 == v14;
        v12 = v14;
        if ( v13 )
          break;
        for ( j = 0LL; (unsigned int)j < *a4; j = (unsigned int)(j + 1) )
        {
          WindowsDeleteString(*(HSTRING *)(a3 + 8 * j));
          *(_QWORD *)(a3 + 8 * j) = 0LL;
        }
        *a4 = 0;
      }
      v10 = v19;
    }
    if ( *(_DWORD *)(a1 + 52) != v10[22] )
    {
      *(_DWORD *)(a1 + 48) = -2147483636;
      if ( v11 < 0 )
      {
        RoTransformError((unsigned int)v11, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        for ( k = 0; k < *a4; *(_QWORD *)(a3 + 8 * v17) = 0LL )
        {
          v17 = k;
          WindowsDeleteString(*(HSTRING *)(a3 + 8LL * k++));
        }
        *a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v11, 0LL);
  }
  return (unsigned int)v11;
}
