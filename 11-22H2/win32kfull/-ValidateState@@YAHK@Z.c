/*
 * XREFs of ?ValidateState@@YAHK@Z @ 0x1C0223BC8
 * Callers:
 *     ClearWindowState @ 0x1C0223BF8 (ClearWindowState.c)
 *     SetWindowState @ 0x1C0223C50 (SetWindowState.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & byte_1C0321730[HIBYTE(a1)]) == (_BYTE)a1;
}
