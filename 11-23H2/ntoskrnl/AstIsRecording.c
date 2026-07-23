/*
 * XREFs of AstIsRecording @ 0x14076BC04
 * Callers:
 *     AstLogDeviceSDDLUpdated @ 0x14069C6E8 (AstLogDeviceSDDLUpdated.c)
 *     AstLogDeviceCreated @ 0x14076BAC0 (AstLogDeviceCreated.c)
 * Callees:
 *     <none>
 */

bool AstIsRecording()
{
  return AstIsActive && dword_140C038E0;
}
