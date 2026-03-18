/*
 * XREFs of CmpFlushNotifiesPostCallback @ 0x140A1FCA0
 * Callers:
 *     <none>
 * Callees:
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14071087C (CmpFlushNotifiesOnKeyBodyList.c)
 */

__int64 __fastcall CmpFlushNotifiesPostCallback(__int64 a1, __int64 a2, __int64 a3)
{
  CmpFlushNotifiesOnKeyBodyList(a1, *(_DWORD *)a3, a2, *(_BYTE *)(a3 + 5));
  return 0LL;
}
