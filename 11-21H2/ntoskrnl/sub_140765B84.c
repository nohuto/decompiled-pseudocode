/*
 * XREFs of sub_140765B84 @ 0x140765B84
 * Callers:
 *     sub_1406602DC @ 0x1406602DC (sub_1406602DC.c)
 *     sub_14076556C @ 0x14076556C (sub_14076556C.c)
 *     sub_140765A28 @ 0x140765A28 (sub_140765A28.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140765B84(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 152);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  return result;
}
