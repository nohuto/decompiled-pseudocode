/*
 * XREFs of CreateRemoteAppRenderTargetProxy @ 0x18008EF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void **__fastcall CreateRemoteAppRenderTargetProxy(__int64 a1, int a2, _QWORD *a3)
{
  void **result; // rax

  result = &DirectComposition::CRemoteAppRenderTargetProxy::`vftable';
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &DirectComposition::CRemoteAppRenderTargetProxy::`vftable';
  *(_DWORD *)(a1 + 12) = a2;
  *a3 = a1;
  return result;
}
