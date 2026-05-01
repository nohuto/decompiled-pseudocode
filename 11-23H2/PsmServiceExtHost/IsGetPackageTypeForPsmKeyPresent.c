/*
 * XREFs of IsGetPackageTypeForPsmKeyPresent @ 0x180049F08
 * Callers:
 *     ?HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@Z @ 0x18008E304 (-HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18004A210 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetPackageTypeForPsmKeyPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800DBEF4 == 1 )
    return 1;
  if ( dword_1800DBEF4 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"68", &v1) < 0 )
    return 0;
  result = v1;
  dword_1800DBEF4 = 2 - (v1 != 0);
  return result;
}
