/*
 * XREFs of sub_140A92CE0 @ 0x140A92CE0
 * Callers:
 *     sub_1405FFB44 @ 0x1405FFB44 (sub_1405FFB44.c)
 *     sub_1405FFBC8 @ 0x1405FFBC8 (sub_1405FFBC8.c)
 *     sub_1405FFC5C @ 0x1405FFC5C (sub_1405FFC5C.c)
 *     sub_1405FFD00 @ 0x1405FFD00 (sub_1405FFD00.c)
 *     sub_140A82730 @ 0x140A82730 (sub_140A82730.c)
 *     sub_140A82A00 @ 0x140A82A00 (sub_140A82A00.c)
 *     sub_140A91824 @ 0x140A91824 (sub_140A91824.c)
 *     sub_140A919A8 @ 0x140A919A8 (sub_140A919A8.c)
 *     sub_140A92B74 @ 0x140A92B74 (sub_140A92B74.c)
 *     sub_140A92C0C @ 0x140A92C0C (sub_140A92C0C.c)
 *     sub_140AA0A20 @ 0x140AA0A20 (sub_140AA0A20.c)
 *     sub_140AA0BD0 @ 0x140AA0BD0 (sub_140AA0BD0.c)
 *     sub_140AA0D20 @ 0x140AA0D20 (sub_140AA0D20.c)
 * Callees:
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 */

__int64 __fastcall sub_140A92CE0(int a1)
{
  __int64 result; // rax
  _DWORD *i; // rdx

  sub_1405FDF9C("************************************************************\nDriver Verifier detected violation:\n\n");
  LODWORD(result) = 0;
  for ( i = &unk_140D4F080; *i != a1; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  return sub_1405FDF9C("%s\n\n", *((const char **)&unk_140D4F080 + 2 * (unsigned int)result + 1));
}
