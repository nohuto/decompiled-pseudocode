/*
 * XREFs of sub_1405781D0 @ 0x1405781D0
 * Callers:
 *     sub_1402FF310 @ 0x1402FF310 (sub_1402FF310.c)
 * Callees:
 *     sub_1402FE1C4 @ 0x1402FE1C4 (sub_1402FE1C4.c)
 */

void __fastcall sub_1405781D0(__int128 **a1)
{
  __int128 *v2; // rbx
  __int128 *v3; // rax
  unsigned int v4; // edx

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (__int128 *)a1 )
      break;
    if ( *((__int128 ***)v2 + 1) != a1 || (v3 = *(__int128 **)v2, *(__int128 **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    *((_QWORD *)v3 + 1) = a1;
    v4 = dword_140D0E5E0[(unsigned int)sub_1402FE1C4(v2 - 9)];
    *(_DWORD *)((char *)v2 - 22) = 0;
    *((_WORD *)v2 - 9) = 0;
    *((_WORD *)v2 - 12) = v4 >> 6;
    *((_QWORD *)v2 - 4) = 1LL << (v4 & 0x3F);
  }
}
