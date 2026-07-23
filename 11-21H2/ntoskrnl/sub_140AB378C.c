/*
 * XREFs of sub_140AB378C @ 0x140AB378C
 * Callers:
 *     sub_140AB23B0 @ 0x140AB23B0 (sub_140AB23B0.c)
 *     sub_140AB28B8 @ 0x140AB28B8 (sub_140AB28B8.c)
 *     sub_140AB2FBC @ 0x140AB2FBC (sub_140AB2FBC.c)
 * Callees:
 *     sub_140AB32D4 @ 0x140AB32D4 (sub_140AB32D4.c)
 */

char __fastcall sub_140AB378C(__int64 a1, __int64 a2, unsigned int a3, char a4, __int64 a5)
{
  _BYTE *v5; // r9
  __int64 v6; // r10
  char result; // al

  v5 = (_BYTE *)sub_140AB32D4(a1, a2, a3, a4, 1);
  result = *(_BYTE *)(v6 + 1);
  switch ( result )
  {
    case 8:
      result = a5;
      *v5 = a5;
      break;
    case 16:
      result = a5;
      *(_WORD *)v5 = a5;
      break;
    case 32:
      result = a5;
      *(_QWORD *)v5 = (unsigned int)a5;
      break;
    default:
      *(_QWORD *)v5 = a5;
      break;
  }
  return result;
}
