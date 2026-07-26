/*
 * XREFs of ndisWdfMiniportUpdatePowerState @ 0x1C008CC44
 * Callers:
 *     ndisWdfDevicePowerDown @ 0x1C008C51C (ndisWdfDevicePowerDown.c)
 *     ndisWdfDevicePowerOn @ 0x1C008C774 (ndisWdfDevicePowerOn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisWdfMiniportUpdatePowerState(_DWORD *a1, int a2)
{
  __int64 result; // rax

  a1[971] = a1[970];
  result = (unsigned int)(a2 - 1);
  a1[970] = a2;
  a1[967] = a2;
  if ( (unsigned int)result > 3 )
    __int2c();
  return result;
}
