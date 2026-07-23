/*
 * XREFs of sub_140A944BC @ 0x140A944BC
 * Callers:
 *     sub_140A94324 @ 0x140A94324 (sub_140A94324.c)
 * Callees:
 *     sub_1402DA4B0 @ 0x1402DA4B0 (sub_1402DA4B0.c)
 *     sub_140590A00 @ 0x140590A00 (sub_140590A00.c)
 */

__int64 __fastcall sub_140A944BC(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  char v5; // di
  int v6; // eax
  ULONG_PTR v7; // rdx

  v2 = a2;
  if ( !*a1 || !*a2 )
    return 0LL;
  while ( *a1 != v2[2] )
  {
    v2 += 7;
    if ( !*v2 )
      return 0LL;
  }
  v5 = BYTE4(qword_140D01450);
  if ( (qword_140D01450 & 0x800000000LL) == 0
    || (unsigned int)sub_1402DA4B0() && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v5 & 2) != 0) )
  {
    goto LABEL_14;
  }
  v6 = *((_DWORD *)v2 + 8);
  if ( (v6 & 1) == 0 )
    return 0LL;
  if ( (v6 & 4) != 0 )
  {
LABEL_14:
    v7 = v2[1];
    goto LABEL_15;
  }
  v7 = *(_QWORD *)v2[5];
  if ( !v7 )
    return 0LL;
LABEL_15:
  if ( !v7 )
    return 0LL;
  sub_140590A00((ULONG_PTR)a1, v7);
  return 1LL;
}
