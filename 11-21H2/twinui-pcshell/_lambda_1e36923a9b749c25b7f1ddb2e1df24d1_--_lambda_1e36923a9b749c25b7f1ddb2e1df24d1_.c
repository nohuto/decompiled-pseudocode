/*
 * XREFs of _lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::_lambda_1e36923a9b749c25b7f1ddb2e1df24d1_ @ 0x1801B4B34
 * Callers:
 *     ?OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@PEAUIArrangedWindowResizeStartedEventArgs@3456@@Z @ 0x180529A40 (-OnArrangedWindowResizeStarted@JointResize@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEv.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_1e36923a9b749c25b7f1ddb2e1df24d1_::_lambda_1e36923a9b749c25b7f1ddb2e1df24d1_(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        _OWORD *a4)
{
  __int64 v4; // rax
  __int64 *v7; // rcx
  __int64 result; // rax

  v4 = *a3;
  *(_QWORD *)a1 = a2;
  v7 = (__int64 *)(a1 + 8);
  *v7 = v4;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
  result = a1;
  *(_OWORD *)(a1 + 16) = *a4;
  return result;
}
