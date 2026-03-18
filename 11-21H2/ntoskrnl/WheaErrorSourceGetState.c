/*
 * XREFs of WheaErrorSourceGetState @ 0x140643540
 * Callers:
 *     <none>
 * Callees:
 *     WheapGetErrorSource @ 0x140643F2C (WheapGetErrorSource.c)
 */

__int64 __fastcall WheaErrorSourceGetState(unsigned int a1)
{
  __int64 ErrorSource; // rax
  __int64 result; // rax

  ErrorSource = WheapGetErrorSource(&WheapErrorSourceTable, a1);
  if ( ((ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64)) == 0 )
    return 3LL;
  result = *(unsigned int *)(((ErrorSource + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)ErrorSource >> 64))
                           + 0xC);
  if ( (_DWORD)result == 4 )
    return 3LL;
  return result;
}
