/*
 * XREFs of CreateVisualProxy @ 0x180010680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateVisualProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CVisualProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CVisualProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
