/*
 * XREFs of sub_1406C3F0C @ 0x1406C3F0C
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 *     sub_140860DAC @ 0x140860DAC (sub_140860DAC.c)
 * Callees:
 *     sub_1406C3FB4 @ 0x1406C3FB4 (sub_1406C3FB4.c)
 *     sub_140968064 @ 0x140968064 (sub_140968064.c)
 */

_QWORD *__fastcall sub_1406C3F0C(__int64 a1, __int64 a2)
{
  void *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v7; // rax

  v4 = (void *)sub_1406C3FB4(2147352576LL, 2147356671LL, 1LL);
  if ( !v4 )
    return 0LL;
  if ( !qword_140C50678 )
    goto LABEL_5;
  v5 = (_QWORD *)sub_1406C3FB4(qword_140C50678, qword_140C50678 + 4095, 1LL);
  if ( v5 )
  {
    *v5 = v4;
    v4 = v5;
LABEL_5:
    if ( !a2 )
      return v4;
    v7 = (_QWORD *)sub_1406C3FB4(*(_QWORD *)(a1 + 1496), a2 - 1, 0LL);
    if ( v7 )
    {
      *v7 = v4;
      return v7;
    }
  }
  sub_140968064(v4);
  return 0LL;
}
