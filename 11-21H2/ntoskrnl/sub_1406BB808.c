/*
 * XREFs of sub_1406BB808 @ 0x1406BB808
 * Callers:
 *     sub_1406BB760 @ 0x1406BB760 (sub_1406BB760.c)
 * Callees:
 *     sub_14025032C @ 0x14025032C (sub_14025032C.c)
 *     sub_1407A1AC0 @ 0x1407A1AC0 (sub_1407A1AC0.c)
 */

__int64 __fastcall sub_1406BB808(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  __int64 v6; // rbx

  v6 = sub_1407A1AC0(BugCheckParameter2, BugCheckParameter1);
  if ( !v6 )
    sub_14025032C(BugCheckParameter2, BugCheckParameter1, a3);
  return v6;
}
