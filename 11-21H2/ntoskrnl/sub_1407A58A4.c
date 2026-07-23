/*
 * XREFs of sub_1407A58A4 @ 0x1407A58A4
 * Callers:
 *     sub_14066C3C0 @ 0x14066C3C0 (sub_14066C3C0.c)
 *     sub_1406BC370 @ 0x1406BC370 (sub_1406BC370.c)
 *     sub_1407A4638 @ 0x1407A4638 (sub_1407A4638.c)
 *     sub_1407A4E8C @ 0x1407A4E8C (sub_1407A4E8C.c)
 * Callees:
 *     sub_1407A59D8 @ 0x1407A59D8 (sub_1407A59D8.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 */

char __fastcall sub_1407A58A4(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)sub_1407A59D8(BugCheckParameter2) )
    return 0;
  sub_1407A5A54(BugCheckParameter2);
  return 1;
}
