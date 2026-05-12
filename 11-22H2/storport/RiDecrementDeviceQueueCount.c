/*
 * XREFs of RiDecrementDeviceQueueCount @ 0x1C0006A0C
 * Callers:
 *     RiNormalizeDeviceQueue @ 0x1C0004130 (RiNormalizeDeviceQueue.c)
 *     RaidRemoveIoQueue @ 0x1C0021C14 (RaidRemoveIoQueue.c)
 *     RaidLunQueueCheckWaitTimeout @ 0x1C004039C (RaidLunQueueCheckWaitTimeout.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RiDecrementDeviceQueueCount(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax

  if ( (*(_BYTE *)(a2 + 22) & 6) != 0 )
  {
    --*(_DWORD *)(a1 + 16);
  }
  else
  {
    result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFF00000000uLL);
    if ( *(_BYTE *)(a2 + 22) )
      --*(_DWORD *)(a1 + 32);
  }
  if ( (*(_BYTE *)(a2 + 22) & 8) != 0 )
    --*(_DWORD *)(a1 + 20);
  return result;
}
