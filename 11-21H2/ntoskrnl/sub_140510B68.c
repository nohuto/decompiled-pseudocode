/*
 * XREFs of sub_140510B68 @ 0x140510B68
 * Callers:
 *     sub_14051BA00 @ 0x14051BA00 (sub_14051BA00.c)
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140510B68(__int64 a1)
{
  __int64 v1; // rdx

  if ( *(_DWORD *)a1 != 1 )
    return 0;
  v1 = qword_140C4BCC0;
  if ( (__int64 *)qword_140C4BCC0 == &qword_140C4BCC0 )
    return 0;
  while ( *(_DWORD *)(v1 + 16) != *(unsigned __int16 *)(a1 + 8)
       || *(_QWORD *)(v1 + 24) != *(unsigned __int16 *)(a1 + 12) )
  {
    v1 = *(_QWORD *)v1;
    if ( (__int64 *)v1 == &qword_140C4BCC0 )
      return 0;
  }
  return 1;
}
