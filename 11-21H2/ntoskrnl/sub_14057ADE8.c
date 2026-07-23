/*
 * XREFs of sub_14057ADE8 @ 0x14057ADE8
 * Callers:
 *     sub_140632EEC @ 0x140632EEC (sub_140632EEC.c)
 *     sub_1409630B0 @ 0x1409630B0 (sub_1409630B0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14057ADE8(char a1)
{
  _BOOL8 result; // rax
  __int64 v2; // rax

  result = 1;
  if ( (dword_140D069BC & 2) == 0 )
  {
    if ( (dword_140D069BC & 1) == 0 )
      return 0;
    if ( !a1 )
      return 0;
    v2 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 68) + 992LL);
    if ( (v2 & 1) != 0 || v2 )
      return 0;
  }
  return result;
}
