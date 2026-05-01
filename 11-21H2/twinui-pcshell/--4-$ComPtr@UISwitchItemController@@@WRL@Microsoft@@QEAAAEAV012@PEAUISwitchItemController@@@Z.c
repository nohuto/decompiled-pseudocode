/*
 * XREFs of ??4?$ComPtr@UISwitchItemController@@@WRL@Microsoft@@QEAAAEAV012@PEAUISwitchItemController@@@Z @ 0x1804B7E44
 * Callers:
 *     ??$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAU3@@Z @ 0x1804AF74C (--$MakeAndInitialize@VCAsyncSwitchItemController@@UISwitchItemController@@AEAPEAU2@@Details@WRL@.c)
 *     ?SetController@CSwitchItemElement@@UEAAXPEAUISwitchItemController@@@Z @ 0x1804B86F0 (-SetController@CSwitchItemElement@@UEAAXPEAUISwitchItemController@@@Z.c)
 *     ?SetController@SwitchItemThumbnailElement@@UEAAXPEAUISwitchItemController@@@Z @ 0x1804B87A0 (-SetController@SwitchItemThumbnailElement@@UEAAXPEAUISwitchItemController@@@Z.c)
 *     ??$MakeAndInitialize@VCGridTelemetryController@@UISwitchItemController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAU2@@Details@WRL@Microsoft@@YAJPEAPEAUISwitchItemController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAU3@@Z @ 0x1804D2460 (--$MakeAndInitialize@VCGridTelemetryController@@UISwitchItemController@@AEAPEAUIWeakReference@We.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ISwitchItemController>::operator=(__int64 *a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
  return a1;
}
