/*
 * XREFs of sub_1402878F0 @ 0x1402878F0
 * Callers:
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_14032A4B0 @ 0x14032A4B0 (sub_14032A4B0.c)
 *     sub_14034BAE0 @ 0x14034BAE0 (sub_14034BAE0.c)
 *     sub_140352D90 @ 0x140352D90 (sub_140352D90.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_14058C2E4 @ 0x14058C2E4 (sub_14058C2E4.c)
 */

unsigned __int64 sub_1402878F0()
{
  unsigned __int64 result; // rax
  void *i; // rbx

  result = 9 * (qword_140C593D8 / 0xAuLL);
  if ( qword_140C592E8 >= result )
  {
    result = sub_14058C2E4();
    if ( (_DWORD)result )
    {
      result = (unsigned __int64)sub_140236710(0LL);
      for ( i = (void *)result; result; i = (void *)result )
      {
        if ( *(_QWORD *)(*(_QWORD *)i + 1696LL) )
          KeSetEvent((PRKEVENT)(*(_QWORD *)i + 1400LL), 0, 0);
        result = (unsigned __int64)sub_140236710(i);
      }
    }
  }
  return result;
}
