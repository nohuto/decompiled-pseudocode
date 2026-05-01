/*
 * XREFs of _lambda_75640f340b6302f1fe16b95c421a43bd_::_lambda_75640f340b6302f1fe16b95c421a43bd_ @ 0x18030F5C0
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x18030F3EC (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall lambda_75640f340b6302f1fe16b95c421a43bd_::_lambda_75640f340b6302f1fe16b95c421a43bd_(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 *a4,
        __int64 a5)
{
  volatile int *v9; // rdx
  __int64 v10; // rcx

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  v10 = *a4;
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_DWORD *)(a1 + 16) = *a3;
  *(_QWORD *)(a1 + 24) = v10;
  if ( v10 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v10 + 228), v9);
  *(_QWORD *)(a1 + 32) = a5;
  return a1;
}
