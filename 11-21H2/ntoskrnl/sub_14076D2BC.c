/*
 * XREFs of sub_14076D2BC @ 0x14076D2BC
 * Callers:
 *     sub_14076D160 @ 0x14076D160 (sub_14076D160.c)
 * Callees:
 *     sub_1406E84C0 @ 0x1406E84C0 (sub_1406E84C0.c)
 *     sub_140A262D8 @ 0x140A262D8 (sub_140A262D8.c)
 */

__int64 __fastcall sub_14076D2BC(
        int a1,
        const wchar_t *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _BYTE *a7,
        int a8,
        _DWORD *a9)
{
  unsigned int v10; // r10d
  int v11; // r9d
  __int64 v13; // rcx
  bool v14; // cf
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // r9

  v10 = -1073741802;
  *a9 = 0;
  if ( !a4 )
  {
    v11 = *(_DWORD *)(a5 + 16);
    switch ( v11 )
    {
      case 'F':
        v13 = *(_QWORD *)a5 - 0x4ACA104A78C34FC8LL;
        if ( *(_QWORD *)a5 == 0x4ACA104A78C34FC8LL )
          v13 = *(_QWORD *)(a5 + 8) - 0x576E99524D52A49ELL;
        if ( !v13 )
        {
          *a6 = 17;
          *a9 = 1;
          if ( a8 )
          {
            v14 = sub_1406E84C0(a1, a2);
            v10 = 0;
            *a7 = -v14;
          }
          else
          {
            return (unsigned int)-1073741789;
          }
        }
        break;
      case 'S':
        v16 = *(_QWORD *)a5 - 0x4ACA104A78C34FC8LL;
        if ( *(_QWORD *)a5 == 0x4ACA104A78C34FC8LL )
          v16 = *(_QWORD *)(a5 + 8) - 0x576E99524D52A49ELL;
        if ( !v16 )
        {
          v18 = &qword_14000DF20;
          return (unsigned int)sub_140A262D8(a1, (_DWORD)a2, a3, (_DWORD)v18, (__int64)a6, (__int64)a7, a8, (__int64)a9);
        }
        break;
      case '7':
        v17 = *(_QWORD *)a5 - 0x4ACA104A78C34FC8LL;
        if ( *(_QWORD *)a5 == 0x4ACA104A78C34FC8LL )
          v17 = *(_QWORD *)(a5 + 8) - 0x576E99524D52A49ELL;
        if ( !v17 )
        {
          v18 = &qword_14000E0C0;
          return (unsigned int)sub_140A262D8(a1, (_DWORD)a2, a3, (_DWORD)v18, (__int64)a6, (__int64)a7, a8, (__int64)a9);
        }
        break;
      case 'l':
        v15 = *(_QWORD *)a5 - 0x4ACA104A78C34FC8LL;
        if ( *(_QWORD *)a5 == 0x4ACA104A78C34FC8LL )
          v15 = *(_QWORD *)(a5 + 8) - 0x576E99524D52A49ELL;
        if ( !v15 )
        {
          v18 = &qword_14000DFF0;
          return (unsigned int)sub_140A262D8(a1, (_DWORD)a2, a3, (_DWORD)v18, (__int64)a6, (__int64)a7, a8, (__int64)a9);
        }
        break;
    }
  }
  return v10;
}
