/*
 * XREFs of sub_140AACEA0 @ 0x140AACEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403A7BD8 @ 0x1403A7BD8 (sub_1403A7BD8.c)
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A7CAC @ 0x1403A7CAC (sub_1403A7CAC.c)
 *     sub_140AACFEC @ 0x140AACFEC (sub_140AACFEC.c)
 */

void __fastcall sub_140AACEA0(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  LARGE_INTEGER v4; // rax
  unsigned __int16 v5; // r9
  LARGE_INTEGER v6; // rbx
  __int16 v7; // r10
  __int16 v8; // ax
  __int16 v9; // ax
  LARGE_INTEGER v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v10[0].QuadPart = 0LL;
  sub_1403A7C40();
  if ( byte_140CE1AE0 )
  {
    v4 = sub_1403A7BD8(v10);
    v5 = word_140C09770;
    v6 = v4;
    v7 = word_140C0C67C;
    if ( word_140C09770 != word_140C0C67C
      && (qword_140C54908 + 10 * (v10[0].QuadPart / 33) / 100 - v4.QuadPart) / (v10[0].QuadPart / 33) >= 2 )
    {
      v5 = ++word_140C09770;
    }
    v8 = word_140C0C678;
    if ( v5 >= (unsigned __int16)word_140C0C678 )
    {
      if ( v5 > (unsigned __int16)word_140C0C67C )
        goto LABEL_9;
      sub_140AACFEC(1LL, 0LL, v10);
      sub_1403A7CAC(qword_140C0E050, (unsigned __int16)word_140C09770, 0, 0LL, 0LL);
      sub_140AACFEC(0LL, 0LL, v10);
      v5 = word_140C09770;
      v7 = word_140C0C67C;
      v8 = word_140C0C678;
    }
    if ( v5 == v7 )
    {
      v9 = v8 - word_140C0C674;
      goto LABEL_10;
    }
LABEL_9:
    v9 = v5 + 1;
LABEL_10:
    word_140C09770 = v9;
    qword_140C54908 = v6.QuadPart;
  }
  sub_1403A7BF0();
}
