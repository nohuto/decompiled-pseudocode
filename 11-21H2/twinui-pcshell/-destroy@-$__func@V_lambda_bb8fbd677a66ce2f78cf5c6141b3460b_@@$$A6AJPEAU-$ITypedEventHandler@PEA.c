/*
 * XREFs of ?destroy@?$__func@V_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_@@$$A6AJPEAU?$ITypedEventHandler@PEAVFamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@PEAVAppUsageStateChangedEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEAAXXZ @ 0x180563DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppUsageStateChangedEventArgs@AppLimits@FamilySafety@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180563530 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIApp_ea_180563530.c)
 */

__int64 __fastcall wistd::__function::__func<_lambda_bb8fbd677a66ce2f78cf5c6141b3460b_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *,Windows::Internal::FamilySafety::AppLimits::AppUsageStateChangedEventArgs *> *)>::destroy(
        __int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( result )
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::FamilySafety::AppLimits::IAppUsageStateChangedEventArgs,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
