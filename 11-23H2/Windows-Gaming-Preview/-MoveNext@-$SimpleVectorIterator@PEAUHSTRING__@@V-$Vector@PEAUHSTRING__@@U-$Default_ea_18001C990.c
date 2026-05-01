/*
 * XREFs of ?MoveNext@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18001C990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::SimpleVectorIterator<HSTRING__ *,Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,XWinRT::IntVersionTag,0>::MoveNext(
        __int64 a1,
        bool *a2)
{
  int v3; // ebx
  __int64 v5; // rbp
  unsigned __int32 v6; // edx
  unsigned int v7; // ecx
  bool v8; // zf
  signed __int32 v9; // eax

  *a2 = 0;
  v3 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v3 < 0 )
  {
    RoOriginateError((unsigned int)v3, 0LL);
    return (unsigned int)v3;
  }
  v6 = *(_DWORD *)(a1 + 40);
  if ( *(_BYTE *)(a1 + 56) )
  {
    v7 = *(_DWORD *)(a1 + 44);
    if ( v6 < v7 )
    {
      *(_DWORD *)(a1 + 40) = v6 + 1;
      v3 = 0;
      *a2 = v6 + 1 < v7;
      goto LABEL_10;
    }
  }
  else
  {
    while ( 1 )
    {
      *a2 = 0;
      if ( v6 >= *(_DWORD *)(a1 + 44) )
        break;
      v3 = 0;
      *a2 = v6 + 1 < *(_DWORD *)(a1 + 44);
      v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), v6 + 1, v6);
      v8 = v6 == v9;
      v6 = v9;
      if ( v8 )
        goto LABEL_10;
      *a2 = 0;
    }
  }
  v3 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
LABEL_10:
  if ( *(_DWORD *)(a1 + 52) != *(_DWORD *)(v5 + 88) )
  {
    *(_DWORD *)(a1 + 48) = -2147483636;
    if ( v3 < 0 )
    {
      RoTransformError((unsigned int)v3, 2147483660LL, 0LL);
    }
    else
    {
      RoOriginateError(2147483660LL, 0LL);
      *a2 = 0;
    }
    return (unsigned int)-2147483636;
  }
  return (unsigned int)v3;
}
