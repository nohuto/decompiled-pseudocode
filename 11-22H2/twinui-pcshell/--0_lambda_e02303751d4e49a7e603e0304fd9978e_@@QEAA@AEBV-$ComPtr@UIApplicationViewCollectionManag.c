/*
 * XREFs of ??0_lambda_e02303751d4e49a7e603e0304fd9978e_@@QEAA@AEBV?$ComPtr@UIApplicationViewCollectionManagement@@@WRL@Microsoft@@$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x18000EB9C
 * Callers:
 *     ??$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@Z @ 0x18000EB34 (--$QueueViewManagementTask@V_lambda_e3476b40c3599fe2d8be82ea48422b91_@@@CIAMGlobals@@QEAAJ$$QEAV.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

_QWORD *__fastcall _lambda_e02303751d4e49a7e603e0304fd9978e_::_lambda_e02303751d4e49a7e603e0304fd9978e_(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // rbx

  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  a1[1] = 0LL;
  if ( a1 + 1 != a3 )
  {
    a1[1] = *a3;
    *a3 = 0LL;
  }
  v5 = a3 + 1;
  a1[2] = 0LL;
  if ( a1 + 2 != v5 )
  {
    a1[2] = *v5;
    *v5 = 0LL;
  }
  return a1;
}
