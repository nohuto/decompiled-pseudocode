/*
 * XREFs of XmBtOp @ 0x1403724D0
 * Callers:
 *     XmEmulateStream @ 0x1403BE4E0 (XmEmulateStream.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XmBtOp(_DWORD *a1)
{
  __int64 result; // rax

  result = (a1[4] ^ (a1[26] >> a1[27])) & 1;
  a1[4] ^= result;
  return result;
}
