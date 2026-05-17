/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x180086B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_180187E08);
  while ( !(_DWORD)result );
  return result;
}
