/*
 * XREFs of ?_EraseAll@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@AEAAXPEAPEANPEAI@Z @ 0x18033BE68
 * Callers:
 *     ??1?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@MEAA@XZ @ 0x18032BE50 (--1-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U-$DefaultLi.c)
 *     ?Clear@?$Vector@NU?$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@N@2345@U?$VectorOptions@N$0A@$00$0A@@2345@@Internal@Collections@Foundation@Windows@@UEAAJXZ @ 0x18032DC00 (-Clear@-$Vector@NU-$DefaultEqualityPredicate@N@Internal@Collections@Foundation@Windows@@U-$Defau.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::_EraseAll(
        __int64 a1,
        __int64 *a2,
        _DWORD *a3)
{
  __int64 result; // rax
  int v4; // r9d

  ++*(_DWORD *)(a1 + 120);
  result = *(_QWORD *)(a1 + 88);
  v4 = *(_DWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( !a2 )
    return Windows::Foundation::Collections::Internal::Vector<double,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<double>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<double>,Windows::Foundation::Collections::Internal::VectorOptions<double,0,1,0>>::_Free(result);
  *a2 = result;
  *a3 = v4;
  return result;
}
