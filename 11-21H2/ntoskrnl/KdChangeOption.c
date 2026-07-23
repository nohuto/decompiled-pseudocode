/*
 * XREFs of KdChangeOption @ 0x1405652F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KdChangeOption(
        KD_OPTION Option,
        ULONG InBufferBytes,
        PVOID InBuffer,
        ULONG OutBufferBytes,
        PVOID OutBuffer,
        PULONG OutBufferNeeded)
{
  NTSTATUS result; // eax

  if ( byte_140C09804 )
    return -1073740972;
  if ( Option )
  {
    result = -1073741821;
  }
  else
  {
    if ( InBufferBytes != 1 || OutBufferBytes || OutBuffer )
      return -1073741811;
    if ( byte_140C44528 < 0 )
      return -1073741790;
    byte_140C44528 = *(_BYTE *)InBuffer;
    result = 0;
  }
  if ( OutBufferNeeded )
    *OutBufferNeeded = 0;
  return result;
}
