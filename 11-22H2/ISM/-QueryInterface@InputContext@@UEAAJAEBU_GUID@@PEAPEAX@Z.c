/*
 * XREFs of ?QueryInterface@InputContext@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DA4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall InputContext::QueryInterface(InputContext *this, struct _GUID *a2, void **a3)
{
  return RefCountedObject::QueryInterface(this, a2, a3);
}
