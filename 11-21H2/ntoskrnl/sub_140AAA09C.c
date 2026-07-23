/*
 * XREFs of sub_140AAA09C @ 0x140AAA09C
 * Callers:
 *     sub_140AA9C94 @ 0x140AA9C94 (sub_140AA9C94.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140AA9660 @ 0x140AA9660 (sub_140AA9660.c)
 *     sub_140AAA178 @ 0x140AAA178 (sub_140AAA178.c)
 */

char __fastcall sub_140AAA09C(bool *a1)
{
  int v2; // ebx
  char result; // al
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[16]; // [rsp+28h] [rbp-20h] BYREF

  Interval.QuadPart = -100000LL;
  v2 = 0;
  sub_140AAA178("----Press <Enter> for more----");
  if ( sub_140AA9660(v5, 0xAuLL) )
  {
LABEL_7:
    *a1 = v5[0] == 3;
    do
      result = sub_140AA9660(v5, 0xAuLL);
    while ( result );
  }
  else
  {
    while ( 1 )
    {
      if ( (qword_140D01468[6] & 2) == 0 )
      {
        KeDelayExecutionThread(0, 0, &Interval);
        if ( (unsigned int)++v2 > 0x1770 )
          break;
      }
      if ( sub_140AA9660(v5, 0xAuLL) )
        goto LABEL_7;
    }
    result = sub_140AAA178("\r\n No input was detected: auto-scrolling was engaged...\r\n");
    *a1 = 0;
  }
  return result;
}
