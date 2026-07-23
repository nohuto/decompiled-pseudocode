/*
 * XREFs of RtlGetEnabledExtendedFeatures @ 0x1403B6B30
 * Callers:
 *     sub_1403FB1CC @ 0x1403FB1CC (sub_1403FB1CC.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

ULONG64 __stdcall RtlGetEnabledExtendedFeatures(ULONG64 FeatureMask)
{
  return FeatureMask & (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]);
}
