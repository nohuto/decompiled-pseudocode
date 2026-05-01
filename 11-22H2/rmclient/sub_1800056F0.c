/*
 * XREFs of sub_1800056F0 @ 0x1800056F0
 * Callers:
 *     sub_180003000 @ 0x180003000 (sub_180003000.c)
 *     sub_1800034B0 @ 0x1800034B0 (sub_1800034B0.c)
 *     sub_180003584 @ 0x180003584 (sub_180003584.c)
 *     sub_180005090 @ 0x180005090 (sub_180005090.c)
 *     sub_180005140 @ 0x180005140 (sub_180005140.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800056F0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // r14
  int Pointer; // ebx
  int v6; // eax
  int v7; // [rsp+40h] [rbp-38h]

  v2 = a1 + 7;
  v3 = a1 + 7;
  if ( a1[7] )
    return 0;
  Pointer = (unsigned int)NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180020770, 0, 0LL, a1[2], a1 + 5, a1 + 6).Pointer;
  if ( Pointer >= 0 )
  {
    v6 = RtlSubscribeWnfStateChangeNotification(v3, a1[5], 0LL, sub_180009780, a1, 0LL, 0, 0, Pointer);
    if ( v6 >= 0 )
    {
      v6 = RtlSubscribeWnfStateChangeNotification(a1 + 8, a1[6], 0LL, sub_180009640, a1, 0LL, 0, 0, v7);
      if ( v6 >= 0 )
        return 0;
    }
    Pointer = v6 | 0x10000000;
  }
  if ( *v2 )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *v2 = 0LL;
  }
  if ( a1[8] )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    a1[8] = 0LL;
  }
  *(_OWORD *)(a1 + 5) = 0LL;
  return (unsigned int)Pointer;
}
