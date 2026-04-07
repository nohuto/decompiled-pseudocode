/*
 * XREFs of ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x18004679C
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x18000CAF4 (-Create@CTransitionWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x18004668C (-Create@CTransitionWindowSnapshot@@SAJPEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F46C (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTransitionWindowSnapshot *__fastcall CTransitionWindowSnapshot::CTransitionWindowSnapshot(
        CTransitionWindowSnapshot *this)
{
  __int64 v1; // rcx
  CTransitionWindowSnapshot *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_DWORD *)(v1 + 360) = 1065353216;
  *(_QWORD *)v1 = &CTransitionWindowSnapshot::`vftable';
  result = (CTransitionWindowSnapshot *)v1;
  *(_BYTE *)(v1 + 364) = 1;
  return result;
}
