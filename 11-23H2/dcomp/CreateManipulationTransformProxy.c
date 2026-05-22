/*
 * XREFs of CreateManipulationTransformProxy @ 0x18008EE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateManipulationTransformProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CManipulationTransformProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CManipulationTransformProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
