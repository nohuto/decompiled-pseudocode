/*
 * XREFs of CreateMatrixTransform3DProxy @ 0x18008EE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateMatrixTransform3DProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CMatrixTransform3DProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CMatrixTransform3DProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
