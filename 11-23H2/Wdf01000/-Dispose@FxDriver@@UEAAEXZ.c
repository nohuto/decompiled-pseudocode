/*
 * XREFs of ?Dispose@FxDriver@@UEAAEXZ @ 0x1C0040040
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0041EE4 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDriver::Dispose(FxDriver *this)
{
  FxDisposeList *m_DisposeList; // rcx

  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList);
  return 1;
}
