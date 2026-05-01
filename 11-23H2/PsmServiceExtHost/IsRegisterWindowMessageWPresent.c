/*
 * XREFs of IsRegisterWindowMessageWPresent @ 0x18004AB14
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x180097334 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18004A210 (ApiSetQueryApiSetPresence_0.c)
 */

char IsRegisterWindowMessageWPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800DBF88 == 1 )
    return 1;
  if ( dword_1800DBF88 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"@B", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800DBF88 = 2 - (v1 != 0);
  return result;
}
