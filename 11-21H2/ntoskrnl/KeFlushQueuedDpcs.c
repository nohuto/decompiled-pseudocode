/*
 * XREFs of KeFlushQueuedDpcs @ 0x1402D96F0
 * Callers:
 *     sub_1402334D8 @ 0x1402334D8 (sub_1402334D8.c)
 *     MmPageEntireDriver @ 0x140761010 (MmPageEntireDriver.c)
 *     sub_14085D640 @ 0x14085D640 (sub_14085D640.c)
 *     sub_1409F80D4 @ 0x1409F80D4 (sub_1409F80D4.c)
 *     sub_140A01F78 @ 0x140A01F78 (sub_140A01F78.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402D9830 @ 0x1402D9830 (sub_1402D9830.c)
 *     sub_14035BB4C @ 0x14035BB4C (sub_14035BB4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void KeFlushQueuedDpcs(void)
{
  __int64 v0; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v1[3]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v2[34]; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD v3[68]; // [rsp+158h] [rbp+50h] BYREF

  LODWORD(v0) = 0;
  LODWORD(v2[0]) = 2097153;
  memset((char *)v2 + 4, 0, 0x104uLL);
  v3[0] = 2097153;
  memset(&v3[1], 0, 0x104uLL);
  sub_1402D9830(v2, v3);
  v1[1] = (unsigned __int16 *)v2[1];
  v1[0] = (unsigned __int16 *)v2;
  memset(&v1[2], 0, sizeof(unsigned __int16 *));
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(qword_140D088C0[(unsigned int)v0] + 13244) )
      KeAddProcessorAffinityEx((unsigned __int16 *)v3, v0);
  }
  sub_14035BB4C(v3, sub_140251300, 0LL, 2LL);
}
