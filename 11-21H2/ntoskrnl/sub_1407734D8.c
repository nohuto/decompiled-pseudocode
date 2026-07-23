/*
 * XREFs of sub_1407734D8 @ 0x1407734D8
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 *     sub_1407741A4 @ 0x1407741A4 (sub_1407741A4.c)
 *     sub_140943248 @ 0x140943248 (sub_140943248.c)
 *     sub_14095B69C @ 0x14095B69C (sub_14095B69C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1407734D8(_WORD *a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  int v8; // ebx
  unsigned __int64 v9; // r9
  __int16 *v10; // rcx
  _WORD *i; // rdx
  __int16 v12; // ax
  _WORD *v13; // rcx

  if ( a2 > 2 && *a1 == 64 )
  {
    v8 = 0;
    v9 = (unsigned __int64)&a1[(unsigned __int64)a2 >> 1];
    v10 = a1 + 1;
    if ( (unsigned __int64)(a1 + 2) < v9 )
    {
      for ( i = a1 + 2; (unsigned __int64)i < v9; ++i )
      {
        v12 = *v10;
        if ( !*v10 )
          break;
        if ( v12 == 44 )
        {
          if ( ((*i - 35) & 0xFFF5) != 0 || *i == 43 )
            return 0LL;
          v8 = 1;
        }
        else if ( v12 == 59 )
        {
          if ( !v8 )
            return 0LL;
          v13 = v10 + 1;
          result = 1LL;
          *a3 = v13;
          *a4 = a2 + (_DWORD)a1 - (_DWORD)v13;
          return result;
        }
        ++v10;
      }
    }
  }
  return 0LL;
}
