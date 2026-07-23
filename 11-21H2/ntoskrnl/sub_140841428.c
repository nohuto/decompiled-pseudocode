/*
 * XREFs of sub_140841428 @ 0x140841428
 * Callers:
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 * Callees:
 *     _wcsicmp @ 0x1403E1490 (_wcsicmp.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140791910 @ 0x140791910 (sub_140791910.c)
 *     sub_140792CCC @ 0x140792CCC (sub_140792CCC.c)
 *     sub_140792D40 @ 0x140792D40 (sub_140792D40.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 *     sub_140842A24 @ 0x140842A24 (sub_140842A24.c)
 */

__int64 __fastcall sub_140841428(__int64 a1, __int64 a2, __int16 a3, __int16 a4, wchar_t *Str1)
{
  unsigned int v5; // ebx
  unsigned int v8; // ebp
  unsigned int i; // eax
  unsigned int v11; // edi
  unsigned int v12; // eax
  const wchar_t *v13; // rax

  v5 = 0;
  v8 = a2;
  for ( i = sub_140791910(a1, a2); ; i = sub_140792D40(a1, v8, v11) )
  {
    v11 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)sub_14079499C(a1, i) == a3 )
    {
      v12 = sub_140792CCC(a1, v11, a4);
      if ( v12 )
      {
        v13 = (const wchar_t *)sub_140842A24(a1, v12);
        if ( !v13 )
        {
          sub_1406E0C3C(1LL, (__int64)"SdbFindFirstNamedTag");
          return v5;
        }
        if ( !wcsicmp(Str1, v13) )
          return v11;
      }
    }
  }
  return v5;
}
