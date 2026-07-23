/*
 * XREFs of EtwpFlushBufferToRealtime @ 0x1406BD8DC
 * Callers:
 *     EtwpFlushBuffer @ 0x1406BD980 (EtwpFlushBuffer.c)
 * Callees:
 *     EtwpRealtimeDeliverBuffer @ 0x140708F70 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpRealtimeSaveBuffer @ 0x1407F5E1C (EtwpRealtimeSaveBuffer.c)
 */

__int64 __fastcall EtwpFlushBufferToRealtime(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax

  result = 3221225473LL;
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) || (result = EtwpRealtimeDeliverBuffer(), (int)result < 0) )
  {
    if ( !a3 )
      return EtwpRealtimeSaveBuffer(a1, a2);
  }
  else if ( !a3 )
  {
    return result;
  }
  if ( !*(_DWORD *)(a1 + 344) || *(_DWORD *)(a1 + 424) )
    return 0LL;
  return result;
}
