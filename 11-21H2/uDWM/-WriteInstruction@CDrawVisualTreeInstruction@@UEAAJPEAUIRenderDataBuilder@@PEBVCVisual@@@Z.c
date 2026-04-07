/*
 * XREFs of ?WriteInstruction@CDrawVisualTreeInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x180010200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawVisualTreeInstruction::WriteInstruction(
        CDrawVisualTreeInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 v3; // rcx
  unsigned int v4; // eax

  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v4 = 0;
  if ( v3 )
    v4 = *(_DWORD *)(*(_QWORD *)(v3 + 16) + 24LL);
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, v4);
}
