/*
 * XREFs of sub_1402E8E70 @ 0x1402E8E70
 * Callers:
 *     sub_1402E8BCC @ 0x1402E8BCC (sub_1402E8BCC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E8E70(__int64 a1, ULONG_PTR a2, int a3, int a4, unsigned __int64 a5)
{
  int v5; // ecx
  int v7; // edi
  __int64 v8; // r8
  unsigned __int64 v9; // rdx

  v5 = 0;
  if ( a2 == 0x3FFFFFFFFFLL )
    return 0x3FFFFFFFFFLL;
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = v5;
      v8 = 48 * a2 - 0x220000000000LL;
      if ( a4 )
      {
        a3 = 0;
      }
      else if ( a2 < qword_140C52CE0 || a2 >= qword_140C52CE0 + 2048 )
      {
        a3 = (*(unsigned __int8 *)(48 * a2 - 0x21FFFFFFFFDDLL) >> 2) & 2;
      }
      else
      {
        if ( a3 != 2 )
        {
          v9 = *(_QWORD *)(v8 + 16);
          if ( qword_140C50780 && (v9 & 0x10) == 0 )
            v9 &= ~qword_140C50780;
          a2 = (v9 >> 12) & 0xFFFFFFFFFFLL;
          if ( a2 < qword_140C52CE0 || a2 >= qword_140C52CE0 + 2048 )
            v8 = 0LL;
        }
        a3 = 1;
      }
      if ( v8 )
      {
        if ( a4 )
        {
          if ( a4 == 1 )
            a2 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFFLL;
          else
            a2 = (*(_QWORD *)(v8 + 24) >> 40) & 0x7FFFFLL | ((unsigned __int64)(*(_DWORD *)(v8 + 36) & 0x1FFFFF) << 19);
        }
        else
        {
          a2 = *(_QWORD *)v8 & 0xFFFFFFFFFFLL;
        }
      }
      if ( (unsigned int)++v5 >= a5 )
        break;
      if ( a2 == 0x3FFFFFFFFFLL )
        return a2;
    }
    if ( a4 || a2 == 0x3FFFFFFFFFLL || a2 < qword_140C52CE0 || a2 >= qword_140C52CE0 + 2048 )
      break;
    v5 = v7;
  }
  return a2;
}
