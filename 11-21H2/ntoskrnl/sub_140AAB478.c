/*
 * XREFs of sub_140AAB478 @ 0x140AAB478
 * Callers:
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 * Callees:
 *     sub_1403A7BD8 @ 0x1403A7BD8 (sub_1403A7BD8.c)
 *     sub_1403A7CAC @ 0x1403A7CAC (sub_1403A7CAC.c)
 *     sub_140AACFEC @ 0x140AACFEC (sub_140AACFEC.c)
 */

LONGLONG sub_140AAB478()
{
  LARGE_INTEGER v0; // rdi
  LONGLONG v1; // rbx
  LONGLONG v2; // rdx
  LONGLONG result; // rax
  unsigned __int16 v4; // cx
  __int16 v5; // r8
  __int16 v6; // ax
  __int16 v7; // ax
  __int64 v8; // rbx
  LARGE_INTEGER v9; // [rsp+50h] [rbp+8h] BYREF

  v9.QuadPart = 0LL;
  v0 = sub_1403A7BD8(&v9);
  v1 = v9.QuadPart / 33;
  v2 = 10 * (v9.QuadPart / 33) / 100;
  result = qword_140C54908;
  if ( v0.QuadPart + v2 >= qword_140C54908 + v9.QuadPart / 33 )
  {
    v4 = word_140C09770;
    v5 = word_140C0C67C;
    if ( word_140C09770 != word_140C0C67C && (qword_140C54908 - v0.QuadPart - v2) / v1 >= 2 )
      v4 = ++word_140C09770;
    v6 = word_140C0C678;
    if ( v4 >= (unsigned __int16)word_140C0C678 )
    {
      if ( v4 > (unsigned __int16)word_140C0C67C )
        goto LABEL_10;
      sub_140AACFEC(1LL, 1LL, 0LL);
      sub_1403A7CAC(qword_140C0E050, (unsigned __int16)word_140C09770, 0, 0LL, 0LL);
      sub_140AACFEC(0LL, 1LL, 0LL);
      v4 = word_140C09770;
      v5 = word_140C0C67C;
      v6 = word_140C0C678;
    }
    if ( v4 == v5 )
    {
      v7 = v6 - word_140C0C674;
LABEL_11:
      word_140C09770 = v7;
      qword_140C54908 = v0.QuadPart;
      v8 = v1 / 2;
      result = *(_QWORD *)&sub_1403A7BD8(0LL) - v0.QuadPart;
      if ( result > v8 )
      {
        result = *(_QWORD *)&sub_1403A7BD8(0LL) - v8;
        qword_140C54908 = result;
      }
      return result;
    }
LABEL_10:
    v7 = v4 + 1;
    goto LABEL_11;
  }
  return result;
}
