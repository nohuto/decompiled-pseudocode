/*
 * XREFs of ApiSetEditionGetPointerDeviceConfigurationKey @ 0x1C0095F84
 * Callers:
 *     AccessPTPEnabledStatus @ 0x1C0095B90 (AccessPTPEnabledStatus.c)
 *     ?UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ @ 0x1C0095D40 (-UpdateWakeOnInputDeviceTypesFromRegistry@CInputGlobals@@QEAAXXZ.c)
 *     GetDWORDSettingValuesEx @ 0x1C0095EE0 (GetDWORDSettingValuesEx.c)
 *     WriteSettingValues @ 0x1C013F2A0 (WriteSettingValues.c)
 *     ?SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z @ 0x1C01DC9EC (-SetWakeableInputTypesToRegistry@CInputGlobals@@QEAA_NKK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionGetPointerDeviceConfigurationKey(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( qword_1C0296D40 && (int)qword_1C0296D40() >= 0 && qword_1C0296D48 )
    return qword_1C0296D48(a1, a2);
  return v2;
}
