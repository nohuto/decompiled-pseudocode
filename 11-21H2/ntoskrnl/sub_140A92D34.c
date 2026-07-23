/*
 * XREFs of sub_140A92D34 @ 0x140A92D34
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
 *     DbgPrompt @ 0x1405E4170 (DbgPrompt.c)
 *     sub_1405FDF9C @ 0x1405FDF9C (sub_1405FDF9C.c)
 *     sub_140A8C924 @ 0x140A8C924 (sub_140A8C924.c)
 *     sub_140A92C94 @ 0x140A92C94 (sub_140A92C94.c)
 */

__int64 __fastcall sub_140A92D34(int a1, ULONG_PTR a2, ULONG_PTR a3, __int64 a4)
{
  ULONG_PTR v4; // rsi
  __int64 result; // rax
  _DWORD *i; // r10

  v4 = a1;
  sub_1405FDF9C("************************************************************\n\n");
  result = 0LL;
  for ( i = &unk_140D4F080; *i != (_DWORD)v4; i += 4 )
  {
    result = (unsigned int)(result + 1);
    if ( (unsigned int)result >= 0x3F )
      return result;
  }
  result = *((unsigned int *)&unk_140D4F080 + 4 * result + 1);
  if ( (result & 1) == 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    {
      sub_140A92C94(201LL, v4, a2, a3, a4);
      __debugbreak();
    }
    result = (unsigned int)dword_140C29FC0;
    if ( (dword_140C29FC0 & 0x10) != 0 )
      return sub_140A8C924(0xC9u, v4, a2, a3, a4);
  }
  return result;
}
