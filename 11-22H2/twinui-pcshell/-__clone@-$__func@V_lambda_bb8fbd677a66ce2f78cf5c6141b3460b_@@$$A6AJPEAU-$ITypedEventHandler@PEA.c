/*
 * XREFs of ?__clone@?$__func@V_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x180620870
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

signed __int64 __fastcall wistd::__function::__func<_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *> *)>::__clone(
        __int64 a1,
        __int64 a2)
{
  signed __int64 result; // rax
  __int64 v3; // r8
  signed __int64 v4; // rtt

  *(_QWORD *)a2 = &wistd::__function::__func<_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *> *)>::`vftable';
  result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 16) = v3;
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 56);
    while ( result >= 0 )
    {
      if ( (_DWORD)result != 0x7FFFFFFF )
      {
        v4 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 56), result + 1, result);
        if ( v4 != result )
          continue;
      }
      return result;
    }
    return Microsoft::WRL::Details::SafeUnknownIncrementReference(
             (Microsoft::WRL::Details *)(2 * result + 16),
             (volatile int *)a2);
  }
  return result;
}
