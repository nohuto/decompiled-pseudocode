/*
 * XREFs of sub_140262490 @ 0x140262490
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1402622C0 (RtlGetMultiTimePrecise.c)
 *     sub_140B0A680 @ 0x140B0A680 (sub_140B0A680.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PVOID __fastcall sub_140262490(__int64 a1, __int64 a2)
{
  PVOID result; // rax

  result = qword_140D06B28;
  if ( !qword_140D06B28 )
    return (PVOID)sub_14042A5E0(a1, a2);
  return result;
}
