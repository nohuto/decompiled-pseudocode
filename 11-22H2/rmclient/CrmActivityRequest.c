/*
 * XREFs of CrmActivityRequest @ 0x180009810
 * Callers:
 *     sub_1800161E4 @ 0x1800161E4 (sub_1800161E4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmActivityRequest(__int64 a1)
{
  __int64 result; // rax

  result = RtlSubscribeWnfStateChangeNotification(a1 + 48, *(_QWORD *)(a1 + 40), 0LL, sub_180009340, a1, 0LL, 0, 0);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
