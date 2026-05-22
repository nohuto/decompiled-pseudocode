/*
 * XREFs of CreateSharedTransformProxy @ 0x18008F0B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateSharedTransformProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CSharedTransformProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CSharedTransformProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
