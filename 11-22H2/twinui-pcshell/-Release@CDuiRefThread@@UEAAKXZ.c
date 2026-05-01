/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x1801A9030
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x18029A410 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
