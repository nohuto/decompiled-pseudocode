/*
 * XREFs of sub_1800153DC @ 0x1800153DC
 * Callers:
 *     sub_180008700 @ 0x180008700 (sub_180008700.c)
 *     CrmActivityWindowClosedReasonUnsubscribe_0 @ 0x1800087B8 (CrmActivityWindowClosedReasonUnsubscribe_0.c)
 *     CrmActivityStart_0 @ 0x180008A20 (CrmActivityStart_0.c)
 *     CrmActivityStop_0 @ 0x1800090F0 (CrmActivityStop_0.c)
 *     CrmActivityQueryWindowClosedReasons_0 @ 0x1800094EC (CrmActivityQueryWindowClosedReasons_0.c)
 *     CrmActivityWindowClosedReasonSubscribe_0 @ 0x180009A5C (CrmActivityWindowClosedReasonSubscribe_0.c)
 *     sub_180015204 @ 0x180015204 (sub_180015204.c)
 * Callees:
 *     sub_180015960 @ 0x180015960 (sub_180015960.c)
 */

__int64 __fastcall sub_1800153DC(__int64 a1)
{
  char v2; // al
  unsigned int v3; // edx

  v2 = sub_180015960(&unk_180032C98);
  v3 = 0;
  if ( v2 )
    LOBYTE(v3) = *(_QWORD *)(a1 + 16) == 0LL;
  else
    return 1;
  return v3;
}
