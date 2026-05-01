/*
 * XREFs of ?IndexOf@?$SimpleVectorView@U_GUID@@V?$Vector@U_GUID@@U?$DefaultEqualityPredicate@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@U?$VectorOptions@U_GUID@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@U_GUID@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJU_GUID@@PEAIPEAE@Z @ 0x1800355D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<_GUID,Windows::Foundation::Collections::Internal::Vector<_GUID,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::VectorOptions<_GUID,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,XWinRT::IntVersionTag,1>::IndexOf(
        __int64 a1,
        _OWORD *a2,
        _DWORD *a3,
        _BYTE *a4)
{
  int v6; // ebx
  __int64 *v8; // r15
  __int64 v9; // rax
  int v10; // eax
  _OWORD v12[3]; // [rsp+30h] [rbp-38h] BYREF

  *a3 = 0;
  *a4 = 0;
  v6 = *(_DWORD *)(a1 + 80);
  v8 = *(__int64 **)(a1 + 72);
  if ( v6 >= 0 )
  {
    v9 = *v8;
    v12[0] = *a2;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _OWORD *))(v9 + 72))(v8, v12);
    v6 = v10;
    if ( *(_DWORD *)(a1 + 84) != *((_DWORD *)v8 + 30) )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v10 < 0 )
      {
        RoTransformError((unsigned int)v10, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        *a3 = 0;
        *a4 = 0;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v6, 0LL);
  }
  return (unsigned int)v6;
}
