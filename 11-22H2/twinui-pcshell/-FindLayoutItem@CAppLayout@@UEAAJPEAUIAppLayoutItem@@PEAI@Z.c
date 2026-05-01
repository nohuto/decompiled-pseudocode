/*
 * XREFs of ?FindLayoutItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z @ 0x1807950C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z @ 0x180795140 (-FindLayoutItemInternal@CAppLayout@@UEAAJPEAUIAppLayoutItem@@PEAI@Z.c)
 */

__int64 __fastcall CAppLayout::FindLayoutItem(RTL_SRWLOCK *this, struct IAppLayoutItem *a2, unsigned int *a3)
{
  RTL_SRWLOCK *v6; // rbp
  unsigned int LayoutItemInternal; // ebx

  v6 = this + 2;
  AcquireSRWLockShared(this + 2);
  LayoutItemInternal = CAppLayout::FindLayoutItemInternal((CAppLayout *)&this[-1], a2, a3);
  if ( v6 )
    ReleaseSRWLockShared(v6);
  return LayoutItemInternal;
}
