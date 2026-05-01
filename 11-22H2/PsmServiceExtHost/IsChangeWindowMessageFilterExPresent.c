/*
 * XREFs of IsChangeWindowMessageFilterExPresent @ 0x18004AAC4
 * Callers:
 *     ?UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z @ 0x180097694 (-UtilRegisterErrorReportingDialog@@YAHPEAUHWND__@@KPEAI@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x18004A2A0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsChangeWindowMessageFilterExPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800DBF78 == 1 )
    return 1;
  if ( dword_1800DBF78 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"8:", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800DBF78 = 2 - (v1 != 0);
  return result;
}
