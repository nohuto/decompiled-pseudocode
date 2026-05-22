/*
 * XREFs of CreateReadCaptureControllerProxy @ 0x18008EFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateReadCaptureControllerProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CReadCaptureControllerProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CReadCaptureControllerProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
