/*
 * XREFs of sub_140959D3C @ 0x140959D3C
 * Callers:
 *     sub_140959C24 @ 0x140959C24 (sub_140959C24.c)
 *     sub_140959D3C @ 0x140959D3C (sub_140959D3C.c)
 * Callees:
 *     sub_140959D3C @ 0x140959D3C (sub_140959D3C.c)
 *     sub_140959DF4 @ 0x140959DF4 (sub_140959DF4.c)
 */

__int64 __fastcall sub_140959D3C(ULONG_PTR a1, int a2, int a3, int a4, __int64 a5, char a6)
{
  _QWORD *v6; // rdi
  int v7; // ebx
  int v12; // eax

  v6 = *(_QWORD **)(a1 + 8);
  v7 = 0;
  if ( !v6 )
    return (unsigned int)sub_140959DF4(a1, a5, a6);
  do
  {
    v12 = sub_140959D3C((_DWORD)v6, a2, a3, a4, a5, a6);
    v6 = (_QWORD *)*v6;
    if ( v12 < 0 )
      v7 = -1073741823;
  }
  while ( v6 );
  if ( v7 >= 0 )
    return (unsigned int)sub_140959DF4(a1, a5, a6);
  return (unsigned int)v7;
}
