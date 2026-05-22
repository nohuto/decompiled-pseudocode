/*
 * XREFs of CreateInteractionProxy @ 0x18008EDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateInteractionProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CInteractionProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CInteractionProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
