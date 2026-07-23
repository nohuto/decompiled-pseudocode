/*
 * XREFs of sub_14025408C @ 0x14025408C
 * Callers:
 *     sub_140278460 @ 0x140278460 (sub_140278460.c)
 * Callees:
 *     sub_140254124 @ 0x140254124 (sub_140254124.c)
 */

unsigned __int64 __fastcall sub_14025408C(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // r9
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rax

  if ( !*(_BYTE *)(a1 + 15590) )
    return a2;
  v5 = 0LL;
  v6 = qword_14001C780;
  do
  {
    if ( *v6 == a3 )
      break;
    v5 = (unsigned int)(v5 + 1);
    ++v6;
  }
  while ( (unsigned int)v5 < 3 );
  if ( (unsigned int)v5 > 1 )
    return a2;
  v7 = (_QWORD *)(16 * v5 + a1 + 15816);
  if ( !*v7 )
    return a2;
  v8 = a2 / a3;
  v9 = sub_140254124(v7, a2 / a3, a3, v6);
  if ( v9 != -1 )
  {
    v10 = v9 + 1;
    if ( v10 < v8 )
      return a3 * v10;
    return a2;
  }
  return 0LL;
}
