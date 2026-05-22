/*
 * XREFs of ??R_lambda_89c47fb2dbc65534a5fcd0a819bb7b31_@@QEBAXXZ @ 0x1801654AC
 * Callers:
 *     ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x180169260 (-GetMany@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredic.c)
 *     ?GetMany@?$SimpleVectorView@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIIPEAPEAUHSTRING__@@PEAI@Z @ 0x1801693A0 (-GetMany@-$SimpleVectorView@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall _lambda_89c47fb2dbc65534a5fcd0a819bb7b31_::operator()(__int64 a1)
{
  _DWORD **result; // rax
  __int64 v2; // rbp
  _DWORD *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rbx

  result = *(_DWORD ***)a1;
  v2 = 0LL;
  v4 = **(_DWORD ***)a1;
  if ( *v4 )
  {
    do
    {
      v5 = *(__int64 **)(a1 + 8);
      v6 = *v5;
      WindowsDeleteString(*(HSTRING *)(*v5 + 8 * v2));
      *(_QWORD *)(v6 + 8 * v2) = 0LL;
      result = *(_DWORD ***)a1;
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      v4 = *result;
    }
    while ( (unsigned int)v2 < **result );
  }
  *v4 = 0;
  return result;
}
