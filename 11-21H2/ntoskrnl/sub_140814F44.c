/*
 * XREFs of sub_140814F44 @ 0x140814F44
 * Callers:
 *     sub_1403AAEF4 @ 0x1403AAEF4 (sub_1403AAEF4.c)
 *     sub_1406ECACC @ 0x1406ECACC (sub_1406ECACC.c)
 * Callees:
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 */

void __fastcall sub_140814F44(unsigned int a1, char a2)
{
  unsigned int v2; // esi
  unsigned int v3; // edi
  __int64 i; // rbx
  __int64 v6; // rcx

  v2 = dword_140D06884;
  v3 = 0;
  for ( i = a1; v3 < v2; ++v3 )
  {
    v6 = *(_QWORD *)(sub_140348800(v3) + 34472);
    if ( *(_QWORD *)(v6 + 8 * i + 392) )
      *(_BYTE *)(i + v6 + 384) = 1;
  }
  if ( a2 )
    --dword_140C5B108[i];
}
