/*
 * XREFs of sub_140516D30 @ 0x140516D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_14051910C @ 0x14051910C (sub_14051910C.c)
 */

__int64 __fastcall sub_140516D30(__int64 a1, __int64 a2)
{
  if ( *(_BYTE *)(a1 + 433) )
    return 3221225485LL;
  if ( (*(_DWORD *)(a2 + 12) & 1) != 0 )
    return 3221225760LL;
  sub_14051910C(*(_QWORD *)(a1 + 360), *(unsigned int *)(a1 + 372), a2);
  return 0LL;
}
