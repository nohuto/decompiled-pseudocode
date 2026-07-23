/*
 * XREFs of sub_1403B3E84 @ 0x1403B3E84
 * Callers:
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 * Callees:
 *     sub_1403B3F5C @ 0x1403B3F5C (sub_1403B3F5C.c)
 */

char sub_1403B3E84()
{
  char result; // al
  __int64 v1; // rdx

  result = byte_140C203A1;
  v1 = qword_140C20498;
  if ( (unsigned int)(10000 * HIDWORD(off_140C03040[534 * dword_140C232CC + 7])) > (unsigned __int64)qword_140C20498 )
    v1 = (unsigned int)(10000 * HIDWORD(off_140C03040[534 * dword_140C232CC + 7]));
  if ( !byte_140C203A1 )
    goto LABEL_7;
  if ( v1 != qword_140C204C0 )
  {
    _InterlockedExchange64(&qword_140C204C8, 0LL);
    result = 0;
    byte_140C203A1 = 0;
  }
  if ( !result )
  {
LABEL_7:
    qword_140C204C0 = v1;
    sub_1403B3F5C(0LL);
    result = _InterlockedExchange64(&qword_140C204C8, 1LL);
    byte_140C203A1 = 1;
  }
  return result;
}
