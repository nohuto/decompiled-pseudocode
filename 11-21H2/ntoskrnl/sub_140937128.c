/*
 * XREFs of sub_140937128 @ 0x140937128
 * Callers:
 *     sub_1406B9F74 @ 0x1406B9F74 (sub_1406B9F74.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140937128(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r11
  _WORD *v3; // rax
  unsigned __int64 v4; // r10
  _WORD *v5; // rcx
  _WORD *v6; // r8
  _WORD *v7; // rdx

  v2 = *((_QWORD *)a1 + 1);
  v3 = 0LL;
  v4 = *((_QWORD *)a2 + 1);
  v5 = (_WORD *)(v2 + *a1);
  v6 = v5;
  if ( (unsigned __int64)v5 < v2 )
    return 0LL;
  v7 = (_WORD *)(v4 + *a2);
  do
  {
    if ( (unsigned __int64)v7 < v4 || *v6 != *v7 )
      break;
    if ( *v6 == 92 )
      v3 = v6;
    --v6;
    --v7;
  }
  while ( (unsigned __int64)v6 >= v2 );
  if ( v3 )
    return (unsigned __int16)(v5 - v3);
  else
    return 0LL;
}
