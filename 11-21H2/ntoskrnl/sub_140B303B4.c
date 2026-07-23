/*
 * XREFs of sub_140B303B4 @ 0x140B303B4
 * Callers:
 *     sub_140AFB264 @ 0x140AFB264 (sub_140AFB264.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 sub_140B303B4()
{
  __int64 result; // rax
  void *v1; // [rsp+68h] [rbp-8h]

  LOWORD(v1) = 0;
  result = sub_14042A5E0(11LL, 64LL);
  if ( (int)result >= 0 )
  {
    word_140D05000 = 0;
    qword_140C2B110 = 0LL;
    off_140C02518[0] = 0LL;
    off_140C02510 = v1;
    qword_140C2B100 = 0LL;
    qword_140C2B108 = 0LL;
    result = (__int64)sub_14056DB50;
    qword_140C54EC0 = (__int64)sub_14056DB50;
  }
  return result;
}
