/*
 * XREFs of sub_140568220 @ 0x140568220
 * Callers:
 *     sub_1405557FC @ 0x1405557FC (sub_1405557FC.c)
 *     sub_1405660A0 @ 0x1405660A0 (sub_1405660A0.c)
 * Callees:
 *     sub_14028FBF0 @ 0x14028FBF0 (sub_14028FBF0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void sub_140568220()
{
  __int64 v0; // rbx
  __int64 *v1; // r15
  __int64 v2; // r14
  unsigned int i; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx

  v0 = qword_140C2BD20;
  if ( qword_140C2BD20 && qword_140C2BD28 )
  {
    v1 = &qword_140C2BD20;
    while ( (__int64 *)v0 != &qword_140C2BD20 && (v0 & 7) == 0 )
    {
      v2 = v0;
      for ( i = 0; i < 0x40; ++i )
      {
        if ( !sub_14028FBF0(v2) )
          return;
        ++v2;
      }
      if ( *(__int64 **)(v0 + 8) != v1 )
        break;
      v4 = *(unsigned int *)(v0 + 32);
      v5 = *(_QWORD *)(v0 + 24);
      if ( *(_BYTE *)(v0 + 56) == 1 && *(_QWORD *)(v0 + 48) == v5 + *(_QWORD *)(v0 + 16) + v4 + *(_QWORD *)(v0 + 40) )
      {
        *(_BYTE *)(v0 + 56) = 2;
        sub_14042A5E0(v5, v4);
        *(_BYTE *)(v0 + 56) = 3;
      }
      v1 = (__int64 *)v0;
      v0 = *(_QWORD *)v0;
    }
  }
}
