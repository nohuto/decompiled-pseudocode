/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1802105E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x18002D200 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 49) = 0LL;
}
