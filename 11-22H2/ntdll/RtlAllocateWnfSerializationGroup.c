/*
 * XREFs of RtlAllocateWnfSerializationGroup @ 0x180086340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAllocateWnfSerializationGroup()
{
  __int64 result; // rax

  do
    result = (unsigned int)_InterlockedIncrement(&dword_180184D18);
  while ( !(_DWORD)result );
  return result;
}
