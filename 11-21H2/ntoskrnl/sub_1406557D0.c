/*
 * XREFs of sub_1406557D0 @ 0x1406557D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140655D84 @ 0x140655D84 (sub_140655D84.c)
 */

__int64 __fastcall sub_1406557D0(int a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx

  *((_WORD *)a2 + 6) = 0;
  result = sub_140655D84(a1, (_DWORD)a2, 1, 1, 8);
  if ( (_BYTE)result )
  {
    v4 = *a2;
    qword_140D04DB0 = *a2 + 4228;
    qword_140D04DA8 = v4 + 4100;
  }
  return result;
}
