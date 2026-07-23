/*
 * XREFs of sub_14067F2D4 @ 0x14067F2D4
 * Callers:
 *     sub_14067F280 @ 0x14067F280 (sub_14067F280.c)
 *     sub_140741B7C @ 0x140741B7C (sub_140741B7C.c)
 *     sub_14091BA74 @ 0x14091BA74 (sub_14091BA74.c)
 *     sub_14091C1BC @ 0x14091C1BC (sub_14091C1BC.c)
 *     sub_14091C3F0 @ 0x14091C3F0 (sub_14091C3F0.c)
 * Callees:
 *     sub_14067F520 @ 0x14067F520 (sub_14067F520.c)
 */

__int64 __fastcall sub_14067F2D4(_QWORD *a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r9
  __int64 result; // rax

  if ( !a1 || a1 != RMKey && !a1[10] )
    return 3222863877LL;
  if ( !a2 && !a3 )
    return 3222863874LL;
  LODWORD(v6) = qword_140C02770;
  if ( a1 != RMKey )
    v6 = a1[10];
  result = sub_14067F520(a2, a3, (_DWORD)a1, v6, a4, a5);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
