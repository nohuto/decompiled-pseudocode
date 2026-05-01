/*
 * XREFs of ?Localize@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1803CAD90
 * Callers:
 *     ?Invoke@?$GitInvokeHelper@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@$01@Details@Internal@Windows@@UEAAJPEAUISplashScreen@Activation@ApplicationModel@4@PEAUIInspectable@@@Z @ 0x1803CACE0 (-Invoke@-$GitInvokeHelper@U-$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Win.c)
 *     ?Invoke@?$GitInvokeHelper@U?$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@VGitPtr@Internal@4@$01@Details@Internal@Windows@@UEAAJPEAU?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@4@PEAUIVectorChangedEventArgs@674@@Z @ 0x1804C6BF0 (-Invoke@-$GitInvokeHelper@U-$VectorChangedEventHandler@UDisplayRegionId@WindowingEnvironment@App.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::Localize(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // rdx
  __int64 result; // rax

  *a3 = 0LL;
  v4 = *(unsigned int *)(a1 + 8);
  if ( !(_DWORD)v4 )
    return 2147942487LL;
  result = *(unsigned int *)(a1 + 12);
  if ( (int)result >= 0 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD *))(*(_QWORD *)qword_18098F308 + 40LL))(
             qword_18098F308,
             v4,
             a2,
             a3);
  return result;
}
