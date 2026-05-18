/*
 * XREFs of sub_180092D8C @ 0x180092D8C
 * Callers:
 *     sub_18006906C @ 0x18006906C (sub_18006906C.c)
 *     sub_180091F9C @ 0x180091F9C (sub_180091F9C.c)
 * Callees:
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_180092B70 @ 0x180092B70 (sub_180092B70.c)
 */

char __fastcall sub_180092D8C(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = sub_1800122C0((_QWORD *)(a1 + 112));
  if ( result )
    return sub_180092B70(v2);
  return result;
}
