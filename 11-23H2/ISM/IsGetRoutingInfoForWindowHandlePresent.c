/*
 * XREFs of IsGetRoutingInfoForWindowHandlePresent @ 0x180057DD0
 * Callers:
 *     ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C3C0 (-OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800578E0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsGetRoutingInfoForWindowHandlePresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180268738 == 1 )
    return 1;
  if ( dword_180268738 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0((__int64)L"LN", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_180268738 = 2 - (v1 != 0);
  return result;
}
