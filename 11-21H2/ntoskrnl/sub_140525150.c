/*
 * XREFs of sub_140525150 @ 0x140525150
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140525150(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !byte_140C4BCBC )
    return sub_14042A5E0(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL), *(_QWORD *)(a1 + 40));
  if ( qword_140C4C5C0 )
    return sub_14042A5E0(*(unsigned int *)(a1 + 40), a2);
  return result;
}
