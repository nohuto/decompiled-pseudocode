/*
 * XREFs of xxxClearWakeMask @ 0x1C01D9F44
 * Callers:
 *     NtUserClearWakeMask @ 0x1C01F1E10 (NtUserClearWakeMask.c)
 * Callees:
 *     xxxUpdateInputHangInfo @ 0x1C00574C0 (xxxUpdateInputHangInfo.c)
 */

__int64 xxxClearWakeMask()
{
  __int64 result; // rax

  _InterlockedExchange(
    (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  if ( !*(_DWORD *)(gptiCurrent + 1200LL) )
    xxxUpdateInputHangInfo(0LL, 1);
  result = 1LL;
  _InterlockedExchange((volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 16LL), 0);
  *(_DWORD *)(gptiCurrent + 1256LL) &= ~0x400u;
  return result;
}
