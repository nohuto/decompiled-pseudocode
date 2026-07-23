/*
 * XREFs of sub_140775110 @ 0x140775110
 * Callers:
 *     sub_140768080 @ 0x140768080 (sub_140768080.c)
 *     sub_14076BB84 @ 0x14076BB84 (sub_14076BB84.c)
 *     sub_14076BC20 @ 0x14076BC20 (sub_14076BC20.c)
 *     sub_1407750C0 @ 0x1407750C0 (sub_1407750C0.c)
 *     sub_14080E218 @ 0x14080E218 (sub_14080E218.c)
 *     sub_140942E94 @ 0x140942E94 (sub_140942E94.c)
 *     sub_1409581A0 @ 0x1409581A0 (sub_1409581A0.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140775110(__int64 a1)
{
  __int64 v1; // rax

  if ( a1 && (v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL)) != 0 )
    return (__int64 *)(v1 + 16);
  else
    return &qword_140C46B30;
}
