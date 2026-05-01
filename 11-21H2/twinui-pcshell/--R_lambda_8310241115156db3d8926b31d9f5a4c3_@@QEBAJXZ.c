/*
 * XREFs of ??R_lambda_8310241115156db3d8926b31d9f5a4c3_@@QEBAJXZ @ 0x1802E0E98
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x1802E59B0 (-MoveNext@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredi.c)
 *     ??$Do@V_lambda_8310241115156db3d8926b31d9f5a4c3_@@V_lambda_08f4cb743079a90dc8e15f092a1add52_@@@?$InvalidationChecker@V?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@AEBV_lambda_8310241115156db3d8926b31d9f5a4c3_@@AEBV_lambda_08f4cb743079a90dc8e15f092a1add52_@@@Z @ 0x1803DBB7C (--$Do@V_lambda_8310241115156db3d8926b31d9f5a4c3_@@V_lambda_08f4cb743079a90dc8e15f092a1add52_@@@-.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _lambda_8310241115156db3d8926b31d9f5a4c3_::operator()(_QWORD *a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  bool **v3; // r11
  _BYTE ***v4; // rdi
  unsigned __int32 v5; // r10d
  bool v6; // zf
  signed __int32 v7; // eax

  v1 = *a1;
  v2 = 0;
  v3 = (bool **)a1[1];
  v4 = (_BYTE ***)a1[2];
  v5 = *(_DWORD *)(*a1 + 72LL);
  while ( 1 )
  {
    **v3 = 0;
    if ( v5 >= *(_DWORD *)(v1 + 76) )
      break;
    **v3 = v5 + 1 < *(_DWORD *)(v1 + 76);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 72), v5 + 1, v5);
    v6 = v5 == v7;
    v5 = v7;
    if ( v6 )
      return v2;
    ***v4 = 0;
  }
  v2 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
  return v2;
}
