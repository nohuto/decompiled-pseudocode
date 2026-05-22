/*
 * XREFs of ?Release@InputProcess@@UEAAKXZ @ 0x18004C8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall InputProcess::Release(InputProcess *this)
{
  return RefCountedObject::Release(this);
}
