/*
 * XREFs of RiGetEnqueueReason @ 0x1C000B654
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C00063C0 (StorPortAdapterActiveCondition.c)
 *     RiNormalizeDeviceQueue @ 0x1C000936C (RiNormalizeDeviceQueue.c)
 *     RaidInsertDeviceQueue @ 0x1C000ACB0 (RaidInsertDeviceQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C0009628 (RiPeekDeviceQueue.c)
 *     RiIsDeviceQueueBusy @ 0x1C000B720 (RiIsDeviceQueueBusy.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2, __int64 a3)
{
  int IsDeviceQueueBusy; // eax
  __int64 v4; // r9
  __int64 v5; // r10
  char v6; // r8
  __int64 v7; // rax
  char v8; // al
  __int64 result; // rax

  LOBYTE(a2) = a3;
  IsDeviceQueueBusy = RiIsDeviceQueueBusy(a1, a2, a3, a1);
  v6 = 0;
  if ( IsDeviceQueueBusy )
    return 1LL;
  if ( *(_BYTE *)(v4 + 37) && (*(_BYTE *)(v5 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(v4 + 36) && (*(_BYTE *)(v5 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(v4 + 28) > 0 )
    return 4LL;
  if ( *(_BYTE *)(v4 + 38) )
    return 5LL;
  if ( !*(_DWORD *)(v4 + 20) && !*(_DWORD *)(v4 + 16)
    || (v7 = RiPeekDeviceQueue(v4), v5 == v7)
    || (*(_BYTE *)(v7 + 22) & 1) == 0
    || (result = 6LL, (*(_BYTE *)(v5 + 22) & 6) != 0) )
  {
    v8 = *(_BYTE *)(v5 + 22);
    if ( (v8 & 1) != 0 && *(int *)(v4 + 76) >= 1 )
    {
      return 7LL;
    }
    else if ( *(_BYTE *)(v4 + 39) == v6 || (v8 & 8) != 0 )
    {
      if ( (v8 & 0x10) != 0 )
        return 9LL;
      else
        return (v8 & 0x40) != 0 ? 0xA : 0;
    }
    else
    {
      return 8LL;
    }
  }
  return result;
}
