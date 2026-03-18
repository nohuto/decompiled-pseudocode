/*
 * XREFs of _SetWaitForQueueAttach @ 0x1C01D9F04
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C00A52B0 (NtUserMsgWaitForMultipleObjectsEx.c)
 *     NtUserSetWaitForQueueAttach @ 0x1C01FE520 (NtUserSetWaitForQueueAttach.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetWaitForQueueAttach(int a1)
{
  __int64 result; // rax

  if ( (a1 != 0) != a1 )
    return 0LL;
  result = 1LL;
  *(_DWORD *)(gptiCurrent + 1256LL) ^= (*(_DWORD *)(gptiCurrent + 1256LL) ^ (a1 << 10)) & 0x400;
  return result;
}
