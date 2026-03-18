/*
 * XREFs of ?GetRenderTargetInfo@CRemoteRenderTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800F9F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteRenderTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8

  result = a2;
  v3 = *(_QWORD *)(a1 + 156);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 140);
  *(_QWORD *)(a2 + 16) = v3;
  return result;
}
