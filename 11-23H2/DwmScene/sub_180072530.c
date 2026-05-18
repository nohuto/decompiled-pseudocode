/*
 * XREFs of sub_180072530 @ 0x180072530
 * Callers:
 *     sub_180073624 @ 0x180073624 (sub_180073624.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180072FD0 @ 0x180072FD0 (sub_180072FD0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180072530(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = sub_180072FD0();
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
    return sub_180010530(v5);
  return result;
}
