/*
 * XREFs of sub_140527CD0 @ 0x140527CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140510C60 @ 0x140510C60 (sub_140510C60.c)
 */

__int64 __fastcall sub_140527CD0(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = sub_140510C60(a1);
  *a2 = result;
  return result;
}
