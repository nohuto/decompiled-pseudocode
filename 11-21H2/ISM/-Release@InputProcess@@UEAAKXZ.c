/*
 * XREFs of ?Release@InputProcess@@UEAAKXZ @ 0x180047360
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
