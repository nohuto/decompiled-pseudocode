/*
 * XREFs of sub_140758BF0 @ 0x140758BF0
 * Callers:
 *     sub_1407589DC @ 0x1407589DC (sub_1407589DC.c)
 * Callees:
 *     sub_1402D6F40 @ 0x1402D6F40 (sub_1402D6F40.c)
 */

bool __fastcall sub_140758BF0(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbx
  bool result; // al
  _DWORD *v7; // rax

  v5 = a4 - a2;
  result = 0;
  if ( a4 >= a2 && a4 + a5 >= a4 && a4 + a5 <= a2 + a3 )
  {
    if ( a2 <= 0x7FFFFFFEFFFFLL )
      return 1;
    v7 = (_DWORD *)sub_1402D6F40(a1, a2, v5);
    if ( v7 )
    {
      if ( v5 + a5 <= (unsigned int)(v7[3] + v7[4]) && (v7[9] & 0x2000000) == 0 )
        return 1;
    }
  }
  return result;
}
