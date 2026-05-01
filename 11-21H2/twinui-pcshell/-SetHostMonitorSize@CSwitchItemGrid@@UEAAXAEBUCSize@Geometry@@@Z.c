/*
 * XREFs of ?SetHostMonitorSize@CSwitchItemGrid@@UEAAXAEBUCSize@Geometry@@@Z @ 0x1804BF900
 * Callers:
 *     <none>
 * Callees:
 *     CSwitchItemGrid::_ForEachGridItem__lambda_994325c3b22a1663c26f656e6d8d432d___ @ 0x1804BDCB8 (CSwitchItemGrid--_ForEachGridItem__lambda_994325c3b22a1663c26f656e6d8d432d___.c)
 *     ?Reset@GridLayout@@QEAAXXZ @ 0x1804BF4CC (-Reset@GridLayout@@QEAAXXZ.c)
 */

void __fastcall CSwitchItemGrid::SetHostMonitorSize(CSwitchItemGrid *this, const struct Geometry::CSize *a2)
{
  const struct Geometry::CSize *v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 160) != *(_DWORD *)a2 || *((_DWORD *)this + 161) != *((_DWORD *)a2 + 1) )
  {
    *((_QWORD *)this + 80) = *(_QWORD *)a2;
    GridLayout::Reset((CSwitchItemGrid *)((char *)this + 560));
    v4 = a2;
    CSwitchItemGrid::_ForEachGridItem__lambda_994325c3b22a1663c26f656e6d8d432d___((__int64)this - 208, &v4);
  }
}
