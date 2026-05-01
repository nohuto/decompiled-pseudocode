/*
 * XREFs of CrmActivityRequest @ 0x180009100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmActivityRequest(__int64 a1)
{
  __int64 result; // rax
  int v2; // [rsp+40h] [rbp-8h]

  result = RtlSubscribeWnfStateChangeNotification(
             a1 + 48,
             *(_QWORD *)(a1 + 40),
             0LL,
             CrmpActivityWNFCallback,
             a1,
             0LL,
             0,
             0,
             v2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
