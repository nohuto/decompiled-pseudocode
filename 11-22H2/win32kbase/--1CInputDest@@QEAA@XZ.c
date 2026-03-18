/*
 * XREFs of ??1CInputDest@@QEAA@XZ @ 0x1C0056A50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0056A68 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CInputDest::~CInputDest(CInputDest *this)
{
  CInputDest::SetEmpty(this);
}
