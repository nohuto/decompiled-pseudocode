/*
 * XREFs of sub_140A69780 @ 0x140A69780
 * Callers:
 *     <none>
 * Callees:
 *     sub_14057036C @ 0x14057036C (sub_14057036C.c)
 */

__int64 __fastcall sub_140A69780(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  _DWORD *v3; // r8
  int v4; // r9d
  int v5; // eax

  if ( a1 && a2 )
  {
    if ( sub_14057036C() )
    {
      *v3 = 1;
      v5 = MEMORY[0xFFFFF78000000624];
    }
    else
    {
      if ( (_DWORD)dword_140D06964 == v4 )
      {
        *v3 = v4;
        *v2 = v4;
        return 0LL;
      }
      v5 = dword_140D06A10;
      *v3 = 2;
    }
    *v2 = v5;
    return 0LL;
  }
  return 3221225485LL;
}
