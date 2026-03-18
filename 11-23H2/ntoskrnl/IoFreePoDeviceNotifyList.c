/*
 * XREFs of IoFreePoDeviceNotifyList @ 0x140A9E754
 * Callers:
 *     PoClearBroadcast @ 0x14098BB8C (PoClearBroadcast.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PnpUnlockDeviceActionQueue @ 0x1403C3F14 (PnpUnlockDeviceActionQueue.c)
 *     IopFreePoDeviceNotifyListHead @ 0x140A9E8F4 (IopFreePoDeviceNotifyListHead.c)
 */

__int64 __fastcall IoFreePoDeviceNotifyList(_BYTE *a1)
{
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax

  if ( *a1 )
  {
    v2 = a1 + 40;
    v3 = 5LL;
    do
    {
      IopFreePoDeviceNotifyListHead(v2 - 16);
      IopFreePoDeviceNotifyListHead(v2);
      IopFreePoDeviceNotifyListHead(v2 + 16);
      IopFreePoDeviceNotifyListHead(v2 + 32);
      v2 += 72;
      --v3;
    }
    while ( v3 );
    *a1 = 0;
    return PnpUnlockDeviceActionQueue();
  }
  return result;
}
