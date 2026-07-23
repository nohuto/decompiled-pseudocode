/*
 * XREFs of sub_140269180 @ 0x140269180
 * Callers:
 *     sub_1406F2420 @ 0x1406F2420 (sub_1406F2420.c)
 * Callees:
 *     sub_1402691C4 @ 0x1402691C4 (sub_1402691C4.c)
 *     sub_14026920C @ 0x14026920C (sub_14026920C.c)
 */

char *__fastcall sub_140269180(__int64 a1, __int64 a2, __int64 a3)
{
  char *result; // rax

  if ( (_DWORD)a1 == 2 )
  {
    result = (char *)sub_14026920C(a1, a2, a3);
    if ( !result )
      return result;
  }
  else
  {
    result = (char *)&unk_140C53580 + 320 * (int)sub_1402691C4();
  }
  return (char *)*((_QWORD *)result + 16);
}
