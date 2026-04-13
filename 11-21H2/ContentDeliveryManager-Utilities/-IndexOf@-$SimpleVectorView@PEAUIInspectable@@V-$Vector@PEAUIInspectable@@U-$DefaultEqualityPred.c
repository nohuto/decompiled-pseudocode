/*
 * XREFs of ?IndexOf@?$SimpleVectorView@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAUIInspectable@@PEAIPEAE@Z @ 0x1800DFF70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::IndexOf(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v6; // ebx
  _DWORD *v8; // r15
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9

  *a3 = 0;
  *a4 = 0;
  v6 = *(_DWORD *)(a1 + 80);
  v8 = *(_DWORD **)(a1 + 72);
  if ( v6 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 72LL))(*(_QWORD *)(a1 + 72));
    v6 = v9;
    if ( *(_DWORD *)(a1 + 84) != v8[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL, v10, v11);
        *a3 = 0;
        *a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL, a3, a4);
  }
  return (unsigned int)v6;
}
