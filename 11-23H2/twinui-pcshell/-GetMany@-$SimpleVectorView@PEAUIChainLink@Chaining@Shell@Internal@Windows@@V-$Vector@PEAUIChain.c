/*
 * XREFs of ?GetMany@?$SimpleVectorView@PEAUIChainLink@Chaining@Shell@Internal@Windows@@V?$Vector@PEAUIChainLink@Chaining@Shell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@U?$VectorOptions@PEAUIChainLink@Chaining@Shell@Internal@Windows@@$0A@$00$0A@@4785@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIChainLink@Chaining@Shell@Internal@Windows@@@4785@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUIChainLink@Chaining@Shell@25@PEAI@Z @ 0x1803C1310
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R_lambda_0380db859c415741d5e8b3d9729508af_@@QEBA@XZ @ 0x1803BF464 (--R_lambda_0380db859c415741d5e8b3d9729508af_@@QEBA@XZ.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorView<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::Vector<Windows::Internal::Shell::Chaining::IChainLink *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Internal::Shell::Chaining::IChainLink *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Internal::Shell::Chaining::IChainLink *>,XWinRT::IntVersionTag,1>::GetMany(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5)
{
  __int64 v5; // r10
  int v7; // ebx
  _DWORD *v8; // rsi
  int v9; // eax
  _QWORD *v11[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v5 = 0LL;
  if ( (_DWORD)a3 )
  {
    while ( 1 )
    {
      *(_QWORD *)(a4 + 8 * v5) = 0LL;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= (unsigned int)a3 )
        break;
      a4 = v12;
    }
  }
  *a5 = 0;
  v7 = *(_DWORD *)(a1 + 80);
  v8 = *(_DWORD **)(a1 + 72);
  v11[0] = &a5;
  v11[1] = &v12;
  if ( v7 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64, _DWORD *))(*(_QWORD *)v8 + 128LL))(
           v8,
           a2,
           a3,
           v12,
           a5);
    v7 = v9;
    if ( *(_DWORD *)(a1 + 84) != v8[30] )
    {
      *(_DWORD *)(a1 + 80) = -2147483636;
      if ( v9 < 0 )
      {
        RoTransformError((unsigned int)v9, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        _lambda_0380db859c415741d5e8b3d9729508af_::operator()(v11);
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v7, 0LL);
  }
  return (unsigned int)v7;
}
