/*
 * XREFs of IsGetRoutingInfoForWindowHandlePresent @ 0x180097008
 * Callers:
 *     ?VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z @ 0x1800F6BCC (-VisualRedirectMouseToHwnd@CDevice@DirectComposition@@QEAAJIPEAUHWND__@@KK@Z.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800973D0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetRoutingInfoForWindowHandlePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_18021C250 == 1 )
    return 1;
  if ( dword_18021C250 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"LN", &v1) < 0 )
    return 0;
  result = v1;
  dword_18021C250 = 2 - (v1 != 0);
  return result;
}
