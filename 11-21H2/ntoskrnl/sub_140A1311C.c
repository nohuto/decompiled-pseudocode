/*
 * XREFs of sub_140A1311C @ 0x140A1311C
 * Callers:
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140792D40 @ 0x140792D40 (sub_140792D40.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 */

__int64 __fastcall sub_140A1311C(__int64 a1, unsigned int a2, unsigned int a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v7; // edi
  unsigned int v9; // ebx
  __int16 v10; // r15
  unsigned int v12; // eax
  const wchar_t *v13; // rax
  unsigned int v14; // eax

  v7 = a3;
  v9 = 0;
  v10 = sub_14079499C(a1, a3);
  if ( v10 )
  {
    while ( 1 )
    {
      v14 = sub_140792D40(a1, a2, v7);
      v7 = v14;
      if ( !v14 )
        break;
      if ( (unsigned __int16)sub_14079499C(a1, v14) == v10 )
      {
        v12 = sub_140792CCC(a1, v7, a4);
        if ( v12 )
        {
          v13 = (const wchar_t *)sub_140842A24(a1, v12);
          if ( !v13 )
          {
            sub_1406E0C3C(1LL, (__int64)"SdbpFindNextNamedTag");
            return v9;
          }
          if ( !wcsicmp(Str1, v13) )
            return v7;
        }
      }
    }
    return v9;
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpFindNextNamedTag");
    return 0LL;
  }
}
