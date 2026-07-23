/*
 * XREFs of sub_140933DDC @ 0x140933DDC
 * Callers:
 *     sub_140937010 @ 0x140937010 (sub_140937010.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1403689A4 @ 0x1403689A4 (sub_1403689A4.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A4C58 @ 0x1406A4C58 (sub_1406A4C58.c)
 */

__int64 __fastcall sub_140933DDC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _QWORD v5[19]; // [rsp+20h] [rbp-98h] BYREF

  result = sub_1403689A4(a1, 0LL, a2);
  if ( (_DWORD)result )
  {
    memset(v5, 0, 0x88uLL);
    v5[12] = a2;
    LOBYTE(v5[16]) = 1;
    KeInitializeEvent((PRKEVENT)&v5[13], NotificationEvent, 0);
    return sub_1406A4C58(a1, (__int64)v5);
  }
  return result;
}
