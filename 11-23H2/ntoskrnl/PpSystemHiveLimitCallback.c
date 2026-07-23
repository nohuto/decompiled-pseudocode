/*
 * XREFs of PpSystemHiveLimitCallback @ 0x140958780
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1403591E4 (PnpRequestDeviceAction.c)
 *     PpResetProblemDevices @ 0x140959A54 (PpResetProblemDevices.c)
 */

__int64 __fastcall PpSystemHiveLimitCallback(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 < *(_DWORD *)(a1 + 4) )
  {
    PnpSystemHiveTooLarge = 0;
    PpResetProblemDevices();
    return PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 0xEu, 0, 0LL, 0LL, 0LL, 0LL);
  }
  else
  {
    PnpSystemHiveTooLarge = 1;
  }
  return result;
}
