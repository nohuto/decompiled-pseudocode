/*
 * XREFs of ?get_HasCurrent@?$SimpleVectorIterator@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x180084A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<IInspectable *,Windows::Foundation::Collections::Internal::Vector<IInspectable *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<IInspectable *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::VectorOptions<IInspectable *,0,1,0>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,XWinRT::IntVersionTag,1>::get_HasCurrent(
        __int64 a1,
        bool *a2)
{
  int v3; // ebx
  __int64 v4; // rdx

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 64);
  if ( v3 >= 0 )
  {
    v3 = 0;
    *a2 = *(_DWORD *)(a1 + 72) < *(_DWORD *)(a1 + 76);
    if ( *(_DWORD *)(a1 + 84) != *(_DWORD *)(v4 + 120) )
    {
      v3 = -2147483636;
      *(_DWORD *)(a1 + 80) = -2147483636;
      RoOriginateError(2147483660LL, 0LL);
      *a2 = 0;
    }
  }
  else
  {
    RoOriginateError((unsigned int)v3, 0LL);
  }
  return (unsigned int)v3;
}
