/*
 * XREFs of RiIsDeviceQueueBusy @ 0x1C000B720
 * Callers:
 *     RiGetEnqueueReason @ 0x1C000B654 (RiGetEnqueueReason.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RiIsDeviceQueueBusy(_DWORD *a1, char a2)
{
  int v2; // eax
  int v3; // ecx

  if ( !a1[8] )
  {
    v2 = a1[19];
    v3 = a1[1];
    if ( a2 )
    {
      if ( v2 <= v3 )
        return 0LL;
    }
    else if ( v2 < v3 )
    {
      return 0LL;
    }
  }
  return 1LL;
}
