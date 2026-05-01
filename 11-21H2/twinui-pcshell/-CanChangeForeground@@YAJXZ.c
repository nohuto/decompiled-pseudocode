/*
 * XREFs of ?CanChangeForeground@@YAJXZ @ 0x180058F1C
 * Callers:
 *     ?SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z @ 0x180032ED0 (-SetActiveApp@CApplicationManager@@UEAAJW4IAM_APPLICATION_REALM@@PEAUHWND__@@@Z.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x180058A64 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x180058E90 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 *     _lambda_962fc89a5bac582bde0e3fc2d93f2aaa_::operator() @ 0x1802E0B00 (_lambda_962fc89a5bac582bde0e3fc2d93f2aaa_--operator().c)
 *     ?s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z @ 0x18030C060 (-s_EnsureCanTakeForeground@CTaskWindow@@CA_NPEBUWINDOW_ACTION_PREREQ@1@@Z.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800E7D10 (-ResultFromKnownLastError@@YAJXZ.c)
 */

__int64 CanChangeForeground(void)
{
  __int64 result; // rax
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)CanBrokerForceForeground(&v1) )
    return v1 == 0 ? 0x8007139F : 0;
  result = ResultFromKnownLastError();
  if ( (int)result >= 0 )
    return v1 == 0 ? 0x8007139F : 0;
  return result;
}
