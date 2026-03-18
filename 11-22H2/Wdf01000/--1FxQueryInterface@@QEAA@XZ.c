/*
 * XREFs of ??1FxQueryInterface@@QEAA@XZ @ 0x1C002B9EC
 * Callers:
 *     ??_GFxQueryInterface@@QEAAPEAXI@Z @ 0x1C002B674 (--_GFxQueryInterface@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxQueryInterface::~FxQueryInterface(FxQueryInterface *this)
{
  _INTERFACE *m_Interface; // rcx

  m_Interface = this->m_Interface;
  if ( m_Interface )
  {
    if ( !this->m_EmbeddedInterface )
      FxPoolFree((FX_POOL_TRACKER *)m_Interface);
  }
}
