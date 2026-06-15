/*
 * XREFs of ?AERTLockMemory@@YAJPEAX_K@Z @ 0x180164184
 * Callers:
 *     ?GetMemory@CCrossProcessClientMemory@@UEAAJPEAIPEAPEAX@Z @ 0x18015C0D0 (-GetMemory@CCrossProcessClientMemory@@UEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ?IncreaseProcessWorkingSet@@YAJ_K@Z @ 0x1801641F4 (-IncreaseProcessWorkingSet@@YAJ_K@Z.c)
 */

signed int __fastcall AERTLockMemory(void *lpAddress, SIZE_T a2)
{
  signed int result; // eax

  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = IncreaseProcessWorkingSet(a2);
  if ( result < 0 )
    return result;
  if ( VirtualLock(lpAddress, a2) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
