/*
 * XREFs of RiDeleteDeviceQueueEntry @ 0x1C0040EDC
 * Callers:
 *     RaidDeleteDeviceQueueEntry @ 0x1C00401A8 (RaidDeleteDeviceQueueEntry.c)
 * Callees:
 *     <none>
 */

LONG __fastcall RiDeleteDeviceQueueEntry(__int64 a1, int a2)
{
  int v2; // eax
  LONG result; // eax

  if ( a2 )
    *(_BYTE *)(a1 + 38) = 0;
  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
    *(_DWORD *)(a1 + 28) = v2 - 1;
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFFFFFFFFFEuLL);
  if ( (((__int64)*(unsigned int *)(a1 + 88) >> 1) & 0x7FFFFFFF) == 0 )
  {
    if ( *(_DWORD *)(a1 + 40) )
      return KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  }
  return result;
}
