/*
 * XREFs of sub_14024B428 @ 0x14024B428
 * Callers:
 *     sub_140277D10 @ 0x140277D10 (sub_140277D10.c)
 *     sub_1402E8000 @ 0x1402E8000 (sub_1402E8000.c)
 *     sub_1405A7D28 @ 0x1405A7D28 (sub_1405A7D28.c)
 *     sub_140978C9C @ 0x140978C9C (sub_140978C9C.c)
 *     sub_140979274 @ 0x140979274 (sub_140979274.c)
 *     sub_140983680 @ 0x140983680 (sub_140983680.c)
 *     sub_1409839C0 @ 0x1409839C0 (sub_1409839C0.c)
 * Callees:
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 */

__int64 __fastcall sub_14024B428(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rdx

  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  v5 = (unsigned int)(2 * a2);
  *(_WORD *)(a3 + 8) = 17;
  *(_DWORD *)(a3 + 4) = v5;
  do
  {
    result = sub_1403095B0(&qword_140C534C0, v5);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v7 = *(unsigned int *)(a3 + 4);
    if ( v7 <= a1 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      return result;
    }
    v5 = (unsigned int)(v7 - a1);
    *(_DWORD *)(a3 + 4) = v5;
  }
  while ( (_DWORD)v5 );
  return result;
}
