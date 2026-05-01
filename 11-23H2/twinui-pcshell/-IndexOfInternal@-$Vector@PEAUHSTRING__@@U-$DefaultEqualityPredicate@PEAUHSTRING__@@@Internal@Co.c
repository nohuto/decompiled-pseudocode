/*
 * XREFs of ?IndexOfInternal@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@AEAAJPEAPEAUHSTRING__@@IPEAU6@PEAIPEAE@Z @ 0x180400C70
 * Callers:
 *     ?IndexOf@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAIPEAE@Z @ 0x180400AA0 (-IndexOf@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collection.c)
 * Callees:
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x1803FA350 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::VectorOptions<HSTRING__ *,0,1,0>>::IndexOfInternal(
        __int64 a1,
        HSTRING *a2,
        unsigned int a3,
        HSTRING a4,
        unsigned int *a5,
        _BYTE *a6)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v11; // eax
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v13 = 0;
  v7 = 0;
  if ( a3 )
  {
    while ( (int)v6 >= 0 )
    {
      v11 = XWinRT::StringEquals::operator()(v6, a4, *a2, &v13);
      v6 = (unsigned int)v11;
      if ( v11 >= 0 && v13 )
      {
        *a6 = 1;
        *a5 = v7;
        return (unsigned int)v6;
      }
      ++v7;
      ++a2;
      if ( v7 >= a3 )
        return (unsigned int)v6;
    }
  }
  return (unsigned int)v6;
}
