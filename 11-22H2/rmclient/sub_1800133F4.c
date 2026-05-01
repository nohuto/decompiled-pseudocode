/*
 * XREFs of sub_1800133F4 @ 0x1800133F4
 * Callers:
 *     RmConnectProcessManager @ 0x18001C300 (RmConnectProcessManager.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800133F4(__int64 a1)
{
  __int64 result; // rax

  result = RtlSubscribeWnfStateChangeNotification(a1 + 72, 0x41C6033FA3BC0875LL, 0LL, sub_180012BD0, a1, 0LL, 0, 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
