/*
 * XREFs of sub_1409EEF94 @ 0x1409EEF94
 * Callers:
 *     sub_1409F2984 @ 0x1409F2984 (sub_1409F2984.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140460CEC @ 0x140460CEC (sub_140460CEC.c)
 *     sub_1406360C0 @ 0x1406360C0 (sub_1406360C0.c)
 */

NTSTATUS __fastcall sub_1409EEF94(__int64 a1)
{
  _BYTE v3[80]; // [rsp+30h] [rbp-58h] BYREF

  sub_1406360C0(a1);
  memset(v3, 0, sizeof(v3));
  *(_QWORD *)v3 = 6941LL;
  *(_QWORD *)&v3[16] = 4054171642LL;
  KeInitializeEvent((PRKEVENT)&v3[48], NotificationEvent, 0);
  sub_140460CEC(a1, (_SLIST_ENTRY *)v3);
  return KeWaitForSingleObject(&v3[48], Executive, 0, 0, 0LL);
}
