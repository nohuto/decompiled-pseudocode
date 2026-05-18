/*
 * XREFs of sub_1800DF1F4 @ 0x1800DF1F4
 * Callers:
 *     sub_1800DDB4C @ 0x1800DDB4C (sub_1800DDB4C.c)
 *     sub_1800DDE34 @ 0x1800DDE34 (sub_1800DDE34.c)
 *     sub_1800DF830 @ 0x1800DF830 (sub_1800DF830.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DF1F4(__int64 a1)
{
  __int64 result; // rax

  result = 0x1745D1745D1745DLL;
  if ( *(_QWORD *)(a1 + 16) == 0x1745D1745D1745DLL )
    std::_Xlength_error("unordered_map/set too long");
  return result;
}
