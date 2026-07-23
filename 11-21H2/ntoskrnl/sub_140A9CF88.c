/*
 * XREFs of sub_140A9CF88 @ 0x140A9CF88
 * Callers:
 *     sub_140A9B158 @ 0x140A9B158 (sub_140A9B158.c)
 *     sub_140A9D0D0 @ 0x140A9D0D0 (sub_140A9D0D0.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14024E1A0 (KeRemoveQueueDpcEx.c)
 *     sub_1402E2D20 @ 0x1402E2D20 (sub_1402E2D20.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 */

__int64 __fastcall sub_140A9CF88(char a1)
{
  __int64 result; // rax

  if ( !dword_140C1ACBC )
  {
    _InterlockedExchange(&dword_140D575E8, 1);
    KeCancelTimer(&stru_140D58D80);
    KeRemoveQueueDpcEx((__int64)&stru_140D58D40, 1);
    result = (unsigned int)_InterlockedExchange(&dword_140D575E8, 0);
    if ( (a1 & 0x10) != 0 )
    {
      result = (unsigned int)dword_140C1B25C;
      if ( dword_140C1B25C )
        return sub_1402E2D20((unsigned __int64)&stru_140D58D80, -10000000LL, 0, 0, (__int64)&stru_140D58D40);
    }
  }
  return result;
}
