/*
 * XREFs of sub_1403C24A0 @ 0x1403C24A0
 * Callers:
 *     sub_1403C2378 @ 0x1403C2378 (sub_1403C2378.c)
 *     sub_14056DA54 @ 0x14056DA54 (sub_14056DA54.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1403C24A0(__int64 a1, unsigned __int16 *a2, __int64 *a3, _QWORD *a4)
{
  unsigned __int16 v5; // r10
  __int64 v6; // rdx
  __int64 v7; // rax

  v5 = 0;
  if ( !word_140C2B0F0 )
    return 3221226021LL;
  while ( 1 )
  {
    v6 = qword_140C2B0F8 + 24LL * v5;
    if ( (*(_BYTE *)(v6 + 5) & 1) != 0 && *(_WORD *)(v6 + 6) == *(_WORD *)a1 )
    {
      v7 = *(_QWORD *)(v6 + 16);
      if ( _bittest64(&v7, *(unsigned __int8 *)(a1 + 2)) )
        break;
    }
    if ( ++v5 >= (unsigned __int16)word_140C2B0F0 )
      return 3221226021LL;
  }
  if ( a2 )
    *a2 = v5;
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = *(_QWORD *)(qword_140C2B0E8 + 8LL * v5);
  return 0LL;
}
