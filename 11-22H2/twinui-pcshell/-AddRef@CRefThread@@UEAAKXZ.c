/*
 * XREFs of ?AddRef@CRefThread@@UEAAKXZ @ 0x1801C1120
 * Callers:
 *     ?AddRef@CDuiRefThread@@WCA@EAAKXZ @ 0x18029A370 (-AddRef@CDuiRefThread@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRefThread::AddRef(volatile signed __int32 **this)
{
  return (unsigned int)_InterlockedIncrement(this[1]);
}
