/*
 * XREFs of ?get_HasCurrent@?$SimpleVectorIterator@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180090E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::get_HasCurrent(
        __int64 a1,
        bool *a2,
        __int64 a3,
        __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rdx

  *a2 = 0;
  v5 = *(_DWORD *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 64);
  if ( v5 >= 0 )
  {
    v5 = 0;
    *a2 = *(_DWORD *)(a1 + 72) < *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v6 + 120) )
    {
      v5 = -2147483636;
      *(_DWORD *)(a1 + 80) = -2147483636;
      RoOriginateError(2147483660LL, 0LL, a3, a4);
      *a2 = 0;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v5, 0LL, a3, a4);
  }
  return (unsigned int)v5;
}
