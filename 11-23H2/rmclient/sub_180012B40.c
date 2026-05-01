/*
 * XREFs of sub_180012B40 @ 0x180012B40
 * Callers:
 *     RmConnectProcessManager @ 0x18001C300 (RmConnectProcessManager.c)
 * Callees:
 *     memset @ 0x180016A5E (memset.c)
 *     sub_18001F1F8 @ 0x18001F1F8 (sub_18001F1F8.c)
 */

_QWORD *__fastcall sub_180012B40(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  memset(a2, 0, 0x70uLL);
  RtlInitializeSRWLock(a2 + 2);
  RtlInitializeConditionVariable(a2 + 4);
  a2[3] = sub_180012A10;
  sub_18001F1F8(a2 + 6);
  result = a2 + 10;
  a2[13] = a1;
  a2[11] = a2 + 10;
  a2[10] = a2 + 10;
  return result;
}
