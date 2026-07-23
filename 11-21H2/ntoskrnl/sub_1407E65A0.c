/*
 * XREFs of sub_1407E65A0 @ 0x1407E65A0
 * Callers:
 *     sub_140559124 @ 0x140559124 (sub_140559124.c)
 *     sub_1406CF67C @ 0x1406CF67C (sub_1406CF67C.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1403689A4 @ 0x1403689A4 (sub_1403689A4.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406A4C58 @ 0x1406A4C58 (sub_1406A4C58.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 */

__int64 __fastcall sub_1407E65A0(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 i; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD v10[18]; // [rsp+20h] [rbp-98h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  memset(v10, 0, 0x88uLL);
  v10[11] = a1;
  v10[12] = a2;
  LOBYTE(v10[16]) = 0;
  KeInitializeEvent((PRKEVENT)&v10[13], NotificationEvent, 0);
  for ( i = 0LL; ; i = v8 )
  {
    v7 = sub_1407E7750(v5, i);
    v8 = v7;
    if ( !v7 )
      break;
    if ( (unsigned int)sub_1403689A4(v7, a1, a2) )
      v4 |= sub_1406A4C58(v8, (__int64)v10);
  }
  return v4;
}
