/*
 * XREFs of sub_1C00AA604 @ 0x1C00AA604
 * Callers:
 *     sub_1C0035018 @ 0x1C0035018 (sub_1C0035018.c)
 * Callees:
 *     sub_1C00AA6DC @ 0x1C00AA6DC (sub_1C00AA6DC.c)
 */

__int64 __fastcall sub_1C00AA604(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf

  if ( a1
    && a2
    && a3
    && ((*a1 = ((__int64 (*)(void))sub_1C00AA6DC)(), v6 = sub_1C00AA6DC(v5, a3), v7 = *a1 == 0LL, a1[1] = v6, v7) || !v6) )
  {
    return 3221225495LL;
  }
  else
  {
    return 0LL;
  }
}
