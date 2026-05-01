/*
 * XREFs of _lambda_00579e35fd3f40d9daeda2b75c1830f2_::_lambda_00579e35fd3f40d9daeda2b75c1830f2_ @ 0x1801D86B0
 * Callers:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___ @ 0x1803CB5F8 (CApplicationViewManager--_HandleFlashingChange__lambda_dafc2c99c39dbaf60a815ea558bf8360___.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ @ 0x1803CC150 (-InternalAddRef@-$ComPtr@VCApplicationViewManager@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_00579e35fd3f40d9daeda2b75c1830f2_::_lambda_00579e35fd3f40d9daeda2b75c1830f2_(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3,
        _QWORD *a4,
        __int64 a5)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)a1);
  *(_QWORD *)(a1 + 8) = a2[1];
  *(_DWORD *)(a1 + 16) = *a3;
  *(_QWORD *)(a1 + 24) = *a4;
  Microsoft::WRL::ComPtr<CApplicationViewManager>::InternalAddRef();
  result = a1;
  *(_QWORD *)(a1 + 32) = a5;
  return result;
}
