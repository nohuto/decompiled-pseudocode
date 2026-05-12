/*
 * XREFs of sub_1C00A3774 @ 0x1C00A3774
 * Callers:
 *     sub_1C0020598 @ 0x1C0020598 (sub_1C0020598.c)
 *     sub_1C00207F8 @ 0x1C00207F8 (sub_1C00207F8.c)
 *     sub_1C002095C @ 0x1C002095C (sub_1C002095C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C00A3774(_WORD *a1, char a2, unsigned int a3)
{
  bool v3; // zf
  __int64 v4; // rdx
  unsigned int v5; // r10d
  _WORD *v6; // r9
  int v7; // r8d
  __int64 result; // rax
  int v9; // r9d

  v3 = a2 == 0;
  LODWORD(v4) = 0;
  if ( v3 )
  {
    if ( a3 )
    {
      do
      {
        v9 = (unsigned __int16)*a1;
        if ( !(_WORD)v9 )
          break;
        result = (unsigned int)(v9 - 33);
        if ( (unsigned __int16)(v9 - 33) > 0x5Eu || (_WORD)v9 == 44 )
          *a1 = 95;
        LODWORD(v4) = v4 + 1;
        ++a1;
      }
      while ( (unsigned int)v4 < a3 );
    }
  }
  else
  {
    v5 = a3 - 1;
    if ( a3 != 1 )
    {
      v6 = a1;
      do
      {
        v7 = (unsigned __int16)*v6;
        v4 = (unsigned int)(v4 + 1);
        if ( (_WORD)v7 )
        {
          result = (unsigned int)(v7 - 33);
          if ( (unsigned __int16)(v7 - 33) > 0x5Eu || (_WORD)v7 == 44 )
            *v6 = 95;
        }
        else if ( !a1[v4] )
        {
          return result;
        }
        ++v6;
      }
      while ( (unsigned int)v4 < v5 );
    }
  }
  return result;
}
