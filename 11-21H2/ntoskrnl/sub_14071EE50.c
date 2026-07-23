/*
 * XREFs of sub_14071EE50 @ 0x14071EE50
 * Callers:
 *     sub_1406C1694 @ 0x1406C1694 (sub_1406C1694.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14071EE50(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 1LL, 17LL) != 17 )
    return 0;
  *(_QWORD *)(a1 + 56) = KeGetCurrentThread();
  return v1;
}
