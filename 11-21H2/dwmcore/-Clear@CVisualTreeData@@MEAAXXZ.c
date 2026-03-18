/*
 * XREFs of ?Clear@CVisualTreeData@@MEAAXXZ @ 0x1801F7330
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800D3590 (-Clear@CTreeData@@MEAAXXZ.c)
 */

void __fastcall CVisualTreeData::Clear(CVisualTreeData *this)
{
  CTreeData::Clear(this);
  *((_QWORD *)this + 52) = 0LL;
}
