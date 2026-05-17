/*
 * XREFs of RtlIsCloudFilesPlaceholder @ 0x180087CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsCloudFilesPlaceholder(__int16 a1, int a2)
{
  return (a1 & 0x400) != 0 && (a2 & 0xFFFF0FFF) == 0x9000001A;
}
