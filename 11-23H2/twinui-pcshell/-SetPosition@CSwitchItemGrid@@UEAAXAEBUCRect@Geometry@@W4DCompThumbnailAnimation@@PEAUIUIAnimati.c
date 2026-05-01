/*
 * XREFs of ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x18057A5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x180579EDC (-Reset@GridLayout@@QEAAXXZ.c)
 */

void __fastcall CSwitchItemGrid::SetPosition(_DWORD *a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  if ( a2[2] - *a2 < a1[16] - a1[14] || a2[3] - a2[1] < a1[17] - a1[15] )
    GridLayout::Reset((GridLayout *)(a1 + 192));
  CMultitaskingViewElementBase::SetPosition(a1, a2, a3, a4);
}
