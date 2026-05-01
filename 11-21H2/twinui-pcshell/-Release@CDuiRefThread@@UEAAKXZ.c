/*
 * XREFs of ?Release@CDuiRefThread@@UEAAKXZ @ 0x180169C40
 * Callers:
 *     ?Release@CDuiRefThread@@WCA@EAAKXZ @ 0x1801F6A30 (-Release@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CDuiRefThread::Release(CDuiRefThread *this)
{
  return CRefThread::Release(this);
}
