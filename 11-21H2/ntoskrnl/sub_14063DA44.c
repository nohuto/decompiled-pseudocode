/*
 * XREFs of sub_14063DA44 @ 0x14063DA44
 * Callers:
 *     sub_14030A3C0 @ 0x14030A3C0 (sub_14030A3C0.c)
 * Callees:
 *     sub_14056DF08 @ 0x14056DF08 (sub_14056DF08.c)
 */

unsigned __int64 __fastcall sub_14063DA44(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v4 = (__int64 *)qword_140C11730;
  v5 = -1LL;
  v6 = -1LL;
  while ( v4 != &qword_140C11730 )
  {
    v7 = (__int64)(v4 - 33);
    v4 = (__int64 *)*v4;
    if ( (*(_BYTE *)(v7 + 304) & 4) != 0 )
    {
      if ( *(_QWORD *)(v7 + 256) )
        v6 = sub_14056DF08(v7, v6, a3, a4);
      if ( v6 && v6 < v5 )
        v5 = v6;
    }
  }
  return v5;
}
