/*
 * XREFs of CreateVisualReferenceProxy @ 0x18008F130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateVisualReferenceProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CVisualReferenceProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CVisualReferenceProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
