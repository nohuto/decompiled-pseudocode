/*
 * XREFs of sub_18001233C @ 0x18001233C
 * Callers:
 *     RmConnectProcessManager @ 0x18001C300 (RmConnectProcessManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001233C(__int64 a1)
{
  __int64 result; // rax

  result = TpAllocWork(a1 + 64, sub_180012470, a1, 0LL);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
