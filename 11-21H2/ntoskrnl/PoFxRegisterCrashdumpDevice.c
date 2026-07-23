/*
 * XREFs of PoFxRegisterCrashdumpDevice @ 0x14081D0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405CECB0 @ 0x1405CECB0 (sub_1405CECB0.c)
 */

__int64 __fastcall PoFxRegisterCrashdumpDevice(__int64 a1)
{
  if ( !a1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 64) )
    return sub_1405CECB0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 72), a1);
  return 3221225659LL;
}
