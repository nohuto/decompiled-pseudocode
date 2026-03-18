/*
 * XREFs of PiCheckRemovalPreconditions @ 0x14076556C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PiGetTargetDeviceNode @ 0x140765B84 (PiGetTargetDeviceNode.c)
 *     PnpFinalizeVetoedRemove @ 0x140950530 (PnpFinalizeVetoedRemove.c)
 */

__int64 __fastcall PiCheckRemovalPreconditions(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 TargetDeviceNode; // r9
  __int64 v4; // r10
  int v5; // r11d
  __int64 result; // rax
  __int64 v7; // rdx

  TargetDeviceNode = PiGetTargetDeviceNode(a2);
  result = 0LL;
  if ( (v5 & 0xFFFFFFFB) == 0 )
  {
    if ( (*(_DWORD *)(TargetDeviceNode + 396) & 0x1000) != 0 )
    {
      v7 = 1LL;
    }
    else
    {
      if ( v5 || *(_DWORD *)(v4 + 16) != 22 || !*(_DWORD *)(TargetDeviceNode + 600) )
        return result;
      v7 = 10LL;
    }
    PnpFinalizeVetoedRemove(v2, v7, TargetDeviceNode + 40);
    return 2147483688LL;
  }
  return result;
}
