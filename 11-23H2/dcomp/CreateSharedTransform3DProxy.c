/*
 * XREFs of CreateSharedTransform3DProxy @ 0x18008F080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateSharedTransform3DProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CSharedTransform3DProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CSharedTransform3DProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
