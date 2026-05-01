/*
 * XREFs of ?__clone@?$__func@V_lambda_2532e8ff3850da9d761cbeb5a695a89f_@@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@__function@wistd@@UEBAXPEAV?$__base@$$A6AJPEAU?$ITypedEventHandler@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@PEAUIViewHostItemEventArgs@2345@@Foundation@Windows@@@Z@23@@Z @ 0x1804B0960
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

signed __int64 __fastcall wistd::__function::__func<_lambda_2532e8ff3850da9d761cbeb5a695a89f_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *> *)>::__clone(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx
  signed __int64 result; // rax
  __int64 v5; // rdx
  signed __int64 v6; // rtt

  v2 = a2 + 1;
  *a2 = &wistd::__function::__func<_lambda_2532e8ff3850da9d761cbeb5a695a89f_,long (Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Holographic::IViewHostItem *,Windows::Internal::Shell::Holographic::IViewHostItemEventArgs *> *)>::`vftable';
  a2[1] = *(_QWORD *)(a1 + 8);
  result = Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2 + 1);
  v5 = *(_QWORD *)(a1 + 16);
  v2[1] = v5;
  if ( v5 )
  {
    result = *(_QWORD *)(v5 + 88);
    while ( result >= 0 )
    {
      if ( (_DWORD)result != 0x7FFFFFFF )
      {
        v6 = result;
        result = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 88), result + 1, result);
        if ( v6 != result )
          continue;
      }
      return result;
    }
    return Microsoft::WRL::Details::SafeUnknownIncrementReference(
             (Microsoft::WRL::Details *)(2 * result + 16),
             (volatile int *)v5);
  }
  return result;
}
